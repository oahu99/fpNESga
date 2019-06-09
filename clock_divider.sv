module clock_divider
(
    input logic clk, Reset,
    output logic CLK_1M
);

logic [31:0] counter;

always_ff @ (posedge clk)
begin
    if(Reset)
    begin   
        counter <= 31'd0;
        CLK_1M <= 1'b0;
    end 
    if(counter == 32'd50)
    begin
        CLK_1M <= ~CLK_1M;
        counter <= 31'd0;
    end 
    else
        counter ++;

end

endmodule
