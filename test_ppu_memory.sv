module test_ppu_memory
(
    input logic [15:0] ppu_w_address, ppu_r_address, cpu_address,
    output logic [7:0] mem_data_out,
    input logic [7:0] mem_data_in,
    input logic ppu_mem_rwe, // read and write enable signals
    input logic clk
);

logic [7:0] ppu_mem_array [16383:0]; // array for ppu memory space

initial
begin
	 $readmemh("C:\\Users\\dukan\\Documents\\ece385\\ECE-385-2019\\final_project\\mario_chr.txt", ppu_mem_array);
end


always_ff @ (posedge clk) begin
	if (ppu_mem_rwe & cpu_address == 16'h2007)
		ppu_mem_array[ppu_w_address] <= mem_data_in;
	mem_data_out <= ppu_mem_array[ppu_r_address];
end
endmodule