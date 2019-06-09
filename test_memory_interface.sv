module test_memory_interface 
(
    input logic [15:0] address,
    input logic [7:0] data_in, // input data
    output logic [7:0] data_out_mem, // output data
    input logic RWE, clk // control bits
);

logic [7:0] memory_array [0:65535]; // test memory array
 
initial begin
    $readmemh("C:\\Users\\dukan\\Documents\\ece385\\ECE-385-2019\\final_project\\test.txt", memory_array);
end

always_ff @ (posedge clk) begin

    if (RWE)
        memory_array[address] <= data_in;

    data_out_mem <= memory_array[address];

end

endmodule