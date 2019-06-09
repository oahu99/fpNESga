module get_draw_data
(
	input  [9:0] DrawX, DrawY
);

logic [9:0] TileX, TileY;
assign TileX = DrawX % 4'd8;
assign TileX = DrawY % 4'd8;




endmodule
