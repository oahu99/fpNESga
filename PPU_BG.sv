module PPU_BG // PPU background renderer
(
    input logic clk, reset,
    input logic [9:0] DrawX, DrawY,
    input logic vga_vblank, VGA_CLK,
    input logic [15:0] PPUSCROLL,
    output logic vblank, ppu_read,
    input logic [7:0] PPUCTRL, mem_data_out, data_in, 
    output logic [15:0] ppu_bg_r_address,
    output logic [7:0] color_code, // color code for RGB lookup table
    input logic [15:0] cpu_addr, // cpu address for updating LoopyT
    input logic PPU_SCROLL_FLAG, PPU_ADDR_FLAG,// for writing to LoopyT
    input logic RWE, // cpu write enable
    input logic [7:0] multiplier, multiplier_two,
    output logic [7:0] palette_ram [31:0], // palette ram data
    output logic [7:0] RED, GREEN, BLUE,
    output logic nt_bit
);

logic LoopyT_Next;

logic [9:0] horiz_counter, vert_counter; // PPU internal horizontal and vertical indeces
logic [15:0] nt_address, ppu_r_addr_q, ppu_r_addr_d, at_address;
logic [15:0] bitmap_one_address, bitmap_two_address;
logic [7:0] pattern_byte_0_next, pattern_byte_1_next, pattern_byte_0_curr, pattern_byte_1_curr; // stores first and second byte of the pattern table section
logic [7:0] nametable_byte_curr, attribute_data_curr, nametable_byte_next, attribute_data_next;
logic [3:0] fetch_phase, fetch_phase_next; // bits for fetch state machine
logic ALE; // address latch enable
logic [7:0] pipe_0, pipe_1, pipe_2, pipe_3; // shift registers for background rendering

logic [15:0] palette_mem_address; // address pointing to palette memory
logic [5:0] palette_fetch_counter; // counter for 32 fetches to memory
logic palette_fetch_enable; // fetches exactly once per frame
logic [1:0] bitmap [7:0]; // register for concatonated bitmap 
logic [2:0] bitmap_index;
logic [10:0] bitmap_vertical_index;
logic [7:0] bg_palette_ram_separated [3:0]; // palette ram split for attribute lookup
logic [1:0] attribute_top_left, attribute_bottom_left, attribute_top_right, attribute_bottom_right; // break out two bit attribute selections
logic right, left, top, bottom; // bits for attribute data lookup
logic [15:0] at_scroll_address, nt_scroll_address; // addresses for coarse scrolling
logic [14:0] LoopyV, LoopyT, LoopyV_temp, LoopyV_temp_two; // loopy scrool registers
logic [2:0] fine_x, fine_y, loopy_x; // fine x and y for loopy scroll
logic [7:0] offset; // X offset for coarse scrolling
logic [15:0] nt_base, curr_nt, next_nt; // base address for nametable
logic [15:0] at_base, curr_at, next_at; // base address for attribute table
logic [7:0] next_table;
logic [7:0] coarse_x;
logic ppu_address_latch;
logic pre_render;
logic ppu_increment;
logic [1:0] current_px;
logic mem_fetch;
logic loopy_latch;

always_ff @ (posedge clk) begin

    ppu_r_addr_d <= ppu_r_addr_q;

    if (DrawX < 257 | (DrawX > 790 & DrawX < 800)) begin
        case (DrawX % 8)
            1,2 : nametable_byte_next <= mem_data_out;
            3,4 : attribute_data_next <= mem_data_out;
            5,6 : pattern_byte_0_next <= mem_data_out;
            7,8 : pattern_byte_1_next <= mem_data_out;
        endcase
    end
    else 
        begin
            pattern_byte_1_next <= pattern_byte_1_next;
            pattern_byte_0_next <= pattern_byte_0_next;
            nametable_byte_curr <= nametable_byte_curr;
            attribute_data_curr <= attribute_data_curr;
        end
if (DrawX < 257 && DrawY < 241) begin
    case (current_px)
        2'b00 : begin 
                    RED <= 187; 
                    GREEN <= 100; 
                    BLUE <= 252; 
                end
        2'b01 : begin 
                    RED <= 255;
                    GREEN <= 255;
                    BLUE <= 255; 
                end
        2'b10 : begin 
                    RED <= 0; 
                    GREEN <= 255; 
                    BLUE <= 0; 
                end
        2'b11 : begin 
                    RED <= 0; 
                    GREEN <= 0;
                    BLUE <= 255; 
                end
    endcase
