// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VNES__Syms.h"


//======================

void VNES::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VNES::traceInit, &VNES::traceFull, &VNES::traceChg, this);
}
void VNES::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VNES* t=(VNES*)userthis;
    VNES__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
	VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VNES::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VNES* t=(VNES*)userthis;
    VNES__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VNES::traceInitThis(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VNES::traceFullThis(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    // Begin mtask footprint  all: 
    VL_SIG(__Vilp,31,0);
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    __Vilp = 0U;
    while ((__Vilp <= 0x88U)) {
	vlTOPp->__Vm_traceActivity[__Vilp] = 0U;
	__Vilp = ((IData)(1U) + __Vilp);
    }
}

void VNES::traceInitThis__1(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit(c+210,"clk_50",-1);
	vcdp->declBit(c+211,"ready_in",-1);
	vcdp->declBit(c+212,"reset_al",-1);
	vcdp->declBit(c+213,"nmi_interrupt",-1);
	vcdp->declBus(c+214,"RED",-1,7,0);
	vcdp->declBus(c+215,"GREEN",-1,7,0);
	vcdp->declBus(c+216,"BLUE",-1,7,0);
	vcdp->declBit(c+217,"VGA_CLK",-1);
	vcdp->declBit(c+218,"VGA_HS",-1);
	vcdp->declBit(c+219,"VGA_VS",-1);
	vcdp->declBit(c+220,"VGA_BLANK_N",-1);
	vcdp->declBit(c+221,"VGA_SYNC_N",-1);
	vcdp->declBit(c+222,"vga_reset",-1);
	vcdp->declBus(c+223,"multiplier",-1,7,0);
	vcdp->declBus(c+224,"multiplier_two",-1,7,0);
	vcdp->declBit(c+225,"nt_bit",-1);
	vcdp->declBit(c+226,"scl",-1);
	vcdp->declBit(c+227,"sda",-1);
	vcdp->declBit(c+228,"Draw_enable",-1);
	vcdp->declBit(c+210,"NES clk_50",-1);
	vcdp->declBit(c+211,"NES ready_in",-1);
	vcdp->declBit(c+212,"NES reset_al",-1);
	vcdp->declBit(c+213,"NES nmi_interrupt",-1);
	vcdp->declBus(c+214,"NES RED",-1,7,0);
	vcdp->declBus(c+215,"NES GREEN",-1,7,0);
	vcdp->declBus(c+216,"NES BLUE",-1,7,0);
	vcdp->declBit(c+217,"NES VGA_CLK",-1);
	vcdp->declBit(c+218,"NES VGA_HS",-1);
	vcdp->declBit(c+219,"NES VGA_VS",-1);
	vcdp->declBit(c+220,"NES VGA_BLANK_N",-1);
	vcdp->declBit(c+221,"NES VGA_SYNC_N",-1);
	vcdp->declBit(c+222,"NES vga_reset",-1);
	vcdp->declBus(c+223,"NES multiplier",-1,7,0);
	vcdp->declBus(c+224,"NES multiplier_two",-1,7,0);
	vcdp->declBit(c+225,"NES nt_bit",-1);
	vcdp->declBit(c+226,"NES scl",-1);
	vcdp->declBit(c+227,"NES sda",-1);
	vcdp->declBit(c+228,"NES Draw_enable",-1);
	vcdp->declBit(c+230,"NES res_interrupt",-1);
	vcdp->declBit(c+56,"NES RWE",-1);
	vcdp->declBit(c+112,"NES ppu_rwe",-1);
	vcdp->declBit(c+231,"NES C",-1);
	vcdp->declBit(c+232,"NES irq_reset",-1);
	vcdp->declBit(c+233,"NES OAM_en",-1);
	vcdp->declBit(c+51,"NES Ready",-1);
	vcdp->declBus(c+89,"NES address",-1,15,0);
	vcdp->declBus(c+234,"NES r_address",-1,15,0);
	vcdp->declBus(c+235,"NES w_address",-1,15,0);
	vcdp->declBus(c+115,"NES pc",-1,15,0);
	vcdp->declBus(c+188,"NES PPUSCROLL",-1,15,0);
	vcdp->declBus(c+87,"NES address_cpu",-1,15,0);
	vcdp->declBus(c+236,"NES oam_fetch_address_q",-1,15,0);
	vcdp->declBus(c+90,"NES data_in",-1,7,0);
	vcdp->declBus(c+46,"NES data_out",-1,7,0);
	vcdp->declBus(c+174,"NES data_out_ppu",-1,7,0);
	vcdp->declBus(c+111,"NES data_out_mem",-1,7,0);
	vcdp->declBus(c+237,"NES hold",-1,7,0);
	vcdp->declBus(c+86,"NES data_in_cpu",-1,7,0);
	vcdp->declBus(c+89,"NES MEM0 address",-1,15,0);
	vcdp->declBus(c+90,"NES MEM0 data_in",-1,7,0);
	vcdp->declBus(c+111,"NES MEM0 data_out_mem",-1,7,0);
	vcdp->declBit(c+56,"NES MEM0 RWE",-1);
	vcdp->declBit(c+210,"NES MEM0 clk",-1);
	// Tracing: NES MEM0 memory_array // Ignored: Wide memory > --trace-max-array ents at test_memory_interface.sv:9
	vcdp->declBit(c+210,"NES PPU0 clk",-1);
	vcdp->declBit(c+229,"NES PPU0 reset",-1);
	vcdp->declBit(c+56,"NES PPU0 RWE",-1);
	vcdp->declBit(c+233,"NES PPU0 OAM_en",-1);
	vcdp->declBit(c+213,"NES PPU0 nmi_interrupt",-1);
	vcdp->declBus(c+87,"NES PPU0 cpu_addr",-1,15,0);
	vcdp->declBus(c+90,"NES PPU0 data_in",-1,7,0);
	vcdp->declBus(c+174,"NES PPU0 data_out_ppu",-1,7,0);
	vcdp->declBus(c+214,"NES PPU0 RED",-1,7,0);
	vcdp->declBus(c+215,"NES PPU0 GREEN",-1,7,0);
	vcdp->declBus(c+216,"NES PPU0 BLUE",-1,7,0);
	vcdp->declBit(c+217,"NES PPU0 VGA_CLK",-1);
	vcdp->declBit(c+218,"NES PPU0 VGA_HS",-1);
	vcdp->declBit(c+219,"NES PPU0 VGA_VS",-1);
	vcdp->declBus(c+188,"NES PPU0 PPUSCROLL",-1,15,0);
	vcdp->declBit(c+222,"NES PPU0 vga_reset",-1);
	vcdp->declBus(c+223,"NES PPU0 multiplier",-1,7,0);
	vcdp->declBus(c+224,"NES PPU0 multiplier_two",-1,7,0);
	vcdp->declBit(c+225,"NES PPU0 nt_bit",-1);
	vcdp->declBus(c+236,"NES PPU0 oam_fetch_address_q",-1,15,0);
	vcdp->declBit(c+226,"NES PPU0 scl",-1);
	vcdp->declBit(c+227,"NES PPU0 sda",-1);
	vcdp->declBit(c+228,"NES PPU0 Draw_enable",-1);
	{int i; for (i=0; i<32; i++) {
		vcdp->declBus(c+1+i*1,"NES PPU0 palette_ram",(i+0),7,0);}}
	vcdp->declBus(c+238,"NES PPU0 color_code",-1,7,0);
	vcdp->declBus(c+239,"NES PPU0 color_code_bg",-1,7,0);
	vcdp->declBus(c+240,"NES PPU0 color_code_spr",-1,7,0);
	vcdp->declBus(c+241,"NES PPU0 sprite_counter",-1,3,0);
	vcdp->declBit(c+242,"NES PPU0 CLK_COUNTER",-1);
	vcdp->declBit(c+191,"NES PPU0 PPU_ADDR_FLAG",-1);
	vcdp->declBit(c+190,"NES PPU0 PPU_SCROLL_FLAG",-1);
	vcdp->declBus(c+198,"NES PPU0 mem_data_out",-1,7,0);
	vcdp->declBus(c+243,"NES PPU0 mem_data_out_d",-1,7,0);
	vcdp->declBus(c+147,"NES PPU0 mem_data_in",-1,7,0);
	vcdp->declBus(c+175,"NES PPU0 ppu_w_address",-1,15,0);
	vcdp->declBus(c+48,"NES PPU0 ppu_r_address",-1,15,0);
	vcdp->declBus(c+50,"NES PPU0 ppu_ppu_r_address",-1,15,0);
	vcdp->declBus(c+54,"NES PPU0 ppu_bg_r_address",-1,15,0);
	vcdp->declBus(c+205,"NES PPU0 ppu_reg_r_address",-1,15,0);
	vcdp->declBus(c+244,"NES PPU0 sprite_address",-1,15,0);
	vcdp->declBit(c+206,"NES PPU0 vblank",-1);
	vcdp->declBit(c+49,"NES PPU0 ppu_mem_rwe",-1);
	vcdp->declBit(c+33,"NES PPU0 ppu_read",-1);
	vcdp->declBit(c+245,"NES PPU0 vga_vblank",-1);
	vcdp->declBus(c+207,"NES PPU0 DrawX",-1,9,0);
	vcdp->declBus(c+184,"NES PPU0 DrawY",-1,9,0);
	vcdp->declBus(c+106,"NES PPU0 RED_bg",-1,7,0);
	vcdp->declBus(c+107,"NES PPU0 GREEN_bg",-1,7,0);
	vcdp->declBus(c+105,"NES PPU0 BLUE_bg",-1,7,0);
	vcdp->declBus(c+246,"NES PPU0 RED_sp",-1,7,0);
	vcdp->declBus(c+247,"NES PPU0 GREEN_sp",-1,7,0);
	vcdp->declBus(c+248,"NES PPU0 BLUE_sp",-1,7,0);
	vcdp->declBus(c+187,"NES PPU0 PPUADDR",-1,15,0);
	vcdp->declBus(c+196,"NES PPU0 PPUCTRL",-1,7,0);
	vcdp->declBus(c+195,"NES PPU0 PPUMASK",-1,7,0);
	vcdp->declBus(c+189,"NES PPU0 PPUSTATUS",-1,7,0);
	vcdp->declBus(c+194,"NES PPU0 OAMADDR",-1,7,0);
	vcdp->declBus(c+197,"NES PPU0 OAMDATA",-1,7,0);
	vcdp->declBus(c+104,"NES PPU0 PPUDATA",-1,7,0);
	vcdp->declBus(c+249,"NES PPU0 OAMDMA",-1,7,0);
	vcdp->declBus(c+250,"NES PPU0 data_out_oam",-1,7,0);
	vcdp->declBus(c+251,"NES PPU0 sprite_data_in",-1,7,0);
	vcdp->declBit(c+252,"NES PPU0 sprite_mem_access",-1);
	vcdp->declBus(c+253,"NES PPU0 sprite_address_q",-1,15,0);
	vcdp->declBus(c+254,"NES PPU0 sprite_address_d",-1,15,0);
	vcdp->declBus(c+255,"NES PPU0 address_to_vram",-1,15,0);
	vcdp->declBit(c+256,"NES PPU0 priority_bit",-1);
	vcdp->declBus(c+175,"NES PPU0 MEM1 ppu_w_address",-1,15,0);
	vcdp->declBus(c+48,"NES PPU0 MEM1 ppu_r_address",-1,15,0);
	vcdp->declBus(c+87,"NES PPU0 MEM1 cpu_address",-1,15,0);
	vcdp->declBus(c+198,"NES PPU0 MEM1 mem_data_out",-1,7,0);
	vcdp->declBus(c+147,"NES PPU0 MEM1 mem_data_in",-1,7,0);
	vcdp->declBit(c+49,"NES PPU0 MEM1 ppu_mem_rwe",-1);
	vcdp->declBit(c+210,"NES PPU0 MEM1 clk",-1);
	// Tracing: NES PPU0 MEM1 ppu_mem_array // Ignored: Wide memory > --trace-max-array ents at test_ppu_memory.sv:10
	vcdp->declBit(c+210,"NES PPU0 HD_0 clk_50",-1);
	vcdp->declBit(c+229,"NES PPU0 HD_0 reset_al",-1);
	vcdp->declBit(c+218,"NES PPU0 HD_0 H_sync",-1);
	vcdp->declBit(c+219,"NES PPU0 HD_0 V_sync",-1);
	vcdp->declBus(c+207,"NES PPU0 HD_0 CountX",-1,9,0);
	vcdp->declBus(c+184,"NES PPU0 HD_0 CountY",-1,9,0);
	vcdp->declBit(c+228,"NES PPU0 HD_0 Draw_enable",-1);
	vcdp->declBit(c+226,"NES PPU0 HD_0 scl",-1);
	vcdp->declBit(c+227,"NES PPU0 HD_0 sda",-1);
	vcdp->declBit(c+217,"NES PPU0 HD_0 clk_25",-1);
	vcdp->declBus(c+257,"NES PPU0 HD_0 slave_address",-1,6,0);
	vcdp->declBus(c+81,"NES PPU0 HD_0 data",-1,7,0);
	vcdp->declBus(c+258,"NES PPU0 HD_0 byte_num",-1,2,0);
	vcdp->declBus(c+209,"NES PPU0 HD_0 byte_lut",-1,7,0);
	vcdp->declBus(c+204,"NES PPU0 HD_0 byte_lut_next",-1,7,0);
	vcdp->declBus(c+133,"NES PPU0 HD_0 clk_divide",-1,9,0);
	vcdp->declBit(c+259,"NES PPU0 HD_0 read_write",-1);
	vcdp->declBit(c+232,"NES PPU0 HD_0 start",-1);
	vcdp->declBit(c+134,"NES PPU0 HD_0 clk_50k",-1);
	vcdp->declBit(c+47,"NES PPU0 HD_0 reset",-1);
	vcdp->declBit(c+186,"NES PPU0 HD_0 done",-1);
	vcdp->declBit(c+138,"NES PPU0 HD_0 mI2C_CTRL_CLK",-1);
	vcdp->declBit(c+172,"NES PPU0 HD_0 fail",-1);
	vcdp->declBus(c+135,"NES PPU0 HD_0 mI2C_CLK_DIV",-1,31,0);
	vcdp->declBus(c+260,"NES PPU0 HD_0 CLK_Freq",-1,31,0);
	vcdp->declBus(c+261,"NES PPU0 HD_0 I2C_Freq",-1,31,0);
	vcdp->declBit(c+138,"NES PPU0 HD_0 I2C_0 clk_50k",-1);
	vcdp->declBit(c+47,"NES PPU0 HD_0 I2C_0 reset",-1);
	vcdp->declBit(c+232,"NES PPU0 HD_0 I2C_0 start",-1);
	vcdp->declBit(c+227,"NES PPU0 HD_0 I2C_0 sda",-1);
	vcdp->declBit(c+226,"NES PPU0 HD_0 I2C_0 scl",-1);
	vcdp->declBus(c+257,"NES PPU0 HD_0 I2C_0 slave_address",-1,6,0);
	vcdp->declBit(c+259,"NES PPU0 HD_0 I2C_0 read_write",-1);
	vcdp->declBus(c+81,"NES PPU0 HD_0 I2C_0 data",-1,7,0);
	vcdp->declBus(c+258,"NES PPU0 HD_0 I2C_0 byte_num",-1,2,0);
	vcdp->declBit(c+186,"NES PPU0 HD_0 I2C_0 done",-1);
	vcdp->declBit(c+172,"NES PPU0 HD_0 I2C_0 fail",-1);
	vcdp->declBus(c+183,"NES PPU0 HD_0 I2C_0 counter",-1,3,0);
	vcdp->declBus(c+44,"NES PPU0 HD_0 I2C_0 message",-1,7,0);
	vcdp->declBus(c+192,"NES PPU0 HD_0 I2C_0 state",-1,4,0);
	vcdp->declBus(c+52,"NES PPU0 HD_0 I2C_0 next_state",-1,4,0);
	vcdp->declBit(c+173,"NES PPU0 HD_0 I2C_0 ack",-1);
	vcdp->declBus(c+182,"NES PPU0 HD_0 I2C_0 byte_num_local",-1,2,0);
	vcdp->declBit(c+181,"NES PPU0 HD_0 I2C_0 address",-1);
	vcdp->declBus(c+262,"NES PPU0 HD_0 I2C_0 IDLE",-1,31,0);
	vcdp->declBus(c+263,"NES PPU0 HD_0 I2C_0 SEND_1",-1,31,0);
	vcdp->declBus(c+264,"NES PPU0 HD_0 I2C_0 ACK_NACK_1",-1,31,0);
	vcdp->declBus(c+265,"NES PPU0 HD_0 I2C_0 FAIL",-1,31,0);
	vcdp->declBus(c+266,"NES PPU0 HD_0 I2C_0 START_1",-1,31,0);
	vcdp->declBus(c+267,"NES PPU0 HD_0 I2C_0 START_2",-1,31,0);
	vcdp->declBus(c+268,"NES PPU0 HD_0 I2C_0 STOP",-1,31,0);
	vcdp->declBus(c+269,"NES PPU0 HD_0 I2C_0 SEND_2",-1,31,0);
	vcdp->declBus(c+270,"NES PPU0 HD_0 I2C_0 SEND_3",-1,31,0);
	vcdp->declBus(c+271,"NES PPU0 HD_0 I2C_0 DONE_1",-1,31,0);
	vcdp->declBus(c+272,"NES PPU0 HD_0 I2C_0 DONE_2",-1,31,0);
	vcdp->declBus(c+273,"NES PPU0 HD_0 I2C_0 ACK_NACK_2",-1,31,0);
	vcdp->declBus(c+274,"NES PPU0 HD_0 I2C_0 ACK_NACK_3",-1,31,0);
	vcdp->declBus(c+275,"NES PPU0 HD_0 I2C_0 STOP_2",-1,31,0);
	vcdp->declBus(c+276,"NES PPU0 HD_0 I2C_0 DELAY",-1,31,0);
	vcdp->declBus(c+209,"NES PPU0 HD_0 LUT0 byte_lut",-1,7,0);
	vcdp->declBus(c+81,"NES PPU0 HD_0 LUT0 data_byte",-1,7,0);
	vcdp->declBit(c+210,"NES PPU0 BG0 clk",-1);
	vcdp->declBit(c+229,"NES PPU0 BG0 reset",-1);
	vcdp->declBus(c+207,"NES PPU0 BG0 DrawX",-1,9,0);
	vcdp->declBus(c+184,"NES PPU0 BG0 DrawY",-1,9,0);
	vcdp->declBit(c+245,"NES PPU0 BG0 vga_vblank",-1);
	vcdp->declBit(c+217,"NES PPU0 BG0 VGA_CLK",-1);
	vcdp->declBus(c+188,"NES PPU0 BG0 PPUSCROLL",-1,15,0);
	vcdp->declBit(c+206,"NES PPU0 BG0 vblank",-1);
	vcdp->declBit(c+33,"NES PPU0 BG0 ppu_read",-1);
	vcdp->declBus(c+196,"NES PPU0 BG0 PPUCTRL",-1,7,0);
	vcdp->declBus(c+198,"NES PPU0 BG0 mem_data_out",-1,7,0);
	vcdp->declBus(c+90,"NES PPU0 BG0 data_in",-1,7,0);
	vcdp->declBus(c+54,"NES PPU0 BG0 ppu_bg_r_address",-1,15,0);
	vcdp->declBus(c+239,"NES PPU0 BG0 color_code",-1,7,0);
	vcdp->declBus(c+87,"NES PPU0 BG0 cpu_addr",-1,15,0);
	vcdp->declBit(c+190,"NES PPU0 BG0 PPU_SCROLL_FLAG",-1);
	vcdp->declBit(c+191,"NES PPU0 BG0 PPU_ADDR_FLAG",-1);
	vcdp->declBit(c+56,"NES PPU0 BG0 RWE",-1);
	vcdp->declBus(c+223,"NES PPU0 BG0 multiplier",-1,7,0);
	vcdp->declBus(c+224,"NES PPU0 BG0 multiplier_two",-1,7,0);
	{int i; for (i=0; i<32; i++) {
		vcdp->declBus(c+277+i*1,"NES PPU0 BG0 palette_ram",(i+0),7,0);}}
	vcdp->declBus(c+106,"NES PPU0 BG0 RED",-1,7,0);
	vcdp->declBus(c+107,"NES PPU0 BG0 GREEN",-1,7,0);
	vcdp->declBus(c+105,"NES PPU0 BG0 BLUE",-1,7,0);
	vcdp->declBit(c+225,"NES PPU0 BG0 nt_bit",-1);
	vcdp->declBit(c+137,"NES PPU0 BG0 LoopyT_Next",-1);
	vcdp->declBus(c+309,"NES PPU0 BG0 horiz_counter",-1,9,0);
	vcdp->declBus(c+310,"NES PPU0 BG0 vert_counter",-1,9,0);
	vcdp->declBus(c+68,"NES PPU0 BG0 nt_address",-1,15,0);
	vcdp->declBus(c+69,"NES PPU0 BG0 ppu_r_addr_q",-1,15,0);
	vcdp->declBus(c+97,"NES PPU0 BG0 ppu_r_addr_d",-1,15,0);
	vcdp->declBus(c+70,"NES PPU0 BG0 at_address",-1,15,0);
	vcdp->declBus(c+311,"NES PPU0 BG0 bitmap_one_address",-1,15,0);
	vcdp->declBus(c+312,"NES PPU0 BG0 bitmap_two_address",-1,15,0);
	vcdp->declBus(c+179,"NES PPU0 BG0 pattern_byte_0_next",-1,7,0);
	vcdp->declBus(c+178,"NES PPU0 BG0 pattern_byte_1_next",-1,7,0);
	vcdp->declBus(c+170,"NES PPU0 BG0 pattern_byte_0_curr",-1,7,0);
	vcdp->declBus(c+171,"NES PPU0 BG0 pattern_byte_1_curr",-1,7,0);
	vcdp->declBus(c+98,"NES PPU0 BG0 nametable_byte_curr",-1,7,0);
	vcdp->declBus(c+99,"NES PPU0 BG0 attribute_data_curr",-1,7,0);
	vcdp->declBus(c+109,"NES PPU0 BG0 nametable_byte_next",-1,7,0);
	vcdp->declBus(c+108,"NES PPU0 BG0 attribute_data_next",-1,7,0);
	vcdp->declBus(c+313,"NES PPU0 BG0 fetch_phase",-1,3,0);
	vcdp->declBus(c+314,"NES PPU0 BG0 fetch_phase_next",-1,3,0);
	vcdp->declBit(c+55,"NES PPU0 BG0 ALE",-1);
	vcdp->declBus(c+315,"NES PPU0 BG0 pipe_0",-1,7,0);
	vcdp->declBus(c+316,"NES PPU0 BG0 pipe_1",-1,7,0);
	vcdp->declBus(c+317,"NES PPU0 BG0 pipe_2",-1,7,0);
	vcdp->declBus(c+318,"NES PPU0 BG0 pipe_3",-1,7,0);
	vcdp->declBus(c+319,"NES PPU0 BG0 palette_mem_address",-1,15,0);
	vcdp->declBus(c+320,"NES PPU0 BG0 palette_fetch_counter",-1,5,0);
	vcdp->declBit(c+321,"NES PPU0 BG0 palette_fetch_enable",-1);
	{int i; for (i=0; i<8; i++) {
		vcdp->declBus(c+58+i*1,"NES PPU0 BG0 bitmap",(i+0),1,0);}}
	vcdp->declBus(c+66,"NES PPU0 BG0 bitmap_index",-1,2,0);
	vcdp->declBus(c+322,"NES PPU0 BG0 bitmap_vertical_index",-1,10,0);
	{int i; for (i=0; i<4; i++) {
		vcdp->declBus(c+323+i*1,"NES PPU0 BG0 bg_palette_ram_separated",(i+0),7,0);}}
	vcdp->declBus(c+100,"NES PPU0 BG0 attribute_top_left",-1,1,0);
	vcdp->declBus(c+101,"NES PPU0 BG0 attribute_bottom_left",-1,1,0);
	vcdp->declBus(c+102,"NES PPU0 BG0 attribute_top_right",-1,1,0);
	vcdp->declBus(c+103,"NES PPU0 BG0 attribute_bottom_right",-1,1,0);
	vcdp->declBit(c+327,"NES PPU0 BG0 right",-1);
	vcdp->declBit(c+328,"NES PPU0 BG0 left",-1);
	vcdp->declBit(c+329,"NES PPU0 BG0 top",-1);
	vcdp->declBit(c+330,"NES PPU0 BG0 bottom",-1);
	vcdp->declBus(c+331,"NES PPU0 BG0 at_scroll_address",-1,15,0);
	vcdp->declBus(c+332,"NES PPU0 BG0 nt_scroll_address",-1,15,0);
	vcdp->declBus(c+185,"NES PPU0 BG0 LoopyV",-1,14,0);
	vcdp->declBus(c+180,"NES PPU0 BG0 LoopyT",-1,14,0);
	vcdp->declBus(c+333,"NES PPU0 BG0 LoopyV_temp",-1,14,0);
	vcdp->declBus(c+334,"NES PPU0 BG0 LoopyV_temp_two",-1,14,0);
	vcdp->declBus(c+110,"NES PPU0 BG0 fine_x",-1,2,0);
	vcdp->declBus(c+335,"NES PPU0 BG0 fine_y",-1,2,0);
	vcdp->declBus(c+110,"NES PPU0 BG0 loopy_x",-1,2,0);
	vcdp->declBus(c+336,"NES PPU0 BG0 offset",-1,7,0);
	vcdp->declBus(c+337,"NES PPU0 BG0 nt_base",-1,15,0);
	vcdp->declBus(c+338,"NES PPU0 BG0 curr_nt",-1,15,0);
	vcdp->declBus(c+339,"NES PPU0 BG0 next_nt",-1,15,0);
	vcdp->declBus(c+340,"NES PPU0 BG0 at_base",-1,15,0);
	vcdp->declBus(c+341,"NES PPU0 BG0 curr_at",-1,15,0);
	vcdp->declBus(c+342,"NES PPU0 BG0 next_at",-1,15,0);
	vcdp->declBus(c+343,"NES PPU0 BG0 next_table",-1,7,0);
	vcdp->declBus(c+344,"NES PPU0 BG0 coarse_x",-1,7,0);
	vcdp->declBit(c+136,"NES PPU0 BG0 ppu_address_latch",-1);
	vcdp->declBit(c+345,"NES PPU0 BG0 pre_render",-1);
	vcdp->declBit(c+193,"NES PPU0 BG0 ppu_increment",-1);
	vcdp->declBus(c+67,"NES PPU0 BG0 current_px",-1,1,0);
	vcdp->declBit(c+53,"NES PPU0 BG0 mem_fetch",-1);
	vcdp->declBit(c+177,"NES PPU0 BG0 loopy_latch",-1);
	vcdp->declBit(c+210,"NES CPU0 clk",-1);
	vcdp->declBit(c+40,"NES CPU0 reset",-1);
	vcdp->declBus(c+87,"NES CPU0 AB",-1,15,0);
	vcdp->declBus(c+46,"NES CPU0 DI",-1,7,0);
	vcdp->declBus(c+86,"NES CPU0 DO",-1,7,0);
	vcdp->declBit(c+56,"NES CPU0 WE",-1);
	vcdp->declBit(c+232,"NES CPU0 IRQ",-1);
	vcdp->declBit(c+213,"NES CPU0 NMI",-1);
	vcdp->declBit(c+51,"NES CPU0 RDY",-1);
	vcdp->declBus(c+115,"NES CPU0 PC",-1,15,0);
	vcdp->declBus(c+121,"NES CPU0 ABL",-1,7,0);
	vcdp->declBus(c+122,"NES CPU0 ABH",-1,7,0);
	vcdp->declBus(c+199,"NES CPU0 ADD",-1,7,0);
	vcdp->declBus(c+128,"NES CPU0 DIHOLD",-1,7,0);
	vcdp->declBit(c+346,"NES CPU0 DIHOLD_valid",-1);
	vcdp->declBus(c+80,"NES CPU0 DIMUX",-1,7,0);
	vcdp->declBus(c+132,"NES CPU0 IRHOLD",-1,7,0);
	vcdp->declBit(c+118,"NES CPU0 IRHOLD_valid",-1);
	{int i; for (i=0; i<4; i++) {
		vcdp->declBus(c+139+i*1,"NES CPU0 AXYS",(i+0),7,0);}}
	vcdp->declBit(c+39,"NES CPU0 C",-1);
	vcdp->declBit(c+36,"NES CPU0 Z",-1);
	vcdp->declBit(c+35,"NES CPU0 I",-1);
	vcdp->declBit(c+43,"NES CPU0 D",-1);
	vcdp->declBit(c+38,"NES CPU0 V",-1);
	vcdp->declBit(c+37,"NES CPU0 N",-1);
	vcdp->declBit(c+200,"NES CPU0 AZ",-1);
	vcdp->declBit(c+149,"NES CPU0 AV",-1);
	vcdp->declBit(c+148,"NES CPU0 AN",-1);
	vcdp->declBit(c+150,"NES CPU0 HC",-1);
	vcdp->declBus(c+88,"NES CPU0 AI",-1,7,0);
	vcdp->declBus(c+84,"NES CPU0 BI",-1,7,0);
	vcdp->declBus(c+82,"NES CPU0 IR",-1,7,0);
	vcdp->declBit(c+77,"NES CPU0 CI",-1);
	vcdp->declBit(c+154,"NES CPU0 CO",-1);
	vcdp->declBus(c+116,"NES CPU0 PCH",-1,7,0);
	vcdp->declBus(c+117,"NES CPU0 PCL",-1,7,0);
	vcdp->declBit(c+34,"NES CPU0 NMI_edge",-1);
	vcdp->declBus(c+79,"NES CPU0 regsel",-1,1,0);
	vcdp->declBus(c+85,"NES CPU0 regfile",-1,7,0);
	vcdp->declBus(c+347,"NES CPU0 SEL_A",-1,1,0);
	vcdp->declBus(c+348,"NES CPU0 SEL_S",-1,1,0);
	vcdp->declBus(c+349,"NES CPU0 SEL_X",-1,1,0);
	vcdp->declBus(c+350,"NES CPU0 SEL_Y",-1,1,0);
	vcdp->declBus(c+143,"NES CPU0 A",-1,7,0);
	vcdp->declBus(c+144,"NES CPU0 X",-1,7,0);
	vcdp->declBus(c+145,"NES CPU0 Y",-1,7,0);
	vcdp->declBus(c+146,"NES CPU0 S",-1,7,0);
	vcdp->declBus(c+45,"NES CPU0 P",-1,7,0);
	vcdp->declBus(c+208,"NES CPU0 state",-1,5,0);
	vcdp->declBit(c+71,"NES CPU0 PC_inc",-1);
	vcdp->declBus(c+83,"NES CPU0 PC_temp",-1,15,0);
	vcdp->declBus(c+130,"NES CPU0 src_reg",-1,1,0);
	vcdp->declBus(c+129,"NES CPU0 dst_reg",-1,1,0);
	vcdp->declBit(c+131,"NES CPU0 index_y",-1);
	vcdp->declBit(c+165,"NES CPU0 load_reg",-1);
	vcdp->declBit(c+124,"NES CPU0 inc",-1);
	vcdp->declBit(c+157,"NES CPU0 write_back",-1);
	vcdp->declBit(c+127,"NES CPU0 load_only",-1);
	vcdp->declBit(c+164,"NES CPU0 store",-1);
	vcdp->declBit(c+176,"NES CPU0 adc_sbc",-1);
	vcdp->declBit(c+167,"NES CPU0 compare",-1);
	vcdp->declBit(c+166,"NES CPU0 shift",-1);
	vcdp->declBit(c+125,"NES CPU0 rotate",-1);
	vcdp->declBit(c+156,"NES CPU0 backwards",-1);
	vcdp->declBit(c+41,"NES CPU0 cond_true",-1);
	vcdp->declBus(c+113,"NES CPU0 cond_code",-1,2,0);
	vcdp->declBit(c+123,"NES CPU0 shift_right",-1);
	vcdp->declBit(c+75,"NES CPU0 alu_shift_right",-1);
	vcdp->declBus(c+126,"NES CPU0 op",-1,3,0);
	vcdp->declBus(c+78,"NES CPU0 alu_op",-1,3,0);
	vcdp->declBit(c+169,"NES CPU0 adc_bcd",-1);
	vcdp->declBit(c+168,"NES CPU0 adj_bcd",-1);
	vcdp->declBit(c+158,"NES CPU0 bit_ins",-1);
	vcdp->declBit(c+203,"NES CPU0 plp",-1);
	vcdp->declBit(c+120,"NES CPU0 php",-1);
	vcdp->declBit(c+161,"NES CPU0 clc",-1);
	vcdp->declBit(c+160,"NES CPU0 sec",-1);
	vcdp->declBit(c+201,"NES CPU0 cld",-1);
	vcdp->declBit(c+202,"NES CPU0 sed",-1);
	vcdp->declBit(c+159,"NES CPU0 cli",-1);
	vcdp->declBit(c+162,"NES CPU0 sei",-1);
	vcdp->declBit(c+163,"NES CPU0 clv",-1);
	vcdp->declBit(c+119,"NES CPU0 brk",-1);
	vcdp->declBit(c+114,"NES CPU0 res",-1);
	vcdp->declBus(c+351,"NES CPU0 OP_OR",-1,3,0);
	vcdp->declBus(c+352,"NES CPU0 OP_AND",-1,3,0);
	vcdp->declBus(c+353,"NES CPU0 OP_EOR",-1,3,0);
	vcdp->declBus(c+354,"NES CPU0 OP_ADD",-1,3,0);
	vcdp->declBus(c+355,"NES CPU0 OP_SUB",-1,3,0);
	vcdp->declBus(c+356,"NES CPU0 OP_ROL",-1,3,0);
	vcdp->declBus(c+357,"NES CPU0 OP_A",-1,3,0);
	vcdp->declBus(c+358,"NES CPU0 ABS0",-1,5,0);
	vcdp->declBus(c+359,"NES CPU0 ABS1",-1,5,0);
	vcdp->declBus(c+360,"NES CPU0 ABSX0",-1,5,0);
	vcdp->declBus(c+361,"NES CPU0 ABSX1",-1,5,0);
	vcdp->declBus(c+362,"NES CPU0 ABSX2",-1,5,0);
	vcdp->declBus(c+363,"NES CPU0 BRA0",-1,5,0);
	vcdp->declBus(c+364,"NES CPU0 BRA1",-1,5,0);
	vcdp->declBus(c+365,"NES CPU0 BRA2",-1,5,0);
	vcdp->declBus(c+366,"NES CPU0 BRK0",-1,5,0);
	vcdp->declBus(c+367,"NES CPU0 BRK1",-1,5,0);
	vcdp->declBus(c+368,"NES CPU0 BRK2",-1,5,0);
	vcdp->declBus(c+369,"NES CPU0 BRK3",-1,5,0);
	vcdp->declBus(c+370,"NES CPU0 DECODE",-1,5,0);
	vcdp->declBus(c+371,"NES CPU0 FETCH",-1,5,0);
	vcdp->declBus(c+372,"NES CPU0 INDX0",-1,5,0);
	vcdp->declBus(c+373,"NES CPU0 INDX1",-1,5,0);
	vcdp->declBus(c+374,"NES CPU0 INDX2",-1,5,0);
	vcdp->declBus(c+375,"NES CPU0 INDX3",-1,5,0);
	vcdp->declBus(c+376,"NES CPU0 INDY0",-1,5,0);
	vcdp->declBus(c+377,"NES CPU0 INDY1",-1,5,0);
	vcdp->declBus(c+378,"NES CPU0 INDY2",-1,5,0);
	vcdp->declBus(c+379,"NES CPU0 INDY3",-1,5,0);
	vcdp->declBus(c+380,"NES CPU0 JMP0",-1,5,0);
	vcdp->declBus(c+381,"NES CPU0 JMP1",-1,5,0);
	vcdp->declBus(c+382,"NES CPU0 JMPI0",-1,5,0);
	vcdp->declBus(c+383,"NES CPU0 JMPI1",-1,5,0);
	vcdp->declBus(c+384,"NES CPU0 JSR0",-1,5,0);
	vcdp->declBus(c+385,"NES CPU0 JSR1",-1,5,0);
	vcdp->declBus(c+386,"NES CPU0 JSR2",-1,5,0);
	vcdp->declBus(c+387,"NES CPU0 JSR3",-1,5,0);
	vcdp->declBus(c+388,"NES CPU0 PULL0",-1,5,0);
	vcdp->declBus(c+389,"NES CPU0 PULL1",-1,5,0);
	vcdp->declBus(c+390,"NES CPU0 PULL2",-1,5,0);
	vcdp->declBus(c+391,"NES CPU0 PUSH0",-1,5,0);
	vcdp->declBus(c+392,"NES CPU0 PUSH1",-1,5,0);
	vcdp->declBus(c+393,"NES CPU0 READ",-1,5,0);
	vcdp->declBus(c+394,"NES CPU0 REG",-1,5,0);
	vcdp->declBus(c+395,"NES CPU0 RTI0",-1,5,0);
	vcdp->declBus(c+396,"NES CPU0 RTI1",-1,5,0);
	vcdp->declBus(c+397,"NES CPU0 RTI2",-1,5,0);
	vcdp->declBus(c+398,"NES CPU0 RTI3",-1,5,0);
	vcdp->declBus(c+399,"NES CPU0 RTI4",-1,5,0);
	vcdp->declBus(c+400,"NES CPU0 RTS0",-1,5,0);
	vcdp->declBus(c+401,"NES CPU0 RTS1",-1,5,0);
	vcdp->declBus(c+402,"NES CPU0 RTS2",-1,5,0);
	vcdp->declBus(c+403,"NES CPU0 RTS3",-1,5,0);
	vcdp->declBus(c+404,"NES CPU0 WRITE",-1,5,0);
	vcdp->declBus(c+405,"NES CPU0 ZP0",-1,5,0);
	vcdp->declBus(c+406,"NES CPU0 ZPX0",-1,5,0);
	vcdp->declBus(c+407,"NES CPU0 ZPX1",-1,5,0);
	vcdp->declBus(c+408,"NES CPU0 ZEROPAGE",-1,7,0);
	vcdp->declBus(c+409,"NES CPU0 STACKPAGE",-1,7,0);
	vcdp->declBit(c+57,"NES CPU0 write_register",-1);
	vcdp->declBus(c+151,"NES CPU0 ADJL",-1,3,0);
	vcdp->declBus(c+155,"NES CPU0 ADJH",-1,3,0);
	vcdp->declBit(c+42,"NES CPU0 NMI_1",-1);
	vcdp->declBit(c+210,"NES CPU0 ALU clk",-1);
	vcdp->declBit(c+75,"NES CPU0 ALU right",-1);
	vcdp->declBus(c+78,"NES CPU0 ALU op",-1,3,0);
	vcdp->declBus(c+88,"NES CPU0 ALU AI",-1,7,0);
	vcdp->declBus(c+84,"NES CPU0 ALU BI",-1,7,0);
	vcdp->declBit(c+77,"NES CPU0 ALU CI",-1);
	vcdp->declBit(c+72,"NES CPU0 ALU BCD",-1);
	vcdp->declBus(c+199,"NES CPU0 ALU OUT",-1,7,0);
	vcdp->declBit(c+154,"NES CPU0 ALU CO",-1);
	vcdp->declBit(c+149,"NES CPU0 ALU V",-1);
	vcdp->declBit(c+200,"NES CPU0 ALU Z",-1);
	vcdp->declBit(c+148,"NES CPU0 ALU N",-1);
	vcdp->declBit(c+150,"NES CPU0 ALU HC",-1);
	vcdp->declBit(c+51,"NES CPU0 ALU RDY",-1);
	vcdp->declBit(c+153,"NES CPU0 ALU AI7",-1);
	vcdp->declBit(c+152,"NES CPU0 ALU BI7",-1);
	vcdp->declBus(c+91,"NES CPU0 ALU temp_logic",-1,8,0);
	vcdp->declBus(c+92,"NES CPU0 ALU temp_BI",-1,7,0);
	vcdp->declBus(c+93,"NES CPU0 ALU temp_l",-1,4,0);
	vcdp->declBus(c+95,"NES CPU0 ALU temp_h",-1,4,0);
	vcdp->declBus(c+96,"NES CPU0 ALU temp",-1,8,0);
	vcdp->declBit(c+76,"NES CPU0 ALU adder_CI",-1);
	vcdp->declBit(c+73,"NES CPU0 ALU HC9",-1);
	vcdp->declBit(c+74,"NES CPU0 ALU CO9",-1);
	vcdp->declBit(c+94,"NES CPU0 ALU temp_HC",-1);
    }
}

