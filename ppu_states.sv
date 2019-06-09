module ppu_states
(
    input logic clk, reset, RWE, vblank,
    input logic [15:0] cpu_addr,
    output logic [2:0] STATE_BITS
);


enum logic [3:0]
    {
        RESET,
        IDLE,
        FETCH_TILE,
        FETCH_ATTRIBUTE,
        FETCH_PALETTE
    } state, next_state;



always_ff @ (posedge clk) begin
    state <= (reset) ? RESET : next_state;
end

always_comb begin        
    case (state)
        RESET : next_state = (reset) ? RESET : IDLE; // next_state logic for reset state
        IDLE  : next_state = (vblank) ? IDLE : FETCH_TILE; // transition based on vblank status
        FETCH_TILE : next_state = FETCH_ATTRIBUTE;
        FETCH_ATTRIBUTE : next_state = FETCH_PALETTE;
        FETCH_PALETTE : next_state = (vblank) ? IDLE : FETCH_TILE;
    endcase
end

always_comb begin
    case (state)
        RESET : STATE_BITS = 3'h0;
        IDLE : STATE_BITS = 3'h1;
        FETCH_TILE : STATE_BITS = 3'h2;
        FETCH_ATTRIBUTE : STATE_BITS = 3'h3;
        FETCH_PALETTE : STATE_BITS = 3'h4;
    endcase
end

endmodule


