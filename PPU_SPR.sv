module PPU_SPR
(
    input logic clk, reset, 
    output logic OAM_en,
    input logic [9:0] DrawX, DrawY,
    input logic [7:0] data_in, mem_data_out,
    input logic [7:0] palette_ram [31:0], // palette data
    input logic vblank,
    output logic priority_bit, // select between background/sprite
    output logic [15:0] sprite_address,// address to fetch from pattern table
    output logic [7:0] color_code, // color code for RGB lookup table
    output logic [7:0] RED, GREEN, BLUE,
    input logic [15:0] address_cpu,
    output logic [15:0] oam_fetch_address_d, oam_fetch_address_q,
    input logic RWE
);

logic [7:0] oam_address_q, oam_address_d, oam_address_d1, oam_address, data_out_oam;
logic [8:0] dma_transfer_count;
logic ALE, mem_fetch; // address latch for access to VRAM
logic flip_vert, flip_hor;
logic [7:0] pattern_byte_0_curr, pattern_byte_1_curr, pattern_byte_0_next, pattern_byte_1_next;
logic [3:0] pattern_two_offset; // offset for reading second pattern byte
logic [1:0] bitmap [7:0]; // register for concatonated bitmap 
logic [2:0] bitmap_idx;
logic [7:0] current_px; // byte for attribute data from OAM
logic [7:0] oam_counter;
logic [7:0] second_oam [31:0];
logic sprite_overflow;
logic [4:0] sprite_counter;
logic [5:0] sprite_n;
logic [3:0] sprite_n_second; // index for second OAM
logic [7:0] pattern_address;
logic [15:0] pattern_base;
logic [2:0] palette_idx;

logic [3:0] bitmap_fetch, bitmap_fetch_next; // bitmap information fetch state machine

logic [7:0] spr_buffer_L [7:0];
logic [7:0] spr_buffer_H [7:0]; // sprite pattern buffer

logic [1:0] spr_attribute_latch [7:0]; // latches for each sprite's attribute data

logic [7:0] spr_x_pos [7:0]; // contains x position for each sprite to be rendered

logic [4:0] fetch_state, fetch_state_next; // fetch state machine bits

OAM oam0 (.clk, .OAM_en, .data_in, .oam_address(oam_address_d), .data_out(data_out_oam));

// assign oam_address = (OAM_en) ? oam_address_d1 : oam_address_d;

