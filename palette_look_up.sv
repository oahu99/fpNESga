module palette_look_up
(
    input  logic [7:0] color_code,
    output logic [7:0] RED, GREEN, BLUE
);

always_comb begin
    case (color_code)
        8'h00: begin RED = 8'd84 ; GREEN = 8'd84 ; BLUE = 8'd84 ; end
        8'h01: begin RED = 8'd0  ; GREEN = 8'd30 ; BLUE = 8'd116; end
        8'h02: begin RED = 8'd8  ; GREEN = 8'd16 ; BLUE = 8'd144; end
        8'h03: begin RED = 8'd48 ; GREEN = 8'd0  ; BLUE = 8'd136; end
        8'h04: begin RED = 8'd68 ; GREEN = 8'd0  ; BLUE = 8'd100; end
        8'h05: begin RED = 8'd92 ; GREEN = 8'd0  ; BLUE = 8'd48 ; end
        8'h06: begin RED = 8'd84 ; GREEN = 8'd4  ; BLUE = 8'd0  ; end
        8'h07: begin RED = 8'd60 ; GREEN = 8'd24 ; BLUE = 8'd0  ; end
        8'h08: begin RED = 8'd32 ; GREEN = 8'd42 ; BLUE = 8'd0  ; end
        8'h09: begin RED = 8'd8  ; GREEN = 8'd58 ; BLUE = 8'd0  ; end
        8'h0A: begin RED = 8'd0  ; GREEN = 8'd64 ; BLUE = 8'd0  ; end
        8'h0B: begin RED = 8'd0  ; GREEN = 8'd60 ; BLUE = 8'd0  ; end
        8'h0C: begin RED = 8'd0  ; GREEN = 8'd50 ; BLUE = 8'd60 ; end
        8'h0D: begin RED = 8'd0  ; GREEN = 8'd0  ; BLUE = 8'd0  ; end
        8'h0E: begin RED = 8'd0  ; GREEN = 8'd0  ; BLUE = 8'd0  ; end
        8'h0F: begin RED = 8'd0  ; GREEN = 8'd0  ; BLUE = 8'd0  ; end
        8'h10: begin RED = 8'd152; GREEN = 8'd150; BLUE = 8'd152; end
        8'h11: begin RED = 8'd8  ; GREEN = 8'd76 ; BLUE = 8'd196; end
        8'h12: begin RED = 8'd48 ; GREEN = 8'd50 ; BLUE = 8'd236; end
        8'h13: begin RED = 8'd92 ; GREEN = 8'd30 ; BLUE = 8'd228; end
        8'h14: begin RED = 8'd136; GREEN = 8'd20 ; BLUE = 8'd176; end
        8'h15: begin RED = 8'd160; GREEN = 8'd20 ; BLUE = 8'd100; end
        8'h16: begin RED = 8'd152; GREEN = 8'd34 ; BLUE = 8'd32 ; end
        8'h17: begin RED = 8'd120; GREEN = 8'd60 ; BLUE = 8'd0  ; end
        8'h18: begin RED = 8'd84 ; GREEN = 8'd90 ; BLUE = 8'd0  ; end
        8'h19: begin RED = 8'd40 ; GREEN = 8'd114; BLUE = 8'd0  ; end
        8'h1A: begin RED = 8'd8  ; GREEN = 8'd124; BLUE = 8'd0  ; end
        8'h1B: begin RED = 8'd0  ; GREEN = 8'd118; BLUE = 8'd40 ; end
        8'h1C: begin RED = 8'd0  ; GREEN = 8'd102; BLUE = 8'd120; end
        8'h1D: begin RED = 8'd0  ; GREEN = 8'd0  ; BLUE = 8'd0  ; end
        8'h1E: begin RED = 8'd0  ; GREEN = 8'd0  ; BLUE = 8'd0  ; end
        8'h1F: begin RED = 8'd0  ; GREEN = 8'd0  ; BLUE = 8'd0  ; end
        8'h20: begin RED = 8'd236; GREEN = 8'd238; BLUE = 8'd236; end
        8'h21: begin RED = 8'd76 ; GREEN = 8'd154; BLUE = 8'd236; end
        8'h22: begin RED = 8'd120; GREEN = 8'd124; BLUE = 8'd236; end
        8'h23: begin RED = 8'd176; GREEN = 8'd98 ; BLUE = 8'd236; end
        8'h24: begin RED = 8'd228; GREEN = 8'd84 ; BLUE = 8'd236; end
        8'h25: begin RED = 8'd236; GREEN = 8'd88 ; BLUE = 8'd180; end
        8'h26: begin RED = 8'd236; GREEN = 8'd106; BLUE = 8'd100; end
        8'h27: begin RED = 8'd212; GREEN = 8'd136; BLUE = 8'd32 ; end
        8'h28: begin RED = 8'd160; GREEN = 8'd170; BLUE = 8'd0  ; end
        8'h29: begin RED = 8'd116; GREEN = 8'd196; BLUE = 8'd0  ; end
        8'h2A: begin RED = 8'd76 ; GREEN = 8'd208; BLUE = 8'd32 ; end
        8'h2B: begin RED = 8'd56 ; GREEN = 8'd204; BLUE = 8'd108; end
        8'h2C: begin RED = 8'd56 ; GREEN = 8'd180; BLUE = 8'd204; end
        8'h2D: begin RED = 8'd60 ; GREEN = 8'd60 ; BLUE = 8'd60 ; end
        8'h2E: begin RED = 8'd0  ; GREEN = 8'd0  ; BLUE = 8'd0  ; end
        8'h2F: begin RED = 8'd0  ; GREEN = 8'd0  ; BLUE = 8'd0  ; end
        8'h30: begin RED = 8'd236; GREEN = 8'd238; BLUE = 8'd236; end
        8'h31: begin RED = 8'd168; GREEN = 8'd204; BLUE = 8'd236; end
        8'h32: begin RED = 8'd188; GREEN = 8'd188; BLUE = 8'd236; end
        8'h33: begin RED = 8'd212; GREEN = 8'd178; BLUE = 8'd236; end
        8'h34: begin RED = 8'd236; GREEN = 8'd174; BLUE = 8'd236; end
        8'h35: begin RED = 8'd236; GREEN = 8'd174; BLUE = 8'd212; end
        8'h36: begin RED = 8'd236; GREEN = 8'd180; BLUE = 8'd176; end
        8'h37: begin RED = 8'd228; GREEN = 8'd196; BLUE = 8'd144; end
        8'h38: begin RED = 8'd204; GREEN = 8'd210; BLUE = 8'd120; end
        8'h39: begin RED = 8'd180; GREEN = 8'd222; BLUE = 8'd120; end
        8'h3A: begin RED = 8'd168; GREEN = 8'd226; BLUE = 8'd144; end
        8'h3B: begin RED = 8'd152; GREEN = 8'd226; BLUE = 8'd180; end
        8'h3C: begin RED = 8'd160; GREEN = 8'd214; BLUE = 8'd228; end
        8'h3D: begin RED = 8'd160; GREEN = 8'd162; BLUE = 8'd160; end
        8'h3E: begin RED = 8'd0  ; GREEN = 8'd0  ; BLUE = 8'd0  ; end
        8'h3F: begin RED = 8'd0  ; GREEN = 8'd0  ; BLUE = 8'd0  ; end
        

        default: begin
            RED   = 8'd0;
            GREEN = 8'd0;
            BLUE  = 8'd0;
        end
    endcase
end


endmodule
