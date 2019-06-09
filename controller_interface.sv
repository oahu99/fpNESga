module controller_interface 
(
    input logic clk, Reset, // clock and reset from board
    input logic controller_in, // serial input from controller connector
    input logic mode_select, // selects between parallel and serial operation
    output logic L, D, U, R, Start, Select, A, B // registers for button inputs
);

logic [2:0] shift_counter, shift_counter_next; // counter for shifting 8 bits
logic controller_clk;
assign controller_clk = clk;

// clock_divider CD0 (.clk, .Reset, .CLK_1M(controller_clk)); // 1MHz clock generation

always_ff @ (posedge controller_clk) begin // interprets data sent from controller
    shift_counter <= shift_counter_next;
    if (mode_select) begin
        shift_counter_next <= 3'h0;
    end

    if (shift_counter == 3'h7) begin
        shift_counter_next <= 3'h0;
    end

    else
        shift_counter_next ++; // increment bit number

    case(shift_counter)
    0 : A = controller_in;
    1 : B = controller_in;
    2 : Select = controller_in;
    3 : Start = controller_in;
    4 : U = controller_in;
    5 : D = controller_in;
    6 : L = controller_in;
    7 : R = controller_in;
    endcase

end

endmodule
