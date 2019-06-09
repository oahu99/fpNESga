module PPU 
(
    input logic clk, reset, RWE, 
    output logic OAM_en,
    output logic nmi_interrupt, // NMI interrupt for CPU
    input logic [15:0] cpu_addr, // address line from CPU
    input logic [7:0] data_in,
    output logic [7:0] data_out_ppu,
	output logic [3:0] hex_values [7:0], // values for hex display
    output logic [7:0] RED, GREEN, BLUE,
    output logic VGA_CLK, VGA_HS, VGA_VS, VGA_BLANK_N, VGA_SYNC_N,
	output logic [15:0] PPUSCROLL,
    input logic vga_reset,
    input logic [7:0] multiplier, multiplier_two,
    output logic nt_bit,
    output logic [15:0] oam_fetch_address_q
);

logic [7:0] palette_ram [31:0]; // palette ram data
logic [7:0] color_code, color_code_bg, color_code_spr; // color code for RGB lookup table
logic [3:0] sprite_counter; // counts number of sprites on current scanline
logic CLK_COUNTER; // clock divider
logic PPU_ADDR_FLAG, PPU_SCROLL_FLAG; // write LSB or MSB of PPU address
logic [7:0] mem_data_out, mem_data_out_d, mem_data_in; // data i/o for ppu memory interface

logic [15:0] ppu_w_address, ppu_r_address, ppu_ppu_r_address, ppu_bg_r_address, ppu_reg_r_address, sprite_address;

logic vblank, ppu_mem_rwe, ppu_read; // logic for vblank enable

logic vga_vblank; // single bit signals for VGA controller
logic [9:0] DrawX, DrawY; // X and Y coordinates of current pixel
logic [7:0] RED_bg, GREEN_bg, BLUE_bg, RED_sp, GREEN_sp, BLUE_sp;
logic [15:0] PPUADDR; // scroll and address registers
logic [7:0] PPUCTRL, PPUMASK, PPUSTATUS, OAMADDR, OAMDATA, PPUDATA, OAMDMA, data_out_oam;
logic [7:0] sprite_data_in; // data from VRAM for bitmap
logic sprite_mem_access; // read enable bit
logic [15:0] sprite_address_q, sprite_address_d, address_to_vram;
logic priority_bit; // select bg/sprite

assign ppu_r_address = (~vblank) ? ppu_ppu_r_address : ppu_reg_r_address;
assign ppu_ppu_r_address = (DrawX > 257 && DrawX < 320) ? sprite_address : ppu_bg_r_address; // switch between background renderer and sprite renderer VRAM access
assign ppu_mem_rwe = (vblank) ? RWE : 0;

test_ppu_memory MEM1 (.clk, .ppu_mem_rwe, .ppu_w_address, .ppu_r_address, .mem_data_in, .mem_data_out, .cpu_address(cpu_addr));

VGA_controller VGC_0 (.Clk(clk), .VGA_HS, .VGA_VS, .Reset(reset), .VGA_CLK, .VGA_BLANK_N, .DrawX, .DrawY, .VGA_SYNC_N); // VGA output controller

PPU_BG BG0 (
                .clk, 
                .VGA_CLK, 
                .reset, 
                .vga_vblank, 
                .PPUCTRL, 
                .DrawX, 
                .DrawY, 
                .vblank, 
                .ppu_bg_r_address, 
                .data_in, 
                .RED(RED_bg),
                .GREEN(GREEN_bg),
                .BLUE(BLUE_bg),
                .mem_data_out,
                .ppu_read, 
                .color_code(color_code_bg), 
                .cpu_addr, 
                .PPU_SCROLL_FLAG, 
                .RWE, 
                .PPU_ADDR_FLAG,
                .multiplier,
                .multiplier_two,
                .PPUSCROLL,
                .palette_ram,
                .nt_bit
            );

PPU_SPR PSR0 (
                .clk, 
				.reset, 
				.OAM_en,
				.DrawX, 
				.DrawY,
				.data_in, 
				.mem_data_out,
				.vblank,
				.priority_bit,
				.sprite_address,
				.color_code(color_code_spr),
				.RED(RED_sp), 
				.GREEN(GREEN_sp), 
				.BLUE(BLUE_sp),
                .address_cpu(cpu_addr),
                .RWE,
                .oam_fetch_address_q
             );

// palette_look_up PLU (.color_code, .RED, .GREEN, .BLUE); // lookup table for RGB values

// vga_clk VCLK (.inclk0(clk), .c0(VGA_CLK));