void VNES::traceFullThis__1(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus(c+1,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[0]),8);
	vcdp->fullBus(c+2,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[1]),8);
	vcdp->fullBus(c+3,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[2]),8);
	vcdp->fullBus(c+4,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[3]),8);
	vcdp->fullBus(c+5,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[4]),8);
	vcdp->fullBus(c+6,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[5]),8);
	vcdp->fullBus(c+7,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[6]),8);
	vcdp->fullBus(c+8,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[7]),8);
	vcdp->fullBus(c+9,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[8]),8);
	vcdp->fullBus(c+10,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[9]),8);
	vcdp->fullBus(c+11,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[10]),8);
	vcdp->fullBus(c+12,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[11]),8);
	vcdp->fullBus(c+13,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[12]),8);
	vcdp->fullBus(c+14,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[13]),8);
	vcdp->fullBus(c+15,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[14]),8);
	vcdp->fullBus(c+16,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[15]),8);
	vcdp->fullBus(c+17,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[16]),8);
	vcdp->fullBus(c+18,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[17]),8);
	vcdp->fullBus(c+19,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[18]),8);
	vcdp->fullBus(c+20,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[19]),8);
	vcdp->fullBus(c+21,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[20]),8);
	vcdp->fullBus(c+22,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[21]),8);
	vcdp->fullBus(c+23,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[22]),8);
	vcdp->fullBus(c+24,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[23]),8);
	vcdp->fullBus(c+25,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[24]),8);
	vcdp->fullBus(c+26,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[25]),8);
	vcdp->fullBus(c+27,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[26]),8);
	vcdp->fullBus(c+28,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[27]),8);
	vcdp->fullBus(c+29,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[28]),8);
	vcdp->fullBus(c+30,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[29]),8);
	vcdp->fullBus(c+31,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[30]),8);
	vcdp->fullBus(c+32,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[31]),8);
	vcdp->fullBit(c+33,(vlTOPp->NES__DOT__PPU0__DOT__ppu_read));
	vcdp->fullBit(c+34,(vlTOPp->NES__DOT__CPU0__DOT__NMI_edge));
	vcdp->fullBit(c+35,(vlTOPp->NES__DOT__CPU0__DOT__I));
	vcdp->fullBit(c+36,(vlTOPp->NES__DOT__CPU0__DOT__Z));
	vcdp->fullBit(c+37,(vlTOPp->NES__DOT__CPU0__DOT__N));
	vcdp->fullBit(c+38,(vlTOPp->NES__DOT__CPU0__DOT__V));
	vcdp->fullBit(c+39,(vlTOPp->NES__DOT__CPU0__DOT__C));
	vcdp->fullBit(c+40,(vlTOPp->NES__DOT____Vcellinp__CPU0__reset));
	vcdp->fullBit(c+41,(vlTOPp->NES__DOT__CPU0__DOT__cond_true));
	vcdp->fullBit(c+42,(vlTOPp->NES__DOT__CPU0__DOT__NMI_1));
	vcdp->fullBit(c+43,(vlTOPp->NES__DOT__CPU0__DOT__D));
	vcdp->fullBus(c+44,(((IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__address)
			      ? 0x72U : (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__data))),8);
	vcdp->fullBus(c+45,(vlTOPp->NES__DOT__CPU0__DOT__P),8);
	vcdp->fullBus(c+46,(vlTOPp->NES__DOT__data_out),8);
	vcdp->fullBit(c+47,(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__reset));
	vcdp->fullBus(c+48,(((IData)(vlTOPp->NES__DOT__PPU0__DOT__vblank)
			      ? (IData)(vlTOPp->NES__DOT__PPU0__DOT__ppu_reg_r_address)
			      : (((0x101U < (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)) 
				  & (0x140U > (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)))
				  ? (IData)(vlTOPp->NES__DOT__PPU0__DOT__sprite_address)
				  : ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__mem_fetch)
				      ? (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__ppu_r_addr_q)
				      : (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__palette_mem_address))))),16);
	vcdp->fullBit(c+49,((1U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__vblank)
				    ? (IData)(vlTOPp->NES__DOT__RWE)
				    : 0U))));
	vcdp->fullBus(c+50,((((0x101U < (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)) 
			      & (0x140U > (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)))
			      ? (IData)(vlTOPp->NES__DOT__PPU0__DOT__sprite_address)
			      : ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__mem_fetch)
				  ? (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__ppu_r_addr_q)
				  : (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__palette_mem_address)))),16);
	vcdp->fullBit(c+51,(vlTOPp->NES__DOT__Ready));
	vcdp->fullBus(c+52,(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__next_state),5);
	vcdp->fullBit(c+53,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__mem_fetch));
	vcdp->fullBus(c+54,(((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__mem_fetch)
			      ? (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__ppu_r_addr_q)
			      : (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__palette_mem_address))),16);
	vcdp->fullBit(c+55,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__ALE));
	vcdp->fullBit(c+56,(vlTOPp->NES__DOT__RWE));
	vcdp->fullBit(c+57,(vlTOPp->NES__DOT__CPU0__DOT__write_register));
	vcdp->fullBus(c+58,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap[0]),2);
	vcdp->fullBus(c+59,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap[1]),2);
	vcdp->fullBus(c+60,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap[2]),2);
	vcdp->fullBus(c+61,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap[3]),2);
	vcdp->fullBus(c+62,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap[4]),2);
	vcdp->fullBus(c+63,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap[5]),2);
	vcdp->fullBus(c+64,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap[6]),2);
	vcdp->fullBus(c+65,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap[7]),2);
	vcdp->fullBus(c+66,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap_index),3);
	vcdp->fullBus(c+67,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__current_px),2);
	vcdp->fullBus(c+68,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__nt_address),16);
	vcdp->fullBus(c+69,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__ppu_r_addr_q),16);
	vcdp->fullBus(c+70,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__at_address),16);
	vcdp->fullBit(c+71,(vlTOPp->NES__DOT__CPU0__DOT__PC_inc));
	vcdp->fullBit(c+72,(vlTOPp->NES__DOT__CPU0__DOT____Vcellinp__ALU__BCD));
	vcdp->fullBit(c+73,(((IData)(vlTOPp->NES__DOT__CPU0__DOT____Vcellinp__ALU__BCD) 
			     & (5U <= (7U & ((IData)(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_l) 
					     >> 1U))))));
	vcdp->fullBit(c+74,(((IData)(vlTOPp->NES__DOT__CPU0__DOT____Vcellinp__ALU__BCD) 
			     & (5U <= (7U & ((IData)(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_h) 
					     >> 1U))))));
	vcdp->fullBit(c+75,(vlTOPp->NES__DOT__CPU0__DOT__alu_shift_right));
	vcdp->fullBit(c+76,((1U & (((IData)(vlTOPp->NES__DOT__CPU0__DOT__alu_shift_right) 
				    | (3U == (3U & 
					      ((IData)(vlTOPp->NES__DOT__CPU0__DOT__alu_op) 
					       >> 2U))))
				    ? 0U : (IData)(vlTOPp->NES__DOT__CPU0__DOT__CI)))));
	vcdp->fullBit(c+77,(vlTOPp->NES__DOT__CPU0__DOT__CI));
	vcdp->fullBus(c+78,(vlTOPp->NES__DOT__CPU0__DOT__alu_op),4);
	vcdp->fullBus(c+79,(vlTOPp->NES__DOT__CPU0__DOT__regsel),2);
	vcdp->fullBus(c+80,(vlTOPp->NES__DOT__CPU0__DOT__DIMUX),8);
	vcdp->fullBus(c+81,(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__data),8);
	vcdp->fullBus(c+82,(vlTOPp->NES__DOT__CPU0__DOT__IR),8);
	vcdp->fullBus(c+83,(vlTOPp->NES__DOT__CPU0__DOT__PC_temp),16);
	vcdp->fullBus(c+84,(vlTOPp->NES__DOT__CPU0__DOT__BI),8);
	vcdp->fullBus(c+85,(vlTOPp->NES__DOT__CPU0__DOT__regfile),8);
	vcdp->fullBus(c+86,(vlTOPp->NES__DOT__data_in_cpu),8);
	vcdp->fullBus(c+87,(vlTOPp->NES__DOT__address_cpu),16);
	vcdp->fullBus(c+88,(vlTOPp->NES__DOT__CPU0__DOT__AI),8);
	vcdp->fullBus(c+89,(vlTOPp->NES__DOT__address),16);
	vcdp->fullBus(c+90,(vlTOPp->NES__DOT__data_in),8);
	vcdp->fullBus(c+91,(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_logic),9);
	vcdp->fullBus(c+92,(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_BI),8);
	vcdp->fullBus(c+93,(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_l),5);
	vcdp->fullBit(c+94,(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_HC));
	vcdp->fullBus(c+95,(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_h),5);
	vcdp->fullBus(c+96,(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp),9);
	vcdp->fullBus(c+97,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__ppu_r_addr_d),16);
	vcdp->fullBus(c+98,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__nametable_byte_curr),8);
	vcdp->fullBus(c+99,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__attribute_data_curr),8);
	vcdp->fullBus(c+100,((3U & (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__attribute_data_curr))),2);
	vcdp->fullBus(c+101,((3U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__attribute_data_curr) 
				    >> 4U))),2);
	vcdp->fullBus(c+102,((3U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__attribute_data_curr) 
				    >> 2U))),2);
	vcdp->fullBus(c+103,((3U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__attribute_data_curr) 
				    >> 6U))),2);
	vcdp->fullBus(c+104,(vlTOPp->NES__DOT__PPU0__DOT__PPUDATA),8);
	vcdp->fullBus(c+105,(vlTOPp->NES__DOT__PPU0__DOT__BLUE_bg),8);
	vcdp->fullBus(c+106,(vlTOPp->NES__DOT__PPU0__DOT__RED_bg),8);
	vcdp->fullBus(c+107,(vlTOPp->NES__DOT__PPU0__DOT__GREEN_bg),8);
	vcdp->fullBus(c+108,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__attribute_data_next),8);
	vcdp->fullBus(c+109,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__nametable_byte_next),8);
	vcdp->fullBus(c+110,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__loopy_x),3);
	vcdp->fullBus(c+111,(vlTOPp->NES__DOT__data_out_mem),8);
	vcdp->fullBit(c+112,(vlTOPp->NES__DOT__ppu_rwe));
	vcdp->fullBus(c+113,(vlTOPp->NES__DOT__CPU0__DOT__cond_code),3);
	vcdp->fullBit(c+114,(vlTOPp->NES__DOT__CPU0__DOT__res));
	vcdp->fullBus(c+115,(vlTOPp->NES__DOT__pc),16);
	vcdp->fullBus(c+116,((0xffU & ((IData)(vlTOPp->NES__DOT__pc) 
				       >> 8U))),8);
	vcdp->fullBus(c+117,((0xffU & (IData)(vlTOPp->NES__DOT__pc))),8);
	vcdp->fullBit(c+118,(vlTOPp->NES__DOT__CPU0__DOT__IRHOLD_valid));
	vcdp->fullBit(c+119,(vlTOPp->NES__DOT__CPU0__DOT__brk));
	vcdp->fullBit(c+120,(vlTOPp->NES__DOT__CPU0__DOT__php));
	vcdp->fullBus(c+121,(vlTOPp->NES__DOT__CPU0__DOT__ABL),8);
	vcdp->fullBus(c+122,(vlTOPp->NES__DOT__CPU0__DOT__ABH),8);
	vcdp->fullBit(c+123,(vlTOPp->NES__DOT__CPU0__DOT__shift_right));
	vcdp->fullBit(c+124,(vlTOPp->NES__DOT__CPU0__DOT__inc));
	vcdp->fullBit(c+125,(vlTOPp->NES__DOT__CPU0__DOT__rotate));
	vcdp->fullBus(c+126,(vlTOPp->NES__DOT__CPU0__DOT__op),4);
	vcdp->fullBit(c+127,(vlTOPp->NES__DOT__CPU0__DOT__load_only));
	vcdp->fullBus(c+128,(vlTOPp->NES__DOT__CPU0__DOT__DIHOLD),8);
	vcdp->fullBus(c+129,(vlTOPp->NES__DOT__CPU0__DOT__dst_reg),2);
	vcdp->fullBus(c+130,(vlTOPp->NES__DOT__CPU0__DOT__src_reg),2);
	vcdp->fullBit(c+131,(vlTOPp->NES__DOT__CPU0__DOT__index_y));
	vcdp->fullBus(c+132,(vlTOPp->NES__DOT__CPU0__DOT__IRHOLD),8);
	vcdp->fullBus(c+133,(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__clk_divide),10);
	vcdp->fullBit(c+134,(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__clk_50k));
	vcdp->fullBus(c+135,(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CLK_DIV),32);
	vcdp->fullBit(c+136,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__ppu_address_latch));
	vcdp->fullBit(c+137,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyT_Next));
	vcdp->fullBit(c+138,(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK));
	vcdp->fullBus(c+139,(vlTOPp->NES__DOT__CPU0__DOT__AXYS[0]),8);
	vcdp->fullBus(c+140,(vlTOPp->NES__DOT__CPU0__DOT__AXYS[1]),8);
	vcdp->fullBus(c+141,(vlTOPp->NES__DOT__CPU0__DOT__AXYS[2]),8);
	vcdp->fullBus(c+142,(vlTOPp->NES__DOT__CPU0__DOT__AXYS[3]),8);
	vcdp->fullBus(c+143,(vlTOPp->NES__DOT__CPU0__DOT__AXYS
			     [0U]),8);
	vcdp->fullBus(c+144,(vlTOPp->NES__DOT__CPU0__DOT__AXYS
			     [2U]),8);
	vcdp->fullBus(c+145,(vlTOPp->NES__DOT__CPU0__DOT__AXYS
			     [3U]),8);
	vcdp->fullBus(c+146,(vlTOPp->NES__DOT__CPU0__DOT__AXYS
			     [1U]),8);
	vcdp->fullBus(c+147,(vlTOPp->NES__DOT__PPU0__DOT__mem_data_in),8);
	vcdp->fullBit(c+148,(vlTOPp->NES__DOT__CPU0__DOT__AN));
	vcdp->fullBit(c+149,(((((IData)(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__AI7) 
				^ (IData)(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__BI7)) 
			       ^ (IData)(vlTOPp->NES__DOT__CPU0__DOT__CO)) 
			      ^ (IData)(vlTOPp->NES__DOT__CPU0__DOT__AN))));
	vcdp->fullBit(c+150,(vlTOPp->NES__DOT__CPU0__DOT__HC));
	vcdp->fullBus(c+151,(((IData)(vlTOPp->NES__DOT__CPU0__DOT__adj_bcd)
			       ? ((IData)(vlTOPp->NES__DOT__CPU0__DOT__adc_bcd)
				   ? ((IData)(vlTOPp->NES__DOT__CPU0__DOT__HC)
				       ? 6U : 0U) : 
				  ((IData)(vlTOPp->NES__DOT__CPU0__DOT__HC)
				    ? 0U : 0xaU)) : 0U)),4);
	vcdp->fullBit(c+152,(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__BI7));
	vcdp->fullBit(c+153,(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__AI7));
	vcdp->fullBit(c+154,(vlTOPp->NES__DOT__CPU0__DOT__CO));
	vcdp->fullBus(c+155,(((IData)(vlTOPp->NES__DOT__CPU0__DOT__adj_bcd)
			       ? ((IData)(vlTOPp->NES__DOT__CPU0__DOT__adc_bcd)
				   ? ((IData)(vlTOPp->NES__DOT__CPU0__DOT__CO)
				       ? 6U : 0U) : 
				  ((IData)(vlTOPp->NES__DOT__CPU0__DOT__CO)
				    ? 0U : 0xaU)) : 0U)),4);
	vcdp->fullBit(c+156,(vlTOPp->NES__DOT__CPU0__DOT__backwards));
	vcdp->fullBit(c+157,(vlTOPp->NES__DOT__CPU0__DOT__write_back));
	vcdp->fullBit(c+158,(vlTOPp->NES__DOT__CPU0__DOT__bit_ins));
	vcdp->fullBit(c+159,(vlTOPp->NES__DOT__CPU0__DOT__cli));
	vcdp->fullBit(c+160,(vlTOPp->NES__DOT__CPU0__DOT__sec));
	vcdp->fullBit(c+161,(vlTOPp->NES__DOT__CPU0__DOT__clc));
	vcdp->fullBit(c+162,(vlTOPp->NES__DOT__CPU0__DOT__sei));
	vcdp->fullBit(c+163,(vlTOPp->NES__DOT__CPU0__DOT__clv));
	vcdp->fullBit(c+164,(vlTOPp->NES__DOT__CPU0__DOT__store));
	vcdp->fullBit(c+165,(vlTOPp->NES__DOT__CPU0__DOT__load_reg));
	vcdp->fullBit(c+166,(vlTOPp->NES__DOT__CPU0__DOT__shift));
	vcdp->fullBit(c+167,(vlTOPp->NES__DOT__CPU0__DOT__compare));
	vcdp->fullBit(c+168,(vlTOPp->NES__DOT__CPU0__DOT__adj_bcd));
	vcdp->fullBit(c+169,(vlTOPp->NES__DOT__CPU0__DOT__adc_bcd));
	vcdp->fullBus(c+170,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_0_curr),8);
	vcdp->fullBus(c+171,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_1_curr),8);
	vcdp->fullBit(c+172,(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__fail));
	vcdp->fullBit(c+173,(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__ack));
	vcdp->fullBus(c+174,(vlTOPp->NES__DOT__data_out_ppu),8);
	vcdp->fullBus(c+175,(vlTOPp->NES__DOT__PPU0__DOT__ppu_w_address),16);
	vcdp->fullBit(c+176,(vlTOPp->NES__DOT__CPU0__DOT__adc_sbc));
	vcdp->fullBit(c+177,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__loopy_latch));
	vcdp->fullBus(c+178,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_1_next),8);
	vcdp->fullBus(c+179,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_0_next),8);
	vcdp->fullBus(c+180,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyT),15);
	vcdp->fullBit(c+181,(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__address));
	vcdp->fullBus(c+182,(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__byte_num_local),3);
	vcdp->fullBus(c+183,(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__counter),4);
	vcdp->fullBus(c+184,(vlTOPp->NES__DOT__PPU0__DOT__DrawY),10);
	vcdp->fullBus(c+185,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyV),15);
	vcdp->fullBit(c+186,(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__done));
	vcdp->fullBus(c+187,(vlTOPp->NES__DOT__PPU0__DOT__PPUADDR),16);
	vcdp->fullBus(c+188,(vlTOPp->NES__DOT__PPUSCROLL),16);
	vcdp->fullBus(c+189,(vlTOPp->NES__DOT__PPU0__DOT__PPUSTATUS),8);
	vcdp->fullBit(c+190,(vlTOPp->NES__DOT__PPU0__DOT__PPU_SCROLL_FLAG));
	vcdp->fullBit(c+191,(vlTOPp->NES__DOT__PPU0__DOT__PPU_ADDR_FLAG));
	vcdp->fullBus(c+192,(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state),5);
	vcdp->fullBit(c+193,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__ppu_increment));
	vcdp->fullBus(c+194,(vlTOPp->NES__DOT__PPU0__DOT__OAMADDR),8);
	vcdp->fullBus(c+195,(vlTOPp->NES__DOT__PPU0__DOT__PPUMASK),8);
	vcdp->fullBus(c+196,(vlTOPp->NES__DOT__PPU0__DOT__PPUCTRL),8);
	vcdp->fullBus(c+197,(vlTOPp->NES__DOT__PPU0__DOT__OAMDATA),8);
	vcdp->fullBus(c+198,(vlTOPp->NES__DOT__PPU0__DOT__mem_data_out),8);
	vcdp->fullBus(c+199,(vlTOPp->NES__DOT__CPU0__DOT__ADD),8);
	vcdp->fullBit(c+200,((1U & (~ (IData)((0U != (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD)))))));
	vcdp->fullBit(c+201,(vlTOPp->NES__DOT__CPU0__DOT__cld));
	vcdp->fullBit(c+202,(vlTOPp->NES__DOT__CPU0__DOT__sed));
	vcdp->fullBit(c+203,(vlTOPp->NES__DOT__CPU0__DOT__plp));
	vcdp->fullBus(c+204,(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__byte_lut_next),8);
	vcdp->fullBus(c+205,(vlTOPp->NES__DOT__PPU0__DOT__ppu_reg_r_address),16);
	vcdp->fullBit(c+206,(vlTOPp->NES__DOT__PPU0__DOT__vblank));
	vcdp->fullBus(c+207,(vlTOPp->NES__DOT__PPU0__DOT__DrawX),10);
	vcdp->fullBus(c+208,(vlTOPp->NES__DOT__CPU0__DOT__state),6);
	vcdp->fullBus(c+209,(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__byte_lut),8);
	vcdp->fullBit(c+210,(vlTOPp->clk_50));
	vcdp->fullBit(c+211,(vlTOPp->ready_in));
	vcdp->fullBit(c+212,(vlTOPp->reset_al));
	vcdp->fullBit(c+213,(vlTOPp->nmi_interrupt));
	vcdp->fullBus(c+214,(vlTOPp->RED),8);
	vcdp->fullBus(c+215,(vlTOPp->GREEN),8);
	vcdp->fullBus(c+216,(vlTOPp->BLUE),8);
	vcdp->fullBit(c+217,(vlTOPp->VGA_CLK));
	vcdp->fullBit(c+218,(vlTOPp->VGA_HS));
	vcdp->fullBit(c+219,(vlTOPp->VGA_VS));
	vcdp->fullBit(c+220,(vlTOPp->VGA_BLANK_N));
	vcdp->fullBit(c+221,(vlTOPp->VGA_SYNC_N));
	vcdp->fullBit(c+222,(vlTOPp->vga_reset));
	vcdp->fullBus(c+223,(vlTOPp->multiplier),8);
	vcdp->fullBus(c+224,(vlTOPp->multiplier_two),8);
	vcdp->fullBit(c+225,(vlTOPp->nt_bit));
	vcdp->fullBit(c+226,(vlTOPp->scl));
	vcdp->fullBit(c+227,(vlTOPp->sda));
	vcdp->fullBit(c+228,(vlTOPp->Draw_enable));
	vcdp->fullBit(c+229,((1U & (~ (IData)(vlTOPp->reset_al)))));
	vcdp->fullBit(c+230,(vlTOPp->NES__DOT__res_interrupt));
	vcdp->fullBit(c+231,(vlTOPp->NES__DOT__C));
	vcdp->fullBit(c+232,(1U));
	vcdp->fullBit(c+233,(vlTOPp->NES__DOT__OAM_en));
	vcdp->fullBus(c+234,(vlTOPp->NES__DOT__r_address),16);
	vcdp->fullBus(c+235,(vlTOPp->NES__DOT__w_address),16);
	vcdp->fullBus(c+236,(vlTOPp->NES__DOT__oam_fetch_address_q),16);
	vcdp->fullBus(c+237,(vlTOPp->NES__DOT__hold),8);
	vcdp->fullBus(c+238,(((IData)(vlTOPp->NES__DOT__PPU0__DOT__priority_bit)
			       ? (IData)(vlTOPp->NES__DOT__PPU0__DOT__color_code_spr)
			       : (IData)(vlTOPp->NES__DOT__PPU0__DOT__color_code_bg))),8);
	vcdp->fullBus(c+239,(vlTOPp->NES__DOT__PPU0__DOT__color_code_bg),8);
	vcdp->fullBus(c+240,(vlTOPp->NES__DOT__PPU0__DOT__color_code_spr),8);
	vcdp->fullBus(c+241,(vlTOPp->NES__DOT__PPU0__DOT__sprite_counter),4);
	vcdp->fullBit(c+242,(vlTOPp->NES__DOT__PPU0__DOT__CLK_COUNTER));
	vcdp->fullBus(c+243,(vlTOPp->NES__DOT__PPU0__DOT__mem_data_out_d),8);
	vcdp->fullBus(c+244,(vlTOPp->NES__DOT__PPU0__DOT__sprite_address),16);
	vcdp->fullBit(c+245,(vlTOPp->NES__DOT__PPU0__DOT__vga_vblank));
	vcdp->fullBus(c+246,(vlTOPp->NES__DOT__PPU0__DOT__RED_sp),8);
	vcdp->fullBus(c+247,(vlTOPp->NES__DOT__PPU0__DOT__GREEN_sp),8);
	vcdp->fullBus(c+248,(vlTOPp->NES__DOT__PPU0__DOT__BLUE_sp),8);
	vcdp->fullBus(c+249,(vlTOPp->NES__DOT__PPU0__DOT__OAMDMA),8);
	vcdp->fullBus(c+250,(vlTOPp->NES__DOT__PPU0__DOT__data_out_oam),8);
	vcdp->fullBus(c+251,(vlTOPp->NES__DOT__PPU0__DOT__sprite_data_in),8);
	vcdp->fullBit(c+252,(vlTOPp->NES__DOT__PPU0__DOT__sprite_mem_access));
	vcdp->fullBus(c+253,(vlTOPp->NES__DOT__PPU0__DOT__sprite_address_q),16);
	vcdp->fullBus(c+254,(vlTOPp->NES__DOT__PPU0__DOT__sprite_address_d),16);
	vcdp->fullBus(c+255,(vlTOPp->NES__DOT__PPU0__DOT__address_to_vram),16);
	vcdp->fullBit(c+256,(vlTOPp->NES__DOT__PPU0__DOT__priority_bit));
	vcdp->fullBus(c+257,(0x72U),7);
	vcdp->fullBus(c+258,(2U),3);
	vcdp->fullBit(c+259,(0U));
	vcdp->fullBus(c+260,(0x2faf080U),32);
	vcdp->fullBus(c+261,(0x4e20U),32);
	vcdp->fullBus(c+262,(0U),32);
	vcdp->fullBus(c+263,(1U),32);
	vcdp->fullBus(c+264,(2U),32);
	vcdp->fullBus(c+265,(3U),32);
	vcdp->fullBus(c+266,(4U),32);
	vcdp->fullBus(c+267,(5U),32);
	vcdp->fullBus(c+268,(6U),32);
	vcdp->fullBus(c+269,(7U),32);
	vcdp->fullBus(c+270,(8U),32);
	vcdp->fullBus(c+271,(9U),32);
	vcdp->fullBus(c+272,(0xaU),32);
	vcdp->fullBus(c+273,(0xbU),32);
	vcdp->fullBus(c+274,(0xcU),32);
	vcdp->fullBus(c+275,(0xdU),32);
	vcdp->fullBus(c+276,(0xeU),32);
	vcdp->fullBus(c+277,(vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram[0]),8);
	vcdp->fullBus(c+278,(vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram[1]),8);
	vcdp->fullBus(c+279,(vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram[2]),8);
	vcdp->fullBus(c+280,(vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram[3]),8);
	vcdp->fullBus(c+281,(vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram[4]),8);
	vcdp->fullBus(c+282,(vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram[5]),8);
	vcdp->fullBus(c+283,(vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram[6]),8);
	vcdp->fullBus(c+284,(vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram[7]),8);
	vcdp->fullBus(c+285,(vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram[8]),8);
	vcdp->fullBus(c+286,(vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram[9]),8);
	vcdp->fullBus(c+287,(vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram[10]),8);
	vcdp->fullBus(c+288,(vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram[11]),8);
	vcdp->fullBus(c+289,(vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram[12]),8);
	vcdp->fullBus(c+290,(vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram[13]),8);
	vcdp->fullBus(c+291,(vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram[14]),8);
	vcdp->fullBus(c+292,(vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram[15]),8);
	vcdp->fullBus(c+293,(vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram[16]),8);
	vcdp->fullBus(c+294,(vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram[17]),8);
	vcdp->fullBus(c+295,(vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram[18]),8);
	vcdp->fullBus(c+296,(vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram[19]),8);
	vcdp->fullBus(c+297,(vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram[20]),8);
	vcdp->fullBus(c+298,(vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram[21]),8);
	vcdp->fullBus(c+299,(vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram[22]),8);
	vcdp->fullBus(c+300,(vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram[23]),8);
	vcdp->fullBus(c+301,(vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram[24]),8);
	vcdp->fullBus(c+302,(vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram[25]),8);
	vcdp->fullBus(c+303,(vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram[26]),8);
	vcdp->fullBus(c+304,(vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram[27]),8);
	vcdp->fullBus(c+305,(vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram[28]),8);
	vcdp->fullBus(c+306,(vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram[29]),8);
	vcdp->fullBus(c+307,(vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram[30]),8);
	vcdp->fullBus(c+308,(vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram[31]),8);
	vcdp->fullBus(c+309,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__horiz_counter),10);
	vcdp->fullBus(c+310,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__vert_counter),10);
	vcdp->fullBus(c+311,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap_one_address),16);
	vcdp->fullBus(c+312,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap_two_address),16);
	vcdp->fullBus(c+313,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__fetch_phase),4);
	vcdp->fullBus(c+314,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__fetch_phase_next),4);
	vcdp->fullBus(c+315,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pipe_0),8);
	vcdp->fullBus(c+316,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pipe_1),8);
	vcdp->fullBus(c+317,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pipe_2),8);
	vcdp->fullBus(c+318,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pipe_3),8);
	vcdp->fullBus(c+319,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__palette_mem_address),16);
	vcdp->fullBus(c+320,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__palette_fetch_counter),6);
	vcdp->fullBit(c+321,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__palette_fetch_enable));
	vcdp->fullBus(c+322,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap_vertical_index),11);
	vcdp->fullBus(c+323,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bg_palette_ram_separated[0]),8);
	vcdp->fullBus(c+324,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bg_palette_ram_separated[1]),8);
	vcdp->fullBus(c+325,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bg_palette_ram_separated[2]),8);
	vcdp->fullBus(c+326,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bg_palette_ram_separated[3]),8);
	vcdp->fullBit(c+327,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__right));
	vcdp->fullBit(c+328,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__left));
	vcdp->fullBit(c+329,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__top));
	vcdp->fullBit(c+330,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bottom));
	vcdp->fullBus(c+331,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__at_scroll_address),16);
	vcdp->fullBus(c+332,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__nt_scroll_address),16);
	vcdp->fullBus(c+333,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyV_temp),15);
	vcdp->fullBus(c+334,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyV_temp_two),15);
	vcdp->fullBus(c+335,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__fine_y),3);
	vcdp->fullBus(c+336,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__offset),8);
	vcdp->fullBus(c+337,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__nt_base),16);
	vcdp->fullBus(c+338,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__curr_nt),16);
	vcdp->fullBus(c+339,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__next_nt),16);
	vcdp->fullBus(c+340,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__at_base),16);
	vcdp->fullBus(c+341,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__curr_at),16);
	vcdp->fullBus(c+342,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__next_at),16);
	vcdp->fullBus(c+343,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__next_table),8);
	vcdp->fullBus(c+344,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__coarse_x),8);
	vcdp->fullBit(c+345,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pre_render));
	vcdp->fullBit(c+346,(vlTOPp->NES__DOT__CPU0__DOT__DIHOLD_valid));
	vcdp->fullBus(c+347,(0U),2);
	vcdp->fullBus(c+348,(1U),2);
	vcdp->fullBus(c+349,(2U),2);
	vcdp->fullBus(c+350,(3U),2);
	vcdp->fullBus(c+351,(0xcU),4);
	vcdp->fullBus(c+352,(0xdU),4);
	vcdp->fullBus(c+353,(0xeU),4);
	vcdp->fullBus(c+354,(3U),4);
	vcdp->fullBus(c+355,(7U),4);
	vcdp->fullBus(c+356,(0xbU),4);
	vcdp->fullBus(c+357,(0xfU),4);
	vcdp->fullBus(c+358,(0U),6);
	vcdp->fullBus(c+359,(1U),6);
	vcdp->fullBus(c+360,(2U),6);
	vcdp->fullBus(c+361,(3U),6);
	vcdp->fullBus(c+362,(4U),6);
	vcdp->fullBus(c+363,(5U),6);
	vcdp->fullBus(c+364,(6U),6);
	vcdp->fullBus(c+365,(7U),6);
	vcdp->fullBus(c+366,(8U),6);
	vcdp->fullBus(c+367,(9U),6);
	vcdp->fullBus(c+368,(0xaU),6);
	vcdp->fullBus(c+369,(0xbU),6);
	vcdp->fullBus(c+370,(0xcU),6);
	vcdp->fullBus(c+371,(0xdU),6);
	vcdp->fullBus(c+372,(0xeU),6);
	vcdp->fullBus(c+373,(0xfU),6);
	vcdp->fullBus(c+374,(0x10U),6);
	vcdp->fullBus(c+375,(0x11U),6);
	vcdp->fullBus(c+376,(0x12U),6);
	vcdp->fullBus(c+377,(0x13U),6);
	vcdp->fullBus(c+378,(0x14U),6);
	vcdp->fullBus(c+379,(0x15U),6);
	vcdp->fullBus(c+380,(0x16U),6);
	vcdp->fullBus(c+381,(0x17U),6);
	vcdp->fullBus(c+382,(0x18U),6);
	vcdp->fullBus(c+383,(0x19U),6);
	vcdp->fullBus(c+384,(0x1aU),6);
	vcdp->fullBus(c+385,(0x1bU),6);
	vcdp->fullBus(c+386,(0x1cU),6);
	vcdp->fullBus(c+387,(0x1dU),6);
	vcdp->fullBus(c+388,(0x1eU),6);
	vcdp->fullBus(c+389,(0x1fU),6);
	vcdp->fullBus(c+390,(0x20U),6);
	vcdp->fullBus(c+391,(0x21U),6);
	vcdp->fullBus(c+392,(0x22U),6);
	vcdp->fullBus(c+393,(0x23U),6);
	vcdp->fullBus(c+394,(0x24U),6);
	vcdp->fullBus(c+395,(0x25U),6);
	vcdp->fullBus(c+396,(0x26U),6);
	vcdp->fullBus(c+397,(0x27U),6);
	vcdp->fullBus(c+398,(0x28U),6);
	vcdp->fullBus(c+399,(0x29U),6);
	vcdp->fullBus(c+400,(0x2aU),6);
	vcdp->fullBus(c+401,(0x2bU),6);
	vcdp->fullBus(c+402,(0x2cU),6);
	vcdp->fullBus(c+403,(0x2dU),6);
	vcdp->fullBus(c+404,(0x2eU),6);
	vcdp->fullBus(c+405,(0x2fU),6);
	vcdp->fullBus(c+406,(0x30U),6);
	vcdp->fullBus(c+407,(0x31U),6);
	vcdp->fullBus(c+408,(0U),8);
	vcdp->fullBus(c+409,(1U),8);
    }
}