always_ff @ (posedge clk) begin

    oam_fetch_address_d <= oam_fetch_address_q;

    if (OAM_en)
        oam_address_d <= oam_address_q;

    if(reset) begin
        dma_transfer_count <= 0;
        sprite_n <= 0;
        sprite_n_second <= 0;
        sprite_counter <= 0;
        OAM_en <= 0;
        oam_fetch_address_q <= 16'h0200;
        oam_address_q <= 0;
        fetch_state <= 0;
        bitmap_fetch <= 0;
    end
    else begin
        fetch_state <= fetch_state_next;
        bitmap_fetch <= bitmap_fetch_next;
    end
    
    // reset OAM state machine
    if (OAM_en)
        fetch_state <= 0;

    // assign OAM access signals

	if (RWE && address_cpu == 16'h4014) // start DMA transfer
		OAM_en <= 1;
	if (oam_fetch_address_d == 16'h0300) begin // transfer done
		OAM_en <= 0;
        oam_fetch_address_q <= 16'h0200;
        oam_fetch_address_d <= 16'h0200;
        oam_address_q <= 0;
    end

    if (OAM_en) begin
		oam_fetch_address_q <= oam_fetch_address_q + 1;
        oam_address_q <= oam_address_q + 1;
    end
    else begin
        oam_fetch_address_q <= 16'h0200;
        oam_address_q <= 0;
    end
        
    if (oam_address_d == 255 && OAM_en) begin
        OAM_en <= 0;
        oam_address_q <= 0;
    end


    case (current_px)
        2'b00 : begin 
                    RED <= 150; 
                    GREEN <= 90; 
                    BLUE <= 212; 
                end
        2'b01 : begin 
                    RED <= 196;
                    GREEN <= 88;
                    BLUE <= 33; 
                end
        2'b10 : begin 
                    RED <= 231; 
                    GREEN <= 199; 
                    BLUE <= 34; 
                end
        2'b11 : begin 
                    RED <= 144; 
                    GREEN <= 24;
                    BLUE <= 34; 
                end
    endcase

    if (DrawX > 0 && DrawX < 65 )  begin// Clear Second OAM
        for(int i = 0; i < 32; i++)
            second_oam[i] <= 8'hFF;
        sprite_counter <= 0;
        sprite_n <= 0;
    end 

    if (DrawX == 64)
        sprite_n_second <= 0;

    if (sprite_n < 64) begin // check if done with evaluation
        case (fetch_state)
            // set address for Y coordinate fetch
            1,2,3 : oam_address_d <= sprite_n*4; // index of Y for first sprite
            4   :   begin
                        if (data_out_oam < 8'hEF) begin // check if Y is in range
                            second_oam[4*sprite_n_second] <= data_out_oam; // load into secondary OAM
                        end
                        else begin
                            sprite_n <= sprite_n + 1; // check next sprite Y
                        end
                    end
            5,6,7 : oam_address_d <= sprite_n*4 + 1; // copy tile index
            8   : second_oam[4*sprite_n_second + 1] <= data_out_oam;
            9,10,11 : oam_address_d <= sprite_n*4 + 2; // copy attribute data
            12   : second_oam[4*sprite_n_second + 2] <= data_out_oam;
            13,14,15 : oam_address_d <= sprite_n*4 + 3; // copy x position
            16  :   begin
                        second_oam[4*sprite_n_second + 3] <= data_out_oam;
                        sprite_n <= sprite_n + 1;
                        sprite_n_second <= sprite_n_second + 1;
                    end
        endcase
    end

    if (DrawX == 256 || DrawX == 321)
        sprite_n_second <= 0;

    if ((sprite_n_second < 8) && (DrawX > 256 && DrawX < 321)) begin // fill out sprite buffers
        case (bitmap_fetch) 
            1 : // fetch first bitmap and transfer from second OAM to buffers
                begin
                    if (second_oam[4*sprite_n_second] < 8'hEF && second_oam[4*sprite_n_second + 3] < 8'hF9 && second_oam[4*sprite_n_second] == (DrawY + 1)) begin // check if sprite (x,y) is in range
                        sprite_address <= 16'h0000 | (second_oam[sprite_n_second*4 + 1] << 4); // address for first bitmap fetch
                    end
                end
            2 : 
                begin
                    if (second_oam[4*sprite_n_second] < 8'hEF && second_oam[4*sprite_n_second + 3] < 8'hF9 && second_oam[4*sprite_n_second] == (DrawY + 1)) begin // check if sprite (x,y) is in range
                        sprite_address <= 16'h0000 | (second_oam[sprite_n_second*4 + 1] << 4); // address for first bitmap fetch
                    end
                    else begin
                        sprite_n_second <= sprite_n_second + 1; // increment to next sprite in secondary OAM
                    end
                end
            3   : spr_buffer_L[sprite_n_second] <= mem_data_out; // fill out lower buffer byte
            4,5 : sprite_address <= sprite_address + 8; // offset for upper buffer byte
            6   : 
                begin
                    spr_buffer_H[sprite_n_second] <= mem_data_out;
                    spr_attribute_latch[sprite_n_second] <= second_oam[sprite_n_second*4 + 2]; // store attribute data
                    sprite_n_second <= sprite_n_second + 1;
                end
        endcase
    end

end

always_comb begin // state transitions for second_oam <= OAM
    case (fetch_state)
        0   : fetch_state_next = (DrawX > 64 && DrawX < 257 && !OAM_en) ? 1 : 0; // check if start sprite evaluation
        3   : fetch_state_next = (data_out_oam < 8'hEF) ? 4 : 1; // check if in range
        16  : fetch_state_next = 0; // return to idle
        default : fetch_state_next = fetch_state + 1;
    endcase
end

always_comb begin // state transitions for bitmap fetch timing
    case (bitmap_fetch)
        0   : bitmap_fetch_next = (DrawX > 256 && DrawX < 341) ? 1 : 0; // check if in PPU idle
        1   : bitmap_fetch_next = (sprite_n_second == 8) ? 0 : ((second_oam[4*sprite_n_second] < 8'hEF && second_oam[4*sprite_n_second + 3] < 8'hF9) ? 2 : 1); // check if sprite is in range
        2   : bitmap_fetch_next = (sprite_n_second == 8) ? 0 : ((second_oam[4*sprite_n_second] < 8'hEF && second_oam[4*sprite_n_second + 3] < 8'hF9) ? 3 : 1); // check if sprite is in range
        6   : bitmap_fetch_next = (sprite_n_second < 8) ? 1 : 0;
        default : bitmap_fetch_next = bitmap_fetch + 1;
    endcase
end

endmodule