always_comb begin
	
	if(priority_bit)
		color_code = color_code_spr;
	else
		color_code = color_code_bg;
	if(priority_bit) begin
		RED = RED_sp; 
		GREEN = GREEN_sp; 
		BLUE = BLUE_sp;
	end
	else begin
		RED = RED_bg;
		GREEN = GREEN_bg; 
		BLUE = BLUE_bg;
	end
	

    vga_vblank = ~VGA_BLANK_N; // blanking signal from VGA controller  
end

always_ff @ (posedge clk) begin // block for register access and reset routing

if (reset) begin
    PPU_ADDR_FLAG <= 0;
    PPU_SCROLL_FLAG <= 0;
    PPUSTATUS <= 0;
end


if (vga_reset)
    VGA_CLK <= 0;

else
    VGA_CLK <= ~VGA_CLK;

//TESTING
//PPUSTATUS <= 8'h80; // assert vblank and increment for VRAM access

PPUSTATUS[7] <= vblank;
PPUSTATUS[6] <= ~vblank;

nmi_interrupt <= (PPUCTRL[7] & PPUSTATUS[7]) ? 1 : 0; // set NMI if vblank and NMI enable high

case (cpu_addr) // map registers to CPU memory space

    16'h2000, 16'h0778 : begin 
        if (RWE) begin
            PPUCTRL <= data_in;
            PPUSTATUS[4:0] <= data_in[4:0];
        end
        else
            data_out_ppu <= PPUCTRL;
        end

    16'h2001, 16'h0779 : begin 
        if (RWE) begin
            PPUMASK <= data_in;
            PPUSTATUS[4:0] <= data_in[4:0];
        end
        else
            data_out_ppu <= PPUMASK;
        end

    16'h2002 : begin 
        if (~RWE) begin
            PPU_SCROLL_FLAG <= 0;
            data_out_ppu <= PPUSTATUS;
            end
        end 

    16'h2003 : begin 
        if (RWE) begin
            OAMADDR <= data_in;
            PPUSTATUS[4:0] <= data_in[4:0];
        end
        else
            data_out_ppu <= OAMADDR;
        end 

    16'h2004 : begin 
        if (RWE) begin
            OAMDATA <= data_in;
            PPUSTATUS[4:0] <= data_in[4:0];
        end
        else
            data_out_ppu <= OAMDATA;
        end

    16'h2005 : begin 
        if (RWE & PPU_SCROLL_FLAG == 0) begin 
            PPUSCROLL[7:0] <= data_in;
            PPU_SCROLL_FLAG <= 1; // signal MSB has been written to
            PPUSTATUS[4:0] <= data_in[4:0];
            end
        else if (RWE & PPU_SCROLL_FLAG == 1) begin
            PPUSCROLL[15:8] <= data_in;
            PPU_SCROLL_FLAG <= 0; // reset flag
            PPUSTATUS[7:0] <= data_in[4:0];
        end
        else
            PPUSCROLL <= PPUSCROLL;
    end

    16'h2006 : begin 
        if (RWE & PPU_ADDR_FLAG == 0) begin
            PPUADDR[15:8] <= data_in;
            PPU_ADDR_FLAG <= 1; // signals MSB is written to
            PPUSTATUS[4:0] <= data_in[4:0];
            end
        else if (RWE & PPU_ADDR_FLAG == 1) begin
            PPUADDR[7:0] <= data_in;
            PPU_ADDR_FLAG <= 0;
            PPUSTATUS[4:0] <= data_in[4:0];
        end
    end


    16'h2007 : begin  // PPUDATA
    
        if (PPUCTRL[2])
            PPUADDR <= PPUADDR + 32;
        else    
            PPUADDR <= PPUADDR + 1;


        if (RWE) begin
            PPUDATA <= data_in;
            // PPUADDR <= PPUADDR + PPUSTATUS[2]; // increment vram access register

            ppu_w_address <= PPUADDR;
            mem_data_in <= data_in;
            PPUSTATUS[4:0] <= data_in[4:0];
            // ppu_r_address <= 16'hxxxx;
        end
        else begin
            data_out_ppu <= mem_data_out;
            // PPUADDR <= PPUADDR + PPUSTATUS[2]; // increment vram access register
            ppu_reg_r_address <= PPUADDR; // commented out for PPU access test
            PPUSTATUS[4:0] <= data_in[4:0];
            // ppu_w_address <= 16'hxxxx;
        end
    end 

    default  :  begin
            data_out_ppu <= 8'hxx;
            PPUSCROLL <= PPUSCROLL;
            end

endcase

end




always_comb begin



end

endmodule