end
else begin
    RED <= 0; 
    GREEN <= 0;
    BLUE <= 0;
end
end

always_comb begin

    attribute_top_left = attribute_data_curr[1:0]; // break out attribute selection for each tile within attribute tile
    attribute_top_right = attribute_data_curr[3:2];
    attribute_bottom_left = attribute_data_curr[5:4];
    attribute_bottom_right = attribute_data_curr[7:6];

    ppu_bg_r_address = (mem_fetch) ? ppu_r_addr_q : palette_mem_address; // logic for address latch

    nt_bit = LoopyT[10];

end

always_ff @ (posedge clk) begin
    LoopyT[11] <= 0;
    if (loopy_latch)
        loopy_latch <= 0;

    if (((DrawY < 240) && (DrawX < 257)) || ((DrawY == 524) && (DrawX > 700 & DrawX < 800))) begin
        if (LoopyT[4:0] == 5'b11111) begin
            LoopyT[4:0] <= 5'b00000;
            if (LoopyT[10]) begin
                LoopyT_Next <= 0;
                LoopyT[10] <= LoopyT_Next;
            end
            else begin
                LoopyT_Next <= 1;
                LoopyT[10] <= LoopyT_Next;
            end
        end
    end

    if (reset) begin
        LoopyT <= 0;
        LoopyT_Next <= 0;
        loopy_x <= 0;
        ppu_address_latch <= 0;
        ppu_increment <= 0;
    end

    else begin
        // CPU LoopyT access
         /*
        // modelsim scroll testing
        LoopyT[10] <= 1;
        LoopyT[11] <= 0;
        LoopyT[4:0] <= 5'h08;
        */
        
        
        if (RWE & cpu_addr == 16'h2000) begin
            //LoopyT[10] <= data_in[0]; // nametable number from ppuctrl
            LoopyT[11] <= 0;//data_in[1];
            ppu_increment <= data_in[2];
        end 
        
       
        else if (RWE & cpu_addr == 16'h2005) begin

            if (!ppu_address_latch) begin
                LoopyT[4:0] <= data_in[7:3];
                loopy_x <= data_in[2:0];
            end
            else begin
                LoopyT[9:5] <= data_in[7:3];
                LoopyT[14:12] <= data_in[2:0];
            end
            ppu_address_latch <= !ppu_address_latch;

        end 
        
        if (RWE & cpu_addr == 16'h2006)  begin
            if (!ppu_address_latch) begin
                LoopyT[13:12] <= data_in[5:4];
                LoopyT[9:8] <= data_in[2:0];
                LoopyT[11] <= 0;
                LoopyT[14] <= 0;
            end 
            else begin
                LoopyT[7:0] <= data_in;
                loopy_latch <= 1;
            end
            ppu_address_latch <= !ppu_address_latch;
        end 
        else if (~RWE && cpu_addr == 16'h2002) 
            ppu_address_latch <= 0; //Reset PPU address latch
            
    end // end cpu loopy access
    
end

always_ff @ (posedge VGA_CLK) 
begin // loopy scroll
    LoopyV[11] <= 0;
    if (DrawY == 524 & DrawX > 280 & DrawX < 305) begin// update loopyV during pre_render
        LoopyV[14:11] <= LoopyT[14:11];
        LoopyV[9:5] <= LoopyT[9:5];
    end
    
    if ((~RWE || RWE) && cpu_addr == 16'h2007 && vblank) 
        LoopyV <= LoopyV + (ppu_increment ? 32 : 1);  // Increment address every time we accessed a reg

    if (loopy_latch)
        LoopyV <= LoopyT;
    
    if (~RWE & cpu_addr == 2002)
        vblank <= 0;

    // set vblank at post-render
    if (DrawY == 241 & DrawX == 1) 
        vblank <= 1;
    else if (DrawY == 524 & DrawX == 1) // clear vblank for pre render
        vblank <= 0;
    else    
        vblank <= vblank;

    if (reset) begin // reset handling
        LoopyV <= 0;
        vblank <= 1;
    end

    else if ((DrawY < 240 | DrawY == 524) & (DrawX < 258 | (DrawX > 788 & DrawX < 800))) begin // check if rendering
            // Horizontal Increment
            if (DrawX[2:0] == 0 & DrawX != 257) begin
                pattern_byte_0_curr <= pattern_byte_0_next; // shift in bitmap
                pattern_byte_1_curr <= pattern_byte_1_next;
                if (LoopyV[4:0] == 31) begin // check if at X tile 31   
                    LoopyV[4:0] <= 0; // reset X to 0
                    if (LoopyV[10])
                        LoopyV[10] <= 0;
                    else
                        LoopyV[10] <= 1;
                end
                else begin // increment coarse X
                    LoopyV[4:0] <= LoopyV[4:0] + 1;
                    //LoopyV <= LoopyV_temp;
                end
            end

            // Vertical Increment  
            if (DrawX == 256) begin
                if (LoopyV[14:12] == 7) begin // if at bottom of tile
                    LoopyV[14:12] <= 0; // reset fine y
                    if (LoopyV[9:5] == 29) begin // coarse Y at last tile
                        LoopyV[9:5] <= 0; // reset coarse vert to 0
                       // LoopyV[11] <= ~LoopyV[11]; // flip v name table
                    end
                    else   
                        LoopyV[9:5] <= LoopyV[9:5] + 1; // increment coarse
                end 
                else
                    LoopyV[14:12] <= LoopyV[14:12] + 1; // increment fine
            end

            // Horizontal Reset at DrawX 257
            
            if (DrawX == 257) begin
                LoopyV[10] <= LoopyT[10];
                LoopyV[4:0] <= LoopyT[4:0];
            end
              
            
    end //first if end

end // always ff end
  

always_comb begin

    //loopy = LoopyV;
    fine_x = loopy_x;

    bitmap[7] = {pattern_byte_1_curr[0], pattern_byte_0_curr[0]}; // concatonate pattern bitmaps into 16 bit array
    bitmap[6] = {pattern_byte_1_curr[1], pattern_byte_0_curr[1]}; 
    bitmap[5] = {pattern_byte_1_curr[2], pattern_byte_0_curr[2]}; 
    bitmap[4] = {pattern_byte_1_curr[3], pattern_byte_0_curr[3]}; 
    bitmap[3] = {pattern_byte_1_curr[4], pattern_byte_0_curr[4]}; 
    bitmap[2] = {pattern_byte_1_curr[5], pattern_byte_0_curr[5]}; 
    bitmap[1] = {pattern_byte_1_curr[6], pattern_byte_0_curr[6]}; 
    bitmap[0] = {pattern_byte_1_curr[7], pattern_byte_0_curr[7]}; 

    current_px = bitmap[bitmap_index];

    nt_address = 16'h2000 | (LoopyV & 16'h0FFF);
    at_address = 16'h23C0 | (LoopyV & 16'h0C00) | ((LoopyV >> 4) & 8'h38) | ((LoopyV >> 2) & 8'h07);

    bitmap_index = (DrawX - 1) % 8;

    case (DrawX % 8)
        // reset
        0 : begin
                ppu_read = 0;
                ppu_r_addr_q = 0; 
                mem_fetch = 1;
                ALE = 0; // enable address latch
            end
        // fetch nt tile
        1,2 : begin 
                ALE = 1;   
                ppu_r_addr_q = nt_address; // fetch beginning of nametable
                mem_fetch = 1;
                ppu_read = 0; 
            end
        // fetch attribute data
        3,4 : begin
                ppu_read = 0;
                ppu_r_addr_q = at_address;
                mem_fetch = 1;
                ALE = 1;
            end
        // fetch first bitmap 
        5,6 : begin 
                ALE = 1;
                ppu_read = 0;
                mem_fetch = 1;
                ppu_r_addr_q = 16'h1000 | (nametable_byte_next << 4) | LoopyV[14:12];
            end
        // fetch second bitmap
        7,8 : begin   
                ALE = 1;
                ppu_read = 0;
                mem_fetch = 1;
                ppu_r_addr_q = 16'h1000 | (nametable_byte_next << 4) + LoopyV[14:12] + 8;
            end

        default : begin
                    ppu_r_addr_q = 0;
                    mem_fetch = 0;
                    ALE = 0;
                    ppu_read = 0;
                  end
                
        endcase
  
/*
    if (palette_fetch_enable)
        ppu_read = 1;
    else
        ppu_read = 0;
*/



end

endmodule