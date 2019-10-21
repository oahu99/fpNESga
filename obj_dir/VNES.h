// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VNES_H_
#define _VNES_H_

#include "verilated.h"
#include "verilated_threads.h"

class VNES__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VNES) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    // Begin mtask footprint  all: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 149 150 154 
    VL_IN8(clk_50,0,0);
    // Begin mtask footprint  all: 
    VL_OUT8(VGA_BLANK_N,0,0);
    VL_OUT8(VGA_SYNC_N,0,0);
    VL_IN8(multiplier,7,0);
    VL_IN8(multiplier_two,7,0);
    // Begin mtask footprint  all: 186 276 327 360 
    VL_OUT8(nmi_interrupt,0,0);
    // Begin mtask footprint  all: 162 194 330 331 334 335 380 394 
    VL_IN8(reset_al,0,0);
    // Begin mtask footprint  all: 299 343 
    VL_OUT8(scl,0,0);
    // Begin mtask footprint  all: 297 333 342 
    VL_OUT8(sda,0,0);
    // Begin mtask footprint  all: 413 
    VL_OUT8(VGA_HS,0,0);
    // Begin mtask footprint  all: 417 
    VL_OUT8(Draw_enable,0,0);
    // Begin mtask footprint  all: 376 
    VL_OUT8(nt_bit,0,0);
    // Begin mtask footprint  all: 410 
    VL_IN8(ready_in,0,0);
    // Begin mtask footprint  all: 253 
    VL_OUT8(RED,7,0);
    VL_OUT8(GREEN,7,0);
    VL_OUT8(BLUE,7,0);
    // Begin mtask footprint  all: 375 
    VL_OUT8(VGA_VS,0,0);
    // Begin mtask footprint  all: 163 
    VL_IN8(vga_reset,0,0);
    // Begin mtask footprint  all: 111 163 221 257 258 259 260 265 270 272 
    VL_OUT8(VGA_CLK,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
	// Begin mtask footprint  all: 142 169 171 172 173 174 175 176 177 178 179 180 182 183 184 185 186 187 188 189 190 191 192 193 280 281 282 283 284 285 286 287 288 289 290 292 336 337 390 391 392 411 418 419 422 424 425 426 427 428 431 433 436 437 438 
	VL_SIG8(NES__DOT__CPU0__DOT__state,5,0);
	// Begin mtask footprint  all: 167 172 173 176 177 178 179 180 182 183 184 188 280 281 282 283 284 285 286 287 288 289 290 292 336 390 391 392 430 
	VL_SIG8(NES__DOT__CPU0__DOT__IR,7,0);
	// Begin mtask footprint  all: 167 170 171 172 173 174 175 176 177 178 179 180 181 182 183 184 185 188 193 273 274 275 277 278 279 280 281 282 283 284 285 286 287 288 289 290 292 336 389 390 391 392 410 429 
	VL_SIG8(NES__DOT__Ready,0,0);
	// Begin mtask footprint  all: 415 
	VL_SIG8(NES__DOT__PPU0__DOT__BG0__DOT__ALE,0,0);
	// Begin mtask footprint  all: 387 
	VL_SIG16(NES__DOT__PPU0__DOT__sprite_address,15,0);
	VL_SIG16(NES__DOT__PPU0__DOT__BG0__DOT__palette_mem_address,15,0);
	// Begin mtask footprint  all: 387 405 
	VL_SIG8(NES__DOT__PPU0__DOT__MEM1__DOT__ppu_mem_array[16384],7,0);
	// Begin mtask footprint  all: 387 414 
	VL_SIG8(NES__DOT__PPU0__DOT__BG0__DOT__mem_fetch,0,0);
	// Begin mtask footprint  all: 113 387 400 
	VL_SIG16(NES__DOT__PPU0__DOT__ppu_reg_r_address,15,0);
	// Begin mtask footprint  all: 148 387 421 
	VL_SIG16(NES__DOT__PPU0__DOT__BG0__DOT__ppu_r_addr_q,15,0);
	// Begin mtask footprint  all: 168 304 334 335 387 404 
	VL_SIG8(NES__DOT__PPU0__DOT__vblank,0,0);
	// Begin mtask footprint  all: 158 159 160 161 335 369 398 
	VL_SIG8(NES__DOT__PPU0__DOT__mem_data_out,7,0);
	// Begin mtask footprint  all: 253 
	VL_SIG8(NES__DOT__PPU0__DOT__RED_sp,7,0);
	VL_SIG8(NES__DOT__PPU0__DOT__GREEN_sp,7,0);
	VL_SIG8(NES__DOT__PPU0__DOT__BLUE_sp,7,0);
	VL_SIG8(NES__DOT__PPU0__DOT__priority_bit,0,0);
	// Begin mtask footprint  all: 97 253 
	VL_SIG8(NES__DOT__PPU0__DOT__GREEN_bg,7,0);
	// Begin mtask footprint  all: 98 253 
	VL_SIG8(NES__DOT__PPU0__DOT__RED_bg,7,0);
	// Begin mtask footprint  all: 99 253 
	VL_SIG8(NES__DOT__PPU0__DOT__BLUE_bg,7,0);
	// Begin mtask footprint  all: 100 201 
	VL_SIG8(NES__DOT__PPU0__DOT__BG0__DOT__attribute_data_next,7,0);
	// Begin mtask footprint  all: 149 
	VL_SIG16(NES__DOT__PPU0__DOT__HD_0__DOT__clk_divide,9,0);
	VL_SIG8(NES__DOT__PPU0__DOT__HD_0__DOT__clk_50k,0,0);
	// Begin mtask footprint  all: 109 149 164 
	VL_SIG(NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CLK_DIV,31,0);
	// Begin mtask footprint  all: 149 163 164 332 379 394 
	VL_SIG8(NES__DOT__PPU0__DOT__HD_0__DOT__reset,0,0);
	// Begin mtask footprint  all: 121 220 431 433 436 437 
	VL_SIG16(NES__DOT__pc,15,0);
	// Begin mtask footprint  all: 
	VL_SIG8(NES__DOT__PPU0__DOT__palette_ram[32],7,0);
	VL_SIG8(NES__DOT__PPU0__DOT__BG0__DOT__bg_palette_ram_separated[4],7,0);
	VL_SIG16(NES__DOT__r_address,15,0);
	VL_SIG16(NES__DOT__w_address,15,0);
	VL_SIG16(NES__DOT__PPU0__DOT__sprite_address_q,15,0);
	VL_SIG16(NES__DOT__PPU0__DOT__sprite_address_d,15,0);
	VL_SIG16(NES__DOT__PPU0__DOT__address_to_vram,15,0);
	VL_SIG16(NES__DOT__PPU0__DOT__BG0__DOT__horiz_counter,9,0);
	VL_SIG16(NES__DOT__PPU0__DOT__BG0__DOT__vert_counter,9,0);
	VL_SIG16(NES__DOT__PPU0__DOT__BG0__DOT__bitmap_one_address,15,0);
	VL_SIG16(NES__DOT__PPU0__DOT__BG0__DOT__bitmap_two_address,15,0);
	VL_SIG16(NES__DOT__PPU0__DOT__BG0__DOT__bitmap_vertical_index,10,0);
	VL_SIG16(NES__DOT__PPU0__DOT__BG0__DOT__at_scroll_address,15,0);
	VL_SIG16(NES__DOT__PPU0__DOT__BG0__DOT__nt_scroll_address,15,0);
	VL_SIG16(NES__DOT__PPU0__DOT__BG0__DOT__LoopyV_temp,14,0);
	VL_SIG16(NES__DOT__PPU0__DOT__BG0__DOT__LoopyV_temp_two,14,0);
	VL_SIG16(NES__DOT__PPU0__DOT__BG0__DOT__nt_base,15,0);
	VL_SIG16(NES__DOT__PPU0__DOT__BG0__DOT__curr_nt,15,0);
	VL_SIG16(NES__DOT__PPU0__DOT__BG0__DOT__next_nt,15,0);
	VL_SIG16(NES__DOT__PPU0__DOT__BG0__DOT__at_base,15,0);
	VL_SIG16(NES__DOT__PPU0__DOT__BG0__DOT__curr_at,15,0);
	VL_SIG16(NES__DOT__PPU0__DOT__BG0__DOT__next_at,15,0);
	VL_SIG8(NES__DOT__res_interrupt,0,0);
	VL_SIG8(NES__DOT__C,0,0);
	VL_SIG8(NES__DOT__hold,7,0);
	VL_SIG8(NES__DOT__PPU0__DOT__color_code_bg,7,0);
	VL_SIG8(NES__DOT__PPU0__DOT__color_code_spr,7,0);
	VL_SIG8(NES__DOT__PPU0__DOT__sprite_counter,3,0);
	VL_SIG8(NES__DOT__PPU0__DOT__CLK_COUNTER,0,0);
	VL_SIG8(NES__DOT__PPU0__DOT__mem_data_out_d,7,0);
	VL_SIG8(NES__DOT__PPU0__DOT__ppu_read,0,0);
	VL_SIG8(NES__DOT__PPU0__DOT__vga_vblank,0,0);
	VL_SIG8(NES__DOT__PPU0__DOT__OAMDMA,7,0);
	VL_SIG8(NES__DOT__PPU0__DOT__data_out_oam,7,0);
	VL_SIG8(NES__DOT__PPU0__DOT__sprite_data_in,7,0);
	VL_SIG8(NES__DOT__PPU0__DOT__sprite_mem_access,0,0);
	VL_SIG8(NES__DOT__PPU0__DOT__BG0__DOT__fetch_phase,3,0);
	VL_SIG8(NES__DOT__PPU0__DOT__BG0__DOT__fetch_phase_next,3,0);
	VL_SIG8(NES__DOT__PPU0__DOT__BG0__DOT__pipe_0,7,0);
    };
    struct {
	VL_SIG8(NES__DOT__PPU0__DOT__BG0__DOT__pipe_1,7,0);
	VL_SIG8(NES__DOT__PPU0__DOT__BG0__DOT__pipe_2,7,0);
	VL_SIG8(NES__DOT__PPU0__DOT__BG0__DOT__pipe_3,7,0);
	VL_SIG8(NES__DOT__PPU0__DOT__BG0__DOT__palette_fetch_counter,5,0);
	VL_SIG8(NES__DOT__PPU0__DOT__BG0__DOT__palette_fetch_enable,0,0);
	VL_SIG8(NES__DOT__PPU0__DOT__BG0__DOT__right,0,0);
	VL_SIG8(NES__DOT__PPU0__DOT__BG0__DOT__left,0,0);
	VL_SIG8(NES__DOT__PPU0__DOT__BG0__DOT__top,0,0);
	VL_SIG8(NES__DOT__PPU0__DOT__BG0__DOT__bottom,0,0);
	VL_SIG8(NES__DOT__PPU0__DOT__BG0__DOT__fine_y,2,0);
	VL_SIG8(NES__DOT__PPU0__DOT__BG0__DOT__offset,7,0);
	VL_SIG8(NES__DOT__PPU0__DOT__BG0__DOT__next_table,7,0);
	VL_SIG8(NES__DOT__PPU0__DOT__BG0__DOT__coarse_x,7,0);
	VL_SIG8(NES__DOT__PPU0__DOT__BG0__DOT__pre_render,0,0);
	VL_SIG8(NES__DOT__CPU0__DOT__DIHOLD_valid,0,0);
	// Begin mtask footprint  all: 150 153 162 256 335 380 383 384 385 386 440 
	VL_SIG8(NES__DOT__data_in,7,0);
	// Begin mtask footprint  all: 150 153 162 168 256 334 335 380 383 384 385 386 418 
	VL_SIG8(NES__DOT__RWE,0,0);
	// Begin mtask footprint  all: 153 162 166 168 174 175 256 334 335 380 383 384 385 386 437 439 
	VL_SIG16(NES__DOT__address_cpu,15,0);
	// Begin mtask footprint  all: 110 164 223 255 261 262 263 264 266 267 268 269 271 
	VL_SIG8(NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK,0,0);
	// Begin mtask footprint  all: 291 292 329 364 381 
	VL_SIG8(NES__DOT__CPU0__DOT__D,0,0);
	// Begin mtask footprint  all: 306 333 354 377 378 
	VL_SIG8(NES__DOT__PPU0__DOT__HD_0__DOT__done,0,0);
	// Begin mtask footprint  all: 189 190 193 428 434 
	VL_SIG8(NES__DOT__CPU0__DOT__regsel,1,0);
	// Begin mtask footprint  all: 189 190 248 321 419 
	VL_SIG8(NES__DOT__CPU0__DOT__load_reg,0,0);
	// Begin mtask footprint  all: 189 190 191 245 315 
	VL_SIG8(NES__DOT__CPU0__DOT__bit_ins,0,0);
	// Begin mtask footprint  all: 187 189 190 191 192 337 374 406 419 
	VL_SIG8(NES__DOT__CPU0__DOT__plp,0,0);
	// Begin mtask footprint  all: 187 189 190 191 192 193 337 371 409 431 436 437 438 
	VL_SIG8(NES__DOT__CPU0__DOT__ADD,7,0);
	// Begin mtask footprint  all: 185 187 189 190 191 192 193 279 337 429 430 431 433 437 438 
	VL_SIG8(NES__DOT__CPU0__DOT__DIMUX,7,0);
	// Begin mtask footprint  all: 189 190 192 249 323 426 
	VL_SIG8(NES__DOT__CPU0__DOT__compare,0,0);
	// Begin mtask footprint  all: 188 239 326 422 427 
	VL_SIG8(NES__DOT__CPU0__DOT__backwards,0,0);
	// Begin mtask footprint  all: 188 191 192 193 238 325 422 426 
	VL_SIG8(NES__DOT__CPU0__DOT__CO,0,0);
	// Begin mtask footprint  all: 301 333 347 412 
	VL_SIG8(NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__byte_num_local,2,0);
	// Begin mtask footprint  all: 302 333 348 412 
	VL_SIG8(NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__counter,3,0);
	// Begin mtask footprint  all: 190 191 232 309 
	VL_SIG8(NES__DOT__CPU0__DOT__AN,0,0);
	// Begin mtask footprint  all: 191 192 291 328 356 
	VL_SIG8(NES__DOT__CPU0__DOT__adc_sbc,0,0);
	// Begin mtask footprint  all: 188 192 246 316 
	VL_SIG8(NES__DOT__CPU0__DOT__write_back,0,0);
	// Begin mtask footprint  all: 188 247 320 418 
	VL_SIG8(NES__DOT__CPU0__DOT__store,0,0);
	// Begin mtask footprint  all: 145 210 254 381 
	VL_SIG8(NES__DOT__CPU0__DOT__V,0,0);
	// Begin mtask footprint  all: 146 219 254 381 426 
	VL_SIG8(NES__DOT__CPU0__DOT__C,0,0);
	// Begin mtask footprint  all: 143 212 254 381 
	VL_SIG8(NES__DOT__CPU0__DOT__Z,0,0);
	// Begin mtask footprint  all: 144 211 254 381 
	VL_SIG8(NES__DOT__CPU0__DOT__N,0,0);
	// Begin mtask footprint  all: 134 225 426 438 
	VL_SIG8(NES__DOT__CPU0__DOT__load_only,0,0);
	// Begin mtask footprint  all: 192 250 324 426 
	VL_SIG8(NES__DOT__CPU0__DOT__shift,0,0);
	// Begin mtask footprint  all: 128 209 431 437 
	VL_SIG8(NES__DOT__CPU0__DOT__ABL,7,0);
	// Begin mtask footprint  all: 129 215 431 437 438 
	VL_SIG8(NES__DOT__CPU0__DOT__ABH,7,0);
	// Begin mtask footprint  all: 106 162 334 338 
	VL_SIG8(NES__DOT__PPU0__DOT__BG0__DOT__loopy_latch,0,0);
	// Begin mtask footprint  all: 108 162 334 344 376 
	VL_SIG16(NES__DOT__PPU0__DOT__BG0__DOT__LoopyT,14,0);
	// Begin mtask footprint  all: 102 159 330 340 
	VL_SIG8(NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_0_next,7,0);
	// Begin mtask footprint  all: 122 231 388 440 
	VL_SIG8(NES__DOT__data_out_mem,7,0);
	// Begin mtask footprint  all: 337 372 396 
	VL_SIG8(NES__DOT__CPU0__DOT__sed,0,0);
	// Begin mtask footprint  all: 337 373 397 
	VL_SIG8(NES__DOT__CPU0__DOT__cld,0,0);
	// Begin mtask footprint  all: 335 368 403 
	VL_SIG8(NES__DOT__PPU0__DOT__OAMADDR,7,0);
	// Begin mtask footprint  all: 101 160 331 339 
	VL_SIG8(NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_1_next,7,0);
	// Begin mtask footprint  all: 335 366 401 
	VL_SIG8(NES__DOT__PPU0__DOT__PPUCTRL,7,0);
	// Begin mtask footprint  all: 335 367 402 
	VL_SIG8(NES__DOT__PPU0__DOT__PPUMASK,7,0);
	// Begin mtask footprint  all: 278 445 446 
	VL_SIG8(NES__DOT__CPU0__DOT__ALU__DOT__temp_h,4,0);
	// Begin mtask footprint  all: 273 278 389 446 
	VL_SIG16(NES__DOT__CPU0__DOT__ALU__DOT__temp,8,0);
	// Begin mtask footprint  all: 275 442 443 445 
	VL_SIG8(NES__DOT__CPU0__DOT__ALU__DOT__temp_BI,7,0);
	// Begin mtask footprint  all: 441 442 443 445 
	VL_SIG16(NES__DOT__CPU0__DOT__ALU__DOT__temp_logic,8,0);
	// Begin mtask footprint  all: 427 441 442 443 
	VL_SIG8(NES__DOT__CPU0__DOT__alu_op,3,0);
	// Begin mtask footprint  all: 425 441 443 
	VL_SIG8(NES__DOT__CPU0__DOT__alu_shift_right,0,0);
	// Begin mtask footprint  all: 426 441 443 
	VL_SIG8(NES__DOT__CPU0__DOT__CI,0,0);
	// Begin mtask footprint  all: 277 438 441 
	VL_SIG8(NES__DOT__CPU0__DOT__AI,7,0);
	// Begin mtask footprint  all: 433 441 442 
	VL_SIG8(NES__DOT__CPU0__DOT__BI,7,0);
	// Begin mtask footprint  all: 274 444 445 
	VL_SIG8(NES__DOT__CPU0__DOT__ALU__DOT__temp_HC,0,0);
    };
    struct {
	// Begin mtask footprint  all: 443 444 446 
	VL_SIG8(NES__DOT__CPU0__DOT__ALU__DOT__temp_l,4,0);
	// Begin mtask footprint  all: 193 251 317 
	VL_SIG8(NES__DOT__CPU0__DOT__adj_bcd,0,0);
	// Begin mtask footprint  all: 193 252 322 424 
	VL_SIG8(NES__DOT__CPU0__DOT__adc_bcd,0,0);
	// Begin mtask footprint  all: 192 242 312 
	VL_SIG8(NES__DOT__CPU0__DOT__clc,0,0);
	// Begin mtask footprint  all: 192 243 313 
	VL_SIG8(NES__DOT__CPU0__DOT__sec,0,0);
	// Begin mtask footprint  all: 191 234 310 
	VL_SIG8(NES__DOT__CPU0__DOT__ALU__DOT__BI7,0,0);
	// Begin mtask footprint  all: 191 240 310 
	VL_SIG8(NES__DOT__CPU0__DOT__clv,0,0);
	// Begin mtask footprint  all: 191 237 307 
	VL_SIG8(NES__DOT__CPU0__DOT__ALU__DOT__AI7,0,0);
	// Begin mtask footprint  all: 187 241 311 
	VL_SIG8(NES__DOT__CPU0__DOT__sei,0,0);
	// Begin mtask footprint  all: 187 244 314 
	VL_SIG8(NES__DOT__CPU0__DOT__cli,0,0);
	// Begin mtask footprint  all: 168 213 318 
	VL_SIG8(NES__DOT__PPU0__DOT__mem_data_in,7,0);
	// Begin mtask footprint  all: 168 235 357 
	VL_SIG16(NES__DOT__PPU0__DOT__ppu_w_address,15,0);
	// Begin mtask footprint  all: 154 382 416 
	VL_SIG8(NES__DOT__PPU0__DOT__HD_0__DOT__byte_lut_next,7,0);
	// Begin mtask footprint  all: 186 236 319 
	VL_SIG8(NES__DOT__CPU0__DOT__NMI_1,0,0);
	// Begin mtask footprint  all: 139 229 429 
	VL_SIG8(NES__DOT__CPU0__DOT__DIHOLD,7,0);
	// Begin mtask footprint  all: 181 388 429 
	VL_SIG8(NES__DOT__data_out,7,0);
	// Begin mtask footprint  all: 136 226 428 
	VL_SIG8(NES__DOT__CPU0__DOT__index_y,0,0);
	// Begin mtask footprint  all: 137 227 428 
	VL_SIG8(NES__DOT__CPU0__DOT__src_reg,1,0);
	// Begin mtask footprint  all: 131 217 426 
	VL_SIG8(NES__DOT__CPU0__DOT__rotate,0,0);
	// Begin mtask footprint  all: 132 218 426 
	VL_SIG8(NES__DOT__CPU0__DOT__inc,0,0);
	// Begin mtask footprint  all: 130 216 425 
	VL_SIG8(NES__DOT__CPU0__DOT__shift_right,0,0);
	// Begin mtask footprint  all: 133 222 427 
	VL_SIG8(NES__DOT__CPU0__DOT__op,3,0);
	// Begin mtask footprint  all: 127 207 436 
	VL_SIG8(NES__DOT__CPU0__DOT__php,0,0);
	// Begin mtask footprint  all: 434 436 437 438 
	VL_SIG8(NES__DOT__CPU0__DOT__regfile,7,0);
	// Begin mtask footprint  all: 125 204 430 
	VL_SIG8(NES__DOT__CPU0__DOT__IRHOLD_valid,0,0);
	// Begin mtask footprint  all: 135 204 430 
	VL_SIG8(NES__DOT__CPU0__DOT__IRHOLD,7,0);
	// Begin mtask footprint  all: 138 228 428 
	VL_SIG8(NES__DOT__CPU0__DOT__dst_reg,1,0);
	// Begin mtask footprint  all: 123 230 388 
	VL_SIG8(NES__DOT__ppu_rwe,0,0);
	// Begin mtask footprint  all: 124 370 388 
	VL_SIG8(NES__DOT__data_out_ppu,7,0);
	// Begin mtask footprint  all: 120 208 431 
	VL_SIG8(NES__DOT__CPU0__DOT__res,0,0);
	// Begin mtask footprint  all: 140 186 208 422 430 431 
	VL_SIG8(NES__DOT__CPU0__DOT__NMI_edge,0,0);
	// Begin mtask footprint  all: 141 214 381 422 430 431 
	VL_SIG8(NES__DOT__CPU0__DOT__I,0,0);
	// Begin mtask footprint  all: 118 335 363 
	VL_SIG8(NES__DOT__PPU0__DOT__PPU_ADDR_FLAG,0,0);
	// Begin mtask footprint  all: 335 365 399 
	VL_SIG8(NES__DOT__PPU0__DOT__OAMDATA,7,0);
	// Begin mtask footprint  all: 116 335 361 
	VL_SIG8(NES__DOT__PPU0__DOT__PPUSTATUS,7,0);
	// Begin mtask footprint  all: 117 335 362 
	VL_SIG8(NES__DOT__PPU0__DOT__PPU_SCROLL_FLAG,0,0);
	// Begin mtask footprint  all: 114 335 358 
	VL_SIG16(NES__DOT__PPU0__DOT__PPUADDR,15,0);
	// Begin mtask footprint  all: 115 335 359 
	VL_SIG16(NES__DOT__PPUSCROLL,15,0);
	// Begin mtask footprint  all: 104 162 196 
	VL_SIG8(NES__DOT__PPU0__DOT__BG0__DOT__ppu_address_latch,0,0);
	// Begin mtask footprint  all: 105 162 198 
	VL_SIG8(NES__DOT__PPU0__DOT__BG0__DOT__LoopyT_Next,0,0);
	// Begin mtask footprint  all: 94 152 199 
	VL_SIG8(NES__DOT__PPU0__DOT__BG0__DOT__attribute_data_curr,7,0);
	// Begin mtask footprint  all: 95 151 200 
	VL_SIG8(NES__DOT__PPU0__DOT__BG0__DOT__nametable_byte_curr,7,0);
	// Begin mtask footprint  all: 432 435 
	VL_SIG8(NES__DOT__PPU0__DOT__HD_0__DOT__data,7,0);
	// Begin mtask footprint  all: 154 407 423 432 
	VL_SIG8(NES__DOT__PPU0__DOT__HD_0__DOT__byte_lut,7,0);
	// Begin mtask footprint  all: 381 436 
	VL_SIG8(NES__DOT__CPU0__DOT__P,7,0);
	// Begin mtask footprint  all: 436 440 
	VL_SIG8(NES__DOT__data_in_cpu,7,0);
	// Begin mtask footprint  all: 379 412 
	VL_SIG8(NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__next_state,4,0);
	// Begin mtask footprint  all: 303 346 412 
	VL_SIG8(NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__ack,0,0);
	// Begin mtask footprint  all: 333 435 
	VL_SIG8(NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__message,7,0);
	// Begin mtask footprint  all: 300 333 345 435 
	VL_SIG8(NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__address,0,0);
	// Begin mtask footprint  all: 333 353 395 412 
	VL_SIG8(NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state,4,0);
	// Begin mtask footprint  all: 224 434 
	VL_SIG8(NES__DOT__CPU0__DOT__AXYS[4],7,0);
	// Begin mtask footprint  all: 298 341 
	VL_SIG8(NES__DOT__PPU0__DOT__HD_0__DOT__fail,0,0);
	// Begin mtask footprint  all: 193 419 
	VL_SIG8(NES__DOT__CPU0__DOT__write_register,0,0);
	// Begin mtask footprint  all: 193 233 308 
	VL_SIG8(NES__DOT__CPU0__DOT__HC,0,0);
	// Begin mtask footprint  all: 188 254 
	VL_SIG8(NES__DOT__CPU0__DOT__cond_true,0,0);
	// Begin mtask footprint  all: 112 205 254 
	VL_SIG8(NES__DOT__CPU0__DOT__cond_code,2,0);
	// Begin mtask footprint  all: 170 422 
	VL_SIG8(NES__DOT__CPU0__DOT__PC_inc,0,0);
	// Begin mtask footprint  all: 170 431 
	VL_SIG16(NES__DOT__CPU0__DOT__PC_temp,15,0);
	// Begin mtask footprint  all: 107 197 
	VL_SIG8(NES__DOT__PPU0__DOT__BG0__DOT__loopy_x,2,0);
	// Begin mtask footprint  all: 126 195 
	VL_SIG8(NES__DOT__CPU0__DOT__brk,0,0);
	// Begin mtask footprint  all: 93 202 
	VL_SIG16(NES__DOT__PPU0__DOT__BG0__DOT__ppu_r_addr_d,15,0);
	// Begin mtask footprint  all: 96 203 
	VL_SIG8(NES__DOT__PPU0__DOT__PPUDATA,7,0);
	// Begin mtask footprint  all: 439 
	VL_SIG16(NES__DOT__oam_fetch_address_q,15,0);
    };
    struct {
	// Begin mtask footprint  all: 410 439 440 
	VL_SIG8(NES__DOT__OAM_en,0,0);
	// Begin mtask footprint  all: 150 165 439 
	VL_SIG16(NES__DOT__address,15,0);
	// Begin mtask footprint  all: 150 165 
	VL_SIG8(NES__DOT__MEM0__DOT__memory_array[65536],7,0);
	// Begin mtask footprint  all: 421 
	VL_SIG16(NES__DOT__PPU0__DOT__BG0__DOT__nt_address,15,0);
	VL_SIG16(NES__DOT__PPU0__DOT__BG0__DOT__at_address,15,0);
	// Begin mtask footprint  all: 103 206 421 
	VL_SIG8(NES__DOT__PPU0__DOT__BG0__DOT__nametable_byte_next,7,0);
	// Begin mtask footprint  all: 305 334 352 421 
	VL_SIG16(NES__DOT__PPU0__DOT__BG0__DOT__LoopyV,14,0);
	// Begin mtask footprint  all: 334 355 393 
	VL_SIG8(NES__DOT__PPU0__DOT__BG0__DOT__ppu_increment,0,0);
	// Begin mtask footprint  all: 420 
	VL_SIG8(NES__DOT__PPU0__DOT__BG0__DOT__bitmap[8],1,0);
	VL_SIG8(NES__DOT__PPU0__DOT__BG0__DOT__bitmap_index,2,0);
	// Begin mtask footprint  all: 293 350 420 
	VL_SIG8(NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_1_curr,7,0);
	// Begin mtask footprint  all: 294 351 420 
	VL_SIG8(NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_0_curr,7,0);
	// Begin mtask footprint  all: 155 156 157 420 
	VL_SIG8(NES__DOT__PPU0__DOT__BG0__DOT__current_px,1,0);
	// Begin mtask footprint  all: 155 156 157 162 295 330 331 332 334 349 375 417 
	VL_SIG16(NES__DOT__PPU0__DOT__DrawY,9,0);
	// Begin mtask footprint  all: 151 152 155 156 157 158 159 160 161 162 296 330 331 332 334 387 408 413 414 415 417 420 421 
	VL_SIG16(NES__DOT__PPU0__DOT__DrawX,9,0);
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    // Begin mtask footprint  all: 83 87 169 171 185 188 194 
    VL_SIG8(NES__DOT____Vcellinp__CPU0__reset,0,0);
    // Begin mtask footprint  all: 304 334 404 
    VL_SIG8(__Vdly__NES__DOT__PPU0__DOT__vblank,0,0);
    // Begin mtask footprint  all: 305 334 352 
    VL_SIG16(__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyV,14,0);
    // Begin mtask footprint  all: 301 333 347 
    VL_SIG8(__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__byte_num_local,2,0);
    // Begin mtask footprint  all: 302 333 348 
    VL_SIG8(__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__counter,3,0);
    // Begin mtask footprint  all: 297 333 342 
    VL_SIG8(__Vdly__sda,0,0);
    // Begin mtask footprint  all: 300 333 345 
    VL_SIG8(__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__address,0,0);
    // Begin mtask footprint  all: 295 332 349 
    VL_SIG16(__Vdly__NES__DOT__PPU0__DOT__DrawY,9,0);
    // Begin mtask footprint  all: 296 332 408 
    VL_SIG16(__Vdly__NES__DOT__PPU0__DOT__DrawX,9,0);
    // Begin mtask footprint  all: 117 335 362 
    VL_SIG8(__Vdly__NES__DOT__PPU0__DOT__PPU_SCROLL_FLAG,0,0);
    // Begin mtask footprint  all: 118 335 363 
    VL_SIG8(__Vdly__NES__DOT__PPU0__DOT__PPU_ADDR_FLAG,0,0);
    // Begin mtask footprint  all: 115 335 359 
    VL_SIG16(__Vdly__NES__DOT__PPUSCROLL,15,0);
    // Begin mtask footprint  all: 116 335 361 
    VL_SIG8(__Vdly__NES__DOT__PPU0__DOT__PPUSTATUS,7,0);
    // Begin mtask footprint  all: 113 335 400 
    VL_SIG16(__Vdly__NES__DOT__PPU0__DOT__ppu_reg_r_address,15,0);
    // Begin mtask footprint  all: 114 335 358 
    VL_SIG16(__Vdly__NES__DOT__PPU0__DOT__PPUADDR,15,0);
    // Begin mtask footprint  all: 109 149 164 
    VL_SIG(__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CLK_DIV,31,0);
    // Begin mtask footprint  all: 110 164 223 
    VL_SIG8(__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK,0,0);
    // Begin mtask footprint  all: 106 162 338 
    VL_SIG8(__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__loopy_latch,0,0);
    // Begin mtask footprint  all: 108 162 344 
    VL_SIG16(__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyT,14,0);
    // Begin mtask footprint  all: 104 162 196 
    VL_SIG8(__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__ppu_address_latch,0,0);
    // Begin mtask footprint  all: 105 162 198 
    VL_SIG8(__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyT_Next,0,0);
    // Begin mtask footprint  all: 102 159 340 
    VL_SIG8(__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_0_next,7,0);
    // Begin mtask footprint  all: 111 163 221 
    VL_SIG8(__Vdly__VGA_CLK,0,0);
    // Begin mtask footprint  all: 193 224 
    VL_SIG8(__Vdlyvdim0__NES__DOT__CPU0__DOT__AXYS__v0,1,0);
    VL_SIG8(__Vdlyvval__NES__DOT__CPU0__DOT__AXYS__v0,7,0);
    // Begin mtask footprint  all: 147 193 224 
    VL_SIG8(__Vdlyvset__NES__DOT__CPU0__DOT__AXYS__v0,0,0);
    // Begin mtask footprint  all: 278 424 444 
    VL_SIG8(NES__DOT__CPU0__DOT____Vcellinp__ALU__BCD,0,0);
    // Begin mtask footprint  all: 168 405 
    VL_SIG16(__Vdlyvdim0__NES__DOT__PPU0__DOT__MEM1__DOT__ppu_mem_array__v0,13,0);
    VL_SIG8(__Vdlyvval__NES__DOT__PPU0__DOT__MEM1__DOT__ppu_mem_array__v0,7,0);
    // Begin mtask footprint  all: 119 168 405 
    VL_SIG8(__Vdlyvset__NES__DOT__PPU0__DOT__MEM1__DOT__ppu_mem_array__v0,0,0);
    // Begin mtask footprint  all: 142 188 411 
    VL_SIG8(__Vdly__NES__DOT__CPU0__DOT__state,5,0);
    // Begin mtask footprint  all: 154 423 
    VL_SIG8(__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__byte_lut,7,0);
    // Begin mtask footprint  all: 101 160 339 
    VL_SIG8(__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_1_next,7,0);
    // Begin mtask footprint  all: 428 
    VL_SIG16(__Vtableidx5,10,0);
    // Begin mtask footprint  all: 432 
    VL_SIG8(__Vtableidx1,7,0);
    // Begin mtask footprint  all: 422 
    VL_SIG16(__Vtableidx2,9,0);
    // Begin mtask footprint  all: 427 
    VL_SIG16(__Vtableidx6,10,0);
    // Begin mtask footprint  all: 418 
    VL_SIG8(__Vtableidx3,6,0);
    // Begin mtask footprint  all: 419 
    VL_SIG8(__Vtableidx4,7,0);
    // Begin mtask footprint  all: 254 
    VL_SIG8(__Vtableidx7,6,0);
    // Begin mtask footprint  all: 
    VL_SIG8(NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram[32],7,0);
    VL_SIG8(__Vm_traceActivity[137],0,0);
    VL_SIG8(__VinpClk__TOP__NES__DOT____Vcellinp__CPU0__reset,0,0);
    VL_SIG8(__VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK,0,0);
    VL_SIG8(__VinpClk__TOP__VGA_CLK,0,0);
    VL_SIG8(__VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__done,0,0);
    VL_SIG8(__Vclklast__TOP__clk_50,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__NES__DOT____Vcellinp__CPU0__reset,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__VGA_CLK,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__done,0,0);
    VL_SIG8(__Vchglast__TOP__VGA_CLK,0,0);
    VL_SIG8(__Vchglast__TOP__NES__DOT____Vcellinp__CPU0__reset,0,0);
    VL_SIG8(__Vchglast__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__done,0,0);
    VL_SIG8(__Vchglast__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK,0,0);
    VL_SIG8(__Vchglast__TOP__NES__DOT__PPU0__DOT__BG0__DOT__bitmap_index,2,0);
    // Begin mtask footprint  all: 306 333 354 
    VL_SIG8(__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__done,0,0);
    // Begin mtask footprint  all: 428 
    static VL_ST_SIG8(__Vtable5_NES__DOT__CPU0__DOT__regsel[2048],1,0);
    // Begin mtask footprint  all: 432 
    static VL_ST_SIG8(__Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[256],7,0);
    // Begin mtask footprint  all: 422 
    static VL_ST_SIG8(__Vtable2_NES__DOT__CPU0__DOT__PC_inc[1024],0,0);
    // Begin mtask footprint  all: 427 
    static VL_ST_SIG8(__Vtable6_NES__DOT__CPU0__DOT__alu_op[2048],3,0);
    // Begin mtask footprint  all: 418 
    static VL_ST_SIG8(__Vtable3_NES__DOT__RWE[128],0,0);
    // Begin mtask footprint  all: 419 
    static VL_ST_SIG8(__Vtable4_NES__DOT__CPU0__DOT__write_register[256],0,0);
    // Begin mtask footprint  all: 254 
    static VL_ST_SIG8(__Vtable7_NES__DOT__CPU0__DOT__cond_true[128],0,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VNES__Syms* __VlSymsp;  // Symbol table
  private:
    VlMTaskVertex __Vm_mt_162;
    VlMTaskVertex __Vm_mt_164;
    VlMTaskVertex __Vm_mt_253;
    VlMTaskVertex __Vm_mt_149;
    VlMTaskVertex __Vm_mt_194;
    VlMTaskVertex __Vm_mt_198;
    VlMTaskVertex __Vm_mt_224;
    VlMTaskVertex __Vm_mt_254;
    VlMTaskVertex __Vm_mt_273;
    VlMTaskVertex __Vm_mt_274;
    VlMTaskVertex __Vm_mt_275;
    VlMTaskVertex __Vm_mt_277;
    VlMTaskVertex __Vm_mt_278;
    VlMTaskVertex __Vm_mt_279;
    VlMTaskVertex __Vm_mt_280;
    VlMTaskVertex __Vm_mt_281;
    VlMTaskVertex __Vm_mt_283;
    VlMTaskVertex __Vm_mt_284;
    VlMTaskVertex __Vm_mt_285;
    VlMTaskVertex __Vm_mt_287;
    VlMTaskVertex __Vm_mt_288;
    VlMTaskVertex __Vm_mt_290;
    VlMTaskVertex __Vm_mt_291;
    VlMTaskVertex __Vm_mt_295;
    VlMTaskVertex __Vm_mt_296;
    VlMTaskVertex __Vm_mt_300;
    VlMTaskVertex __Vm_mt_301;
    VlMTaskVertex __Vm_mt_302;
    VlMTaskVertex __Vm_mt_305;
    VlMTaskVertex __Vm_mt_306;
    VlMTaskVertex __Vm_mt_330;
    VlMTaskVertex __Vm_mt_331;
    VlMTaskVertex __Vm_mt_332;
    VlMTaskVertex __Vm_mt_333;
    VlMTaskVertex __Vm_mt_334;
    VlMTaskVertex __Vm_mt_335;
    VlMTaskVertex __Vm_mt_336;
    VlMTaskVertex __Vm_mt_337;
    VlMTaskVertex __Vm_mt_338;
    VlMTaskVertex __Vm_mt_339;
    VlMTaskVertex __Vm_mt_340;
    VlMTaskVertex __Vm_mt_342;
    VlMTaskVertex __Vm_mt_344;
    VlMTaskVertex __Vm_mt_345;
    VlMTaskVertex __Vm_mt_347;
    VlMTaskVertex __Vm_mt_348;
    VlMTaskVertex __Vm_mt_349;
    VlMTaskVertex __Vm_mt_352;
    VlMTaskVertex __Vm_mt_358;
    VlMTaskVertex __Vm_mt_359;
    VlMTaskVertex __Vm_mt_361;
    VlMTaskVertex __Vm_mt_362;
    VlMTaskVertex __Vm_mt_363;
    VlMTaskVertex __Vm_mt_379;
    VlMTaskVertex __Vm_mt_380;
    VlMTaskVertex __Vm_mt_381;
    VlMTaskVertex __Vm_mt_383;
    VlMTaskVertex __Vm_mt_384;
    VlMTaskVertex __Vm_mt_385;
    VlMTaskVertex __Vm_mt_386;
    VlMTaskVertex __Vm_mt_387;
    VlMTaskVertex __Vm_mt_388;
    VlMTaskVertex __Vm_mt_389;
    VlMTaskVertex __Vm_mt_391;
    VlMTaskVertex __Vm_mt_392;
    VlMTaskVertex __Vm_mt_394;
    VlMTaskVertex __Vm_mt_407;
    VlMTaskVertex __Vm_mt_400;
    VlMTaskVertex __Vm_mt_404;
    VlMTaskVertex __Vm_mt_408;
    VlMTaskVertex __Vm_mt_410;
    VlMTaskVertex __Vm_mt_411;
    VlMTaskVertex __Vm_mt_412;
    VlMTaskVertex __Vm_mt_413;
    VlMTaskVertex __Vm_mt_415;
    VlMTaskVertex __Vm_mt_417;
    VlMTaskVertex __Vm_mt_418;
    VlMTaskVertex __Vm_mt_419;
    VlMTaskVertex __Vm_mt_420;
    VlMTaskVertex __Vm_mt_421;
    VlMTaskVertex __Vm_mt_422;
    VlMTaskVertex __Vm_mt_424;
    VlMTaskVertex __Vm_mt_425;
    VlMTaskVertex __Vm_mt_426;
    VlMTaskVertex __Vm_mt_427;
    VlMTaskVertex __Vm_mt_429;
    VlMTaskVertex __Vm_mt_430;
    VlMTaskVertex __Vm_mt_431;
    VlMTaskVertex __Vm_mt_433;
    VlMTaskVertex __Vm_mt_434;
    VlMTaskVertex __Vm_mt_435;
    VlMTaskVertex __Vm_mt_436;
    VlMTaskVertex __Vm_mt_437;
    VlMTaskVertex __Vm_mt_438;
    VlMTaskVertex __Vm_mt_439;
    VlMTaskVertex __Vm_mt_440;
    VlMTaskVertex __Vm_mt_441;
    VlMTaskVertex __Vm_mt_444;
    VlMTaskVertex __Vm_mt_final;
    VlThreadPool* __Vm_threadPoolp;
    bool __Vm_even_cycle;
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VNES);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VNES(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VNES();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VNES__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VNES__Syms* symsp, bool first);
  private:
    static QData _change_request(VNES__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__207(VNES__Syms* __restrict vlSymsp);
    static void _combo__TOP__396(VNES__Syms* __restrict vlSymsp);
    static void _combo__TOP__412(VNES__Syms* __restrict vlSymsp);
    static void _combo__TOP__423(VNES__Syms* __restrict vlSymsp);
    static void _combo__TOP__431(VNES__Syms* __restrict vlSymsp);
    static void _combo__TOP__433(VNES__Syms* __restrict vlSymsp);
    static void _combo__TOP__434(VNES__Syms* __restrict vlSymsp);
    static void _combo__TOP__435(VNES__Syms* __restrict vlSymsp);
    static void _combo__TOP__439(VNES__Syms* __restrict vlSymsp);
    static void _combo__TOP__440(VNES__Syms* __restrict vlSymsp);
    static void _combo__TOP__441(VNES__Syms* __restrict vlSymsp);
    static void _combo__TOP__443(VNES__Syms* __restrict vlSymsp);
    static void _combo__TOP__444(VNES__Syms* __restrict vlSymsp);
    static void _combo__TOP__445(VNES__Syms* __restrict vlSymsp);
    static void _combo__TOP__446(VNES__Syms* __restrict vlSymsp);
    static void _combo__TOP__447(VNES__Syms* __restrict vlSymsp);
    static void _combo__TOP__448(VNES__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VNES__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VNES__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VNES__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(VNES__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _multiclk__TOP__424(VNES__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__437(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__103(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__104(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__106(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__107(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__108(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__110(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__111(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__112(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__113(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__115(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__116(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__117(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__118(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__119(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__120(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__121(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__144(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__149(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__150(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__151(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__152(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__153(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__154(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__155(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__156(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__157(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__158(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__159(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__160(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__161(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__162(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__163(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__164(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__165(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__166(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__167(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__168(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__169(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__170(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__171(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__172(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__173(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__174(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__175(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__176(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__177(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__178(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__179(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__180(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__181(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__182(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__183(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__184(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__185(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__186(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__187(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__188(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__189(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__190(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__191(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__192(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__193(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__204(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__205(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__206(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__208(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__210(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__224(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__226(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__227(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__256(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__258(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__275(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__276(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__277(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__278(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__279(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__280(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__281(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__282(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__283(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__284(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__285(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__286(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__287(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__288(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__289(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__290(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__291(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__292(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__293(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__294(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__297(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__298(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__299(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__302(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__303(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__304(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__306(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__307(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__308(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__332(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__333(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__334(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__335(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__336(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__337(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__338(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__339(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__340(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__341(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__342(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__344(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__346(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__347(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__349(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__350(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__351(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__354(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__356(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__360(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__361(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__363(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__364(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__365(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__377(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__378(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__381(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__382(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__384(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__385(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__386(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__387(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__388(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__389(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__390(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__391(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__392(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__393(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__394(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__398(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__403(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__407(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__408(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__410(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__413(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__414(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__416(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__417(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__418(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__419(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__420(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__421(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__422(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__425(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__426(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__427(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__428(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__429(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__430(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__432(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__436(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__438(VNES__Syms* __restrict vlSymsp);
    static void _sequent__TOP__442(VNES__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VNES__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__10(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__100(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__101(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__102(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__103(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__104(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__105(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__106(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__107(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__108(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__109(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__11(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__110(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__111(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__112(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__113(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__114(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__115(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__116(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__117(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__118(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__119(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__12(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__120(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__121(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__122(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__123(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__124(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__125(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__126(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__127(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__128(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__129(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__13(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__130(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__131(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__132(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__133(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__134(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__135(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__136(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__137(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__138(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__139(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__14(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__140(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__141(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__142(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__143(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__144(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__145(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__146(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__147(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__148(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__149(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__15(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__150(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__16(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__17(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__18(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__19(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__20(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__21(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__22(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__23(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__24(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__25(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__26(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__27(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__28(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__29(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__30(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__31(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__32(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__33(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__34(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__35(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__36(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__37(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__38(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__39(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__40(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__41(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__42(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__43(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__44(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__45(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__46(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__47(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__48(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__49(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__50(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__51(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__52(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__53(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__54(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__55(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__56(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__57(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__58(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__59(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__60(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__61(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__62(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__63(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__64(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__65(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__66(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__67(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__68(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__69(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__70(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__71(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__72(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__73(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__74(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__75(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__76(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__77(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__78(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__79(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__80(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__81(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__82(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__83(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__84(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__85(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__86(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__87(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__88(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__89(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__90(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__91(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__92(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__93(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__94(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__95(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__96(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__97(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__98(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__99(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
  private:
    static void __Vmtask__101(bool even_cycle, void* symtab);
    static void __Vmtask__102(bool even_cycle, void* symtab);
    static void __Vmtask__104(bool even_cycle, void* symtab);
    static void __Vmtask__105(bool even_cycle, void* symtab);
    static void __Vmtask__106(bool even_cycle, void* symtab);
    static void __Vmtask__108(bool even_cycle, void* symtab);
    static void __Vmtask__111(bool even_cycle, void* symtab);
    static void __Vmtask__113(bool even_cycle, void* symtab);
    static void __Vmtask__114(bool even_cycle, void* symtab);
    static void __Vmtask__115(bool even_cycle, void* symtab);
    static void __Vmtask__116(bool even_cycle, void* symtab);
    static void __Vmtask__117(bool even_cycle, void* symtab);
    static void __Vmtask__118(bool even_cycle, void* symtab);
    static void __Vmtask__119(bool even_cycle, void* symtab);
    static void __Vmtask__142(bool even_cycle, void* symtab);
    static void __Vmtask__147(bool even_cycle, void* symtab);
    static void __Vmtask__171(bool even_cycle, void* symtab);
    static void __Vmtask__174(bool even_cycle, void* symtab);
    static void __Vmtask__175(bool even_cycle, void* symtab);
    static void __Vmtask__177(bool even_cycle, void* symtab);
    static void __Vmtask__178(bool even_cycle, void* symtab);
    static void __Vmtask__179(bool even_cycle, void* symtab);
    static void __Vmtask__182(bool even_cycle, void* symtab);
    static void __Vmtask__183(bool even_cycle, void* symtab);
    static void __Vmtask__184(bool even_cycle, void* symtab);
    static void __Vmtask__185(bool even_cycle, void* symtab);
    static void __Vmtask__186(bool even_cycle, void* symtab);
    static void __Vmtask__187(bool even_cycle, void* symtab);
    static void __Vmtask__189(bool even_cycle, void* symtab);
    static void __Vmtask__190(bool even_cycle, void* symtab);
    static void __Vmtask__191(bool even_cycle, void* symtab);
    static void __Vmtask__192(bool even_cycle, void* symtab);
    static void __Vmtask__final(bool even_cycle, void* symtab);
  public:
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
