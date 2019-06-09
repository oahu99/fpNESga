module OAM
(
    input logic clk, OAM_en,
    input logic [7:0] data_in,
    input logic [7:0] oam_address,
    output logic [7:0] data_out
);

logic [7:0] OAM [255:0]; // object attribute memory / sprite ram

always_ff @ (posedge clk) begin
    if(OAM_en)
        OAM[oam_address] <= data_in;
    data_out <= OAM[oam_address];
end

endmodule
