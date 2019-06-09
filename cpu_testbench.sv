module cpu_testbench
();

timeunit 10ns;
timeprecision 1ns;


// logic clk, Reset, ready_in, nmi_interrupt, irq_reset, vga_reset, RWE, ppu_rwe, OAM_en, Ready;
logic RWE, ppu_rwe, OAM_en;
logic clk, ready_in, Reset;
logic [6:0] HEX0, HEX1, HEX2, HEX3, HEX4, HEX5, HEX6, HEX7;
logic nmi_interrupt;
logic [7:0] RED, GREEN, BLUE;
logic VGA_CLK, VGA_HS, VGA_VS, VGA_BLANK_N, VGA_SYNC_N;
logic vga_reset;
logic [7:0] multiplier, multiplier_two;
logic nt_bit;
logic res_interrupt;

logic [15:0] address, r_address, w_address, pc, PPUSCROLL, address_cpu, address_oam;
logic [7:0] data_in, data_out, data_out_ppu, data_out_mem, hold, data_in_cpu;
logic [15:0] oam_fetch_address_q;

test_memory_interface MEM0 (.data_out_mem, .data_in, .clk, .address, .RWE); // test memory block

assign irq_reset = 1'b1;
assign data_out = (ppu_rwe) ? data_out_ppu : data_out_mem;
assign address = (OAM_en) ? oam_fetch_address_q : address_cpu;
assign Ready = (OAM_en) ? 0 : ready_in;
assign data_in = (OAM_en) ? data_out_mem : data_in_cpu;


HexDriver hex0(.In0(pc[3:0]), 		   .Out0(HEX0));
HexDriver hex1(.In0(pc[7:4]),      	   .Out0(HEX1));
HexDriver hex2(.In0(pc[11:8]), 	      .Out0(HEX2));
HexDriver hex3(.In0(pc[15:12]), 	  		.Out0(HEX3));
HexDriver hex4(.In0(PPUSCROLL[3:0]),   .Out0(HEX4));
HexDriver hex5(.In0(PPUSCROLL[7:4]),   .Out0(HEX5));
HexDriver hex6(.In0(PPUSCROLL[11:8]),  .Out0(HEX6));
HexDriver hex7(.In0(PPUSCROLL[15:12]), .Out0(HEX7));

always_ff @ (posedge clk) begin

	case (address_cpu)

	    16'h2000,
	    16'h0778,
	    16'h2001,
	    16'h0779,
	    16'h2002,
	    16'h2003,
	    16'h2004,
	    16'h2005,
	    16'h2006,
	    16'h2007,
	    16'h4014 :  ppu_rwe <= 1;

	    default : begin
	    ppu_rwe <= 0;
		end
		
	endcase
	
	
end


PPU PPU0
(
 .reset(~Reset),
 .clk,
 .RWE,
 .cpu_addr(address_cpu),
 .data_in(data_in),
 .data_out_ppu,
 .nmi_interrupt,
 .RED,
 .BLUE,
 .GREEN,
 .VGA_CLK, 
 .VGA_HS, 
 .VGA_VS, 
 .VGA_BLANK_N,
 .VGA_SYNC_N,
 .vga_reset,
 .PPUSCROLL,
 .OAM_en,
 .multiplier,
 .multiplier_two,
 .nt_bit,
 .oam_fetch_address_q
);

cpu CPU0 // 6502 core
(
 .clk,
 .reset(~Reset),
 .RDY(Ready),
 .NMI(nmi_interrupt),  
 .IRQ(irq_reset), 
 .DI(data_out), 
 .DO(data_in_cpu), 
 .WE(RWE),
 .AB(address_cpu),
 .PC(pc)
);

assign irq_reset = 1;


initial begin: CLOCK_INITIALIZATION
	clk = 0;
end

always begin : CLOCK_GENERATION
	#1 clk = ~clk;
end

initial begin: TEST_VECTORS

vga_reset = 1;
#2
vga_reset = 0;
Reset = 0;
#30
Reset = 1;
#5
ready_in = 1;


end


endmodule
