module controller_testbench
();

timeunit 10ns;
timeprecision 1ns;

logic Reset, clk, controller_in, mode_select;

always begin : CLOCK_GENERATION
	#1 clk = ~clk;

end

initial begin: CLOCK_INITIALIZATION
	clk = 0;
end

controller_interface CI0 (.Reset, .clk, .controller_in, .mode_select);

initial begin: TEST_VECTORS
Reset = 1;
#5
Reset = 0;
#5
mode_select = 1;
#10
mode_select = 0;

#1

controller_in = 1;
#1
controller_in = 0;

#5 
controller_in = 1;
#1
controller_in = 0;




end

endmodule