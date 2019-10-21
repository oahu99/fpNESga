// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNES.h for the primary calling header

#include "VNES.h"
#include "VNES__Syms.h"


//--------------------
// STATIC VARIABLES

// Begin mtask footprint  all: 428 
VL_ST_SIG8(VNES::__Vtable5_NES__DOT__CPU0__DOT__regsel[2048],1,0);
// Begin mtask footprint  all: 432 
VL_ST_SIG8(VNES::__Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[256],7,0);
// Begin mtask footprint  all: 422 
VL_ST_SIG8(VNES::__Vtable2_NES__DOT__CPU0__DOT__PC_inc[1024],0,0);
// Begin mtask footprint  all: 427 
VL_ST_SIG8(VNES::__Vtable6_NES__DOT__CPU0__DOT__alu_op[2048],3,0);
// Begin mtask footprint  all: 418 
VL_ST_SIG8(VNES::__Vtable3_NES__DOT__RWE[128],0,0);
// Begin mtask footprint  all: 419 
VL_ST_SIG8(VNES::__Vtable4_NES__DOT__CPU0__DOT__write_register[256],0,0);
// Begin mtask footprint  all: 254 
VL_ST_SIG8(VNES::__Vtable7_NES__DOT__CPU0__DOT__cond_true[128],0,0);

//--------------------

VL_CTOR_IMP(VNES), __Vm_mt_162(3), __Vm_mt_164(2), 
  __Vm_mt_253(2), __Vm_mt_149(2), __Vm_mt_194(4), __Vm_mt_198(1), 
  __Vm_mt_224(1), __Vm_mt_254(5), __Vm_mt_273(2), __Vm_mt_274(1), 
  __Vm_mt_275(1), __Vm_mt_277(1), __Vm_mt_278(4), __Vm_mt_279(1), 
  __Vm_mt_280(1), __Vm_mt_281(2), __Vm_mt_283(1), __Vm_mt_284(1), 
  __Vm_mt_285(1), __Vm_mt_287(1), __Vm_mt_288(1), __Vm_mt_290(3), 
  __Vm_mt_291(1), __Vm_mt_295(1), __Vm_mt_296(1), __Vm_mt_300(1), 
  __Vm_mt_301(1), __Vm_mt_302(1), __Vm_mt_305(1), __Vm_mt_306(1), 
  __Vm_mt_330(1), __Vm_mt_331(1), __Vm_mt_332(2), __Vm_mt_333(4), 
  __Vm_mt_334(1), __Vm_mt_335(7), __Vm_mt_336(2), __Vm_mt_337(1), 
  __Vm_mt_338(2), __Vm_mt_339(1), __Vm_mt_340(1), __Vm_mt_342(1), 
  __Vm_mt_344(2), __Vm_mt_345(1), __Vm_mt_347(1), __Vm_mt_348(1), 
  __Vm_mt_349(8), __Vm_mt_352(1), __Vm_mt_358(1), __Vm_mt_359(1), 
  __Vm_mt_361(1), __Vm_mt_362(1), __Vm_mt_363(1), __Vm_mt_379(1), 
  __Vm_mt_380(1), __Vm_mt_381(6), __Vm_mt_383(1), __Vm_mt_384(1), 
  __Vm_mt_385(1), __Vm_mt_386(1), __Vm_mt_387(5), __Vm_mt_388(3), 
  __Vm_mt_389(6), __Vm_mt_391(1), __Vm_mt_392(6), __Vm_mt_394(1), 
  __Vm_mt_407(1), __Vm_mt_400(1), __Vm_mt_404(2), __Vm_mt_408(10), 
  __Vm_mt_410(37), __Vm_mt_411(27), __Vm_mt_412(3), 
  __Vm_mt_413(1), __Vm_mt_415(1), __Vm_mt_417(2), __Vm_mt_418(9), 
  __Vm_mt_419(2), __Vm_mt_420(2), __Vm_mt_421(2), __Vm_mt_422(4), 
  __Vm_mt_424(2), __Vm_mt_425(1), __Vm_mt_426(2), __Vm_mt_427(2), 
  __Vm_mt_429(1), __Vm_mt_430(2), __Vm_mt_431(2), __Vm_mt_433(1), 
  __Vm_mt_434(1), __Vm_mt_435(1), __Vm_mt_436(4), __Vm_mt_437(8), 
  __Vm_mt_438(1), __Vm_mt_439(1), __Vm_mt_440(8), __Vm_mt_441(4), 
  __Vm_mt_444(1), __Vm_mt_final(32), __Vm_threadPoolp(NULL), 
  __Vm_even_cycle(false) {
    VNES__Syms* __restrict vlSymsp = __VlSymsp = new VNES__Syms(this, name());
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
    __Vm_threadPoolp = new VlThreadPool(31, 0);
}

void VNES::__Vconfigure(VNES__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VNES::~VNES() {
    delete __Vm_threadPoolp; __Vm_threadPoolp = NULL;
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VNES::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VNES::eval\n"); );
    VNES__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void VNES::_eval_initial_loop(VNES__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

void VNES::_initial__TOP__1(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_initial__TOP__1\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp1,255,0,8);
    VL_SIGW(__Vtemp2,319,0,10);
    // Body
    // INITIAL at cpu.v:53
    vlTOPp->NES__DOT__CPU0__DOT__Z = 0U;
    // INITIAL at cpu.v:56
    vlTOPp->NES__DOT__CPU0__DOT__V = 0U;
    // INITIAL at cpu.v:57
    vlTOPp->NES__DOT__CPU0__DOT__N = 0U;
    // INITIAL at cpu.v:54
    vlTOPp->NES__DOT__CPU0__DOT__I = 0U;
    // INITIAL at cpu.v:52
    vlTOPp->NES__DOT__CPU0__DOT__C = 0U;
    // INITIAL at test_memory_interface.sv:11
    __Vtemp1[0U] = 0x2e747874U;
    __Vtemp1[1U] = 0x74657374U;
    __Vtemp1[2U] = 0x5367612fU;
    __Vtemp1[3U] = 0x66704e45U;
    __Vtemp1[4U] = 0x6f64652fU;
    __Vtemp1[5U] = 0x686e2f43U;
    __Vtemp1[6U] = 0x652f6a6fU;
    __Vtemp1[7U] = 0x2f686f6dU;
    VL_READMEM_W(true,8,65536, 0,8, __Vtemp1, vlTOPp->NES__DOT__MEM0__DOT__memory_array
		 ,0,~0);
    // INITIAL at cpu.v:1211
    vlTOPp->NES__DOT__CPU0__DOT__NMI_1 = 0U;
    // INITIAL at cpu.v:74
    vlTOPp->NES__DOT__CPU0__DOT__NMI_edge = 0U;
    // INITIAL at cpu.v:55
    vlTOPp->NES__DOT__CPU0__DOT__D = 0U;
    // INITIAL at test_ppu_memory.sv:12
    __Vtemp2[0U] = 0x2e747874U;
    __Vtemp2[1U] = 0x5f636872U;
    __Vtemp2[2U] = 0x6172696fU;
    __Vtemp2[3U] = 0x67612f6dU;
    __Vtemp2[4U] = 0x704e4553U;
    __Vtemp2[5U] = 0x64652f66U;
    __Vtemp2[6U] = 0x6e2f436fU;
    __Vtemp2[7U] = 0x2f6a6f68U;
    __Vtemp2[8U] = 0x686f6d65U;
    __Vtemp2[9U] = 0x2fU;
    VL_READMEM_W(true,8,16384, 0,10, __Vtemp2, vlTOPp->NES__DOT__PPU0__DOT__MEM1__DOT__ppu_mem_array
		 ,0,~0);
}

void VNES::_settle__TOP__2(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_settle__TOP__2\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at PPU_BG.sv:272
    vlTOPp->NES__DOT__PPU0__DOT__ppu_read = 0U;
    vlTOPp->NES__DOT__PPU0__DOT__palette_ram[0x1fU] 
	= vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram
	[0x1fU];
    vlTOPp->NES__DOT__PPU0__DOT__palette_ram[0x1eU] 
	= vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram
	[0x1eU];
    vlTOPp->NES__DOT__PPU0__DOT__palette_ram[0x1dU] 
	= vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram
	[0x1dU];
    vlTOPp->NES__DOT__PPU0__DOT__palette_ram[0x1cU] 
	= vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram
	[0x1cU];
    vlTOPp->NES__DOT__PPU0__DOT__palette_ram[0x1bU] 
	= vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram
	[0x1bU];
    vlTOPp->NES__DOT__PPU0__DOT__palette_ram[0x1aU] 
	= vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram
	[0x1aU];
    vlTOPp->NES__DOT__PPU0__DOT__palette_ram[0x19U] 
	= vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram
	[0x19U];
    vlTOPp->NES__DOT__PPU0__DOT__palette_ram[0x18U] 
	= vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram
	[0x18U];
    vlTOPp->NES__DOT__PPU0__DOT__palette_ram[0x17U] 
	= vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram
	[0x17U];
    vlTOPp->NES__DOT__PPU0__DOT__palette_ram[0x16U] 
	= vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram
	[0x16U];
    vlTOPp->NES__DOT__PPU0__DOT__palette_ram[0x15U] 
	= vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram
	[0x15U];
    vlTOPp->NES__DOT__PPU0__DOT__palette_ram[0x14U] 
	= vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram
	[0x14U];
    vlTOPp->NES__DOT__PPU0__DOT__palette_ram[0x13U] 
	= vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram
	[0x13U];
    vlTOPp->NES__DOT__PPU0__DOT__palette_ram[0x12U] 
	= vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram
	[0x12U];
    vlTOPp->NES__DOT__PPU0__DOT__palette_ram[0x11U] 
	= vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram
	[0x11U];
    vlTOPp->NES__DOT__PPU0__DOT__palette_ram[0x10U] 
	= vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram
	[0x10U];
    vlTOPp->NES__DOT__PPU0__DOT__palette_ram[0xfU] 
	= vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram
	[0xfU];
    vlTOPp->NES__DOT__PPU0__DOT__palette_ram[0xeU] 
	= vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram
	[0xeU];
    vlTOPp->NES__DOT__PPU0__DOT__palette_ram[0xdU] 
	= vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram
	[0xdU];
    vlTOPp->NES__DOT__PPU0__DOT__palette_ram[0xcU] 
	= vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram
	[0xcU];
    vlTOPp->NES__DOT__PPU0__DOT__palette_ram[0xbU] 
	= vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram
	[0xbU];
    vlTOPp->NES__DOT__PPU0__DOT__palette_ram[0xaU] 
	= vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram
	[0xaU];
    vlTOPp->NES__DOT__PPU0__DOT__palette_ram[9U] = 
	vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram
	[9U];
    vlTOPp->NES__DOT__PPU0__DOT__palette_ram[8U] = 
	vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram
	[8U];
    vlTOPp->NES__DOT__PPU0__DOT__palette_ram[7U] = 
	vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram
	[7U];
    vlTOPp->NES__DOT__PPU0__DOT__palette_ram[6U] = 
	vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram
	[6U];
    vlTOPp->NES__DOT__PPU0__DOT__palette_ram[5U] = 
	vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram
	[5U];
    vlTOPp->NES__DOT__PPU0__DOT__palette_ram[4U] = 
	vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram
	[4U];
    vlTOPp->NES__DOT__PPU0__DOT__palette_ram[3U] = 
	vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram
	[3U];
    vlTOPp->NES__DOT__PPU0__DOT__palette_ram[2U] = 
	vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram
	[2U];
    vlTOPp->NES__DOT__PPU0__DOT__palette_ram[1U] = 
	vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram
	[1U];
    vlTOPp->NES__DOT__PPU0__DOT__palette_ram[0U] = 
	vlTOPp->NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram
	[0U];
    vlTOPp->NES__DOT____Vcellinp__CPU0__reset = (1U 
						 & (~ (IData)(vlTOPp->reset_al)));
    // ALWAYS at PPU.sv:103
    vlTOPp->RED = ((IData)(vlTOPp->NES__DOT__PPU0__DOT__priority_bit)
		    ? (IData)(vlTOPp->NES__DOT__PPU0__DOT__RED_sp)
		    : (IData)(vlTOPp->NES__DOT__PPU0__DOT__RED_bg));
    // ALWAYS at PPU.sv:103
    vlTOPp->GREEN = ((IData)(vlTOPp->NES__DOT__PPU0__DOT__priority_bit)
		      ? (IData)(vlTOPp->NES__DOT__PPU0__DOT__GREEN_sp)
		      : (IData)(vlTOPp->NES__DOT__PPU0__DOT__GREEN_bg));
    // ALWAYS at PPU.sv:103
    vlTOPp->BLUE = ((IData)(vlTOPp->NES__DOT__PPU0__DOT__priority_bit)
		     ? (IData)(vlTOPp->NES__DOT__PPU0__DOT__BLUE_sp)
		     : (IData)(vlTOPp->NES__DOT__PPU0__DOT__BLUE_bg));
    // ALWAYS at cpu.v:1198
    vlTOPp->__Vtableidx7 = (((IData)(vlTOPp->NES__DOT__CPU0__DOT__N) 
			     << 6U) | (((IData)(vlTOPp->NES__DOT__CPU0__DOT__V) 
					<< 5U) | (((IData)(vlTOPp->NES__DOT__CPU0__DOT__C) 
						   << 4U) 
						  | (((IData)(vlTOPp->NES__DOT__CPU0__DOT__Z) 
						      << 3U) 
						     | (IData)(vlTOPp->NES__DOT__CPU0__DOT__cond_code)))));
    vlTOPp->NES__DOT__CPU0__DOT__cond_true = vlTOPp->__Vtable7_NES__DOT__CPU0__DOT__cond_true
	[vlTOPp->__Vtableidx7];
    vlTOPp->VGA_VS = ((0x1eaU <= (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawY)) 
		      & (0x1ecU > (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawY)));
    // ALWAYS at PPU_BG.sv:105
    vlTOPp->nt_bit = (1U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyT) 
			    >> 0xaU));
    vlTOPp->NES__DOT__CPU0__DOT__P = (0x30U | (((IData)(vlTOPp->NES__DOT__CPU0__DOT__N) 
						<< 7U) 
					       | (((IData)(vlTOPp->NES__DOT__CPU0__DOT__V) 
						   << 6U) 
						  | (((IData)(vlTOPp->NES__DOT__CPU0__DOT__D) 
						      << 3U) 
						     | (((IData)(vlTOPp->NES__DOT__CPU0__DOT__I) 
							 << 2U) 
							| (((IData)(vlTOPp->NES__DOT__CPU0__DOT__Z) 
							    << 1U) 
							   | (IData)(vlTOPp->NES__DOT__CPU0__DOT__C)))))));
    vlTOPp->NES__DOT__data_out = ((IData)(vlTOPp->NES__DOT__ppu_rwe)
				   ? (IData)(vlTOPp->NES__DOT__data_out_ppu)
				   : (IData)(vlTOPp->NES__DOT__data_out_mem));
    vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__reset = vlTOPp->reset_al;
    vlTOPp->NES__DOT__Ready = (1U & ((IData)(vlTOPp->NES__DOT__OAM_en)
				      ? 0U : (IData)(vlTOPp->ready_in)));
    // ALWAYS at i2c_master_top.v:106
    vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__next_state 
	= (0x1fU & (((((((((0U == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state)) 
			   | (4U == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))) 
			  | (5U == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))) 
			 | (1U == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))) 
			| (0xeU == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))) 
		       | (7U == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))) 
		      | (8U == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))) 
		     | (2U == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state)))
		     ? ((0U == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))
			 ? 4U : ((4U == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))
				  ? 5U : ((5U == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))
					   ? 1U : (
						   (1U 
						    == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))
						    ? 
						   ((0U 
						     == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__counter))
						     ? 2U
						     : 0xeU)
						    : 
						   ((0xeU 
						     == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))
						     ? 7U
						     : 
						    ((7U 
						      == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))
						      ? 8U
						      : 
						     ((8U 
						       == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))
						       ? 1U
						       : 0xbU)))))))
		     : ((0xbU == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))
			 ? 0xcU : ((0xcU == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))
				    ? ((IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__ack)
				        ? 9U : 3U) : 
				   ((9U == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))
				     ? 0xaU : ((0xaU 
						== (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))
					        ? (
						   (0U 
						    == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__byte_num_local))
						    ? 6U
						    : 1U)
					        : (
						   (6U 
						    == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))
						    ? 0xdU
						    : 
						   ((0xdU 
						     == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))
						     ? 0U
						     : 
						    ((3U 
						      == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))
						      ? 3U
						      : 0U)))))))));
    vlTOPp->VGA_HS = ((0x290U <= (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)) 
		      & (0x2f0U > (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)));
    // ALWAYS at PPU_BG.sv:272
    vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__mem_fetch 
	= ((0U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))) 
	   | (((1U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))) 
	       | (2U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U)))) 
	      | (((3U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))) 
		  | (4U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U)))) 
		 | (((5U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))) 
		     | (6U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U)))) 
		    | ((7U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))) 
		       | (8U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))))))));
    // ALWAYS at PPU_BG.sv:272
    vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__ALE = ((0U 
						   != 
						   VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))) 
						  & (((1U 
						       == 
						       VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))) 
						      | (2U 
							 == 
							 VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U)))) 
						     | (((3U 
							  == 
							  VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))) 
							 | (4U 
							    == 
							    VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U)))) 
							| (((5U 
							     == 
							     VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))) 
							    | (6U 
							       == 
							       VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U)))) 
							   | ((7U 
							       == 
							       VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))) 
							      | (8U 
								 == 
								 VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))))))));
    // ALWAYS at hdmi_driver.v:121
    vlTOPp->Draw_enable = ((0x280U >= (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)) 
			   & (0x1e0U >= (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawY)));
    // ALWAYS at cpu.v:446
    vlTOPp->__Vtableidx3 = (((IData)(vlTOPp->NES__DOT__CPU0__DOT__store) 
			     << 6U) | (IData)(vlTOPp->NES__DOT__CPU0__DOT__state));
    vlTOPp->NES__DOT__RWE = vlTOPp->__Vtable3_NES__DOT__RWE
	[vlTOPp->__Vtableidx3];
    // ALWAYS at cpu.v:474
    vlTOPp->__Vtableidx4 = (((IData)(vlTOPp->NES__DOT__CPU0__DOT__plp) 
			     << 7U) | (((IData)(vlTOPp->NES__DOT__CPU0__DOT__load_reg) 
					<< 6U) | (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)));
    vlTOPp->NES__DOT__CPU0__DOT__write_register = vlTOPp->__Vtable4_NES__DOT__CPU0__DOT__write_register
	[vlTOPp->__Vtableidx4];
    // ALWAYS at PPU_BG.sv:272
    vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap[7U] 
	= ((2U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_1_curr) 
		  << 1U)) | (1U & (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_0_curr)));
    vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap[6U] 
	= ((2U & (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_1_curr)) 
	   | (1U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_0_curr) 
		    >> 1U)));
    vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap[5U] 
	= ((2U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_1_curr) 
		  >> 1U)) | (1U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_0_curr) 
				   >> 2U)));
    vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap[4U] 
	= ((2U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_1_curr) 
		  >> 2U)) | (1U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_0_curr) 
				   >> 3U)));
    vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap[3U] 
	= ((2U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_1_curr) 
		  >> 3U)) | (1U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_0_curr) 
				   >> 4U)));
    vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap[2U] 
	= ((2U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_1_curr) 
		  >> 4U)) | (1U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_0_curr) 
				   >> 5U)));
    vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap[1U] 
	= ((2U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_1_curr) 
		  >> 5U)) | (1U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_0_curr) 
				   >> 6U)));
    vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap[0U] 
	= ((2U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_1_curr) 
		  >> 6U)) | (1U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_0_curr) 
				   >> 7U)));
    vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__current_px 
	= vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap
	[vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap_index];
    vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap_index 
	= (7U & VL_MODDIV_III(32, ((IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX) 
				   - (IData)(1U)), (IData)(8U)));
    // ALWAYS at PPU_BG.sv:272
    vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__nt_address 
	= (0x2000U | (0xfffU & (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyV)));
    vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__at_address 
	= (0x23c0U | (((0xc00U & (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyV)) 
		       | (0x38U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyV) 
				   >> 4U))) | (7U & 
					       ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyV) 
						>> 2U))));
    vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__ppu_r_addr_q 
	= (0xffffU & ((0U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U)))
		       ? 0U : (((1U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))) 
				| (2U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))))
			        ? (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__nt_address)
			        : (((3U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))) 
				    | (4U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))))
				    ? (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__at_address)
				    : (((5U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))) 
					| (6U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))))
				        ? (0x1000U 
					   | (((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__nametable_byte_next) 
					       << 4U) 
					      | (7U 
						 & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyV) 
						    >> 0xcU))))
				        : (((7U == 
					     VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))) 
					    | (8U == 
					       VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))))
					    ? (0x1000U 
					       | ((IData)(8U) 
						  + 
						  (((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__nametable_byte_next) 
						    << 4U) 
						   + 
						   (7U 
						    & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyV) 
						       >> 0xcU)))))
					    : 0U))))));
    // ALWAYS at cpu.v:324
    vlTOPp->__Vtableidx2 = (((IData)(vlTOPp->NES__DOT__CPU0__DOT__backwards) 
			     << 9U) | (((IData)(vlTOPp->NES__DOT__CPU0__DOT__CO) 
					<< 8U) | (((IData)(vlTOPp->NES__DOT__CPU0__DOT__NMI_edge) 
						   << 7U) 
						  | (((IData)(vlTOPp->NES__DOT__CPU0__DOT__I) 
						      << 6U) 
						     | (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)))));
    vlTOPp->NES__DOT__CPU0__DOT__PC_inc = vlTOPp->__Vtable2_NES__DOT__CPU0__DOT__PC_inc
	[vlTOPp->__Vtableidx2];
    vlTOPp->NES__DOT__CPU0__DOT____Vcellinp__ALU__BCD 
	= ((IData)(vlTOPp->NES__DOT__CPU0__DOT__adc_bcd) 
	   & (0xdU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)));
    // ALWAYS at cpu.v:615
    vlTOPp->NES__DOT__CPU0__DOT__alu_shift_right = 
	((((0xdU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)) 
	   | (0x24U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
	  | (0x23U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
	 & (IData)(vlTOPp->NES__DOT__CPU0__DOT__shift_right));
    // ALWAYS at cpu.v:708
    vlTOPp->NES__DOT__CPU0__DOT__CI = (1U & ((0x20U 
					      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
					      ? ((~ 
						  ((IData)(vlTOPp->NES__DOT__CPU0__DOT__state) 
						   >> 4U)) 
						 & ((8U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 
						    ((~ 
						      ((IData)(vlTOPp->NES__DOT__CPU0__DOT__state) 
						       >> 2U)) 
						     & ((IData)(vlTOPp->NES__DOT__CPU0__DOT__state) 
							>> 1U))
						     : 
						    ((4U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? 
						     (((IData)(vlTOPp->NES__DOT__CPU0__DOT__state) 
						       >> 1U) 
						      | ((IData)(vlTOPp->NES__DOT__CPU0__DOT__state) 
							 | ((IData)(vlTOPp->NES__DOT__CPU0__DOT__rotate)
							     ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__C)
							     : 
							    ((IData)(vlTOPp->NES__DOT__CPU0__DOT__shift)
							      ? 0U
							      : (IData)(vlTOPp->NES__DOT__CPU0__DOT__inc)))))
						      : 
						     (((IData)(vlTOPp->NES__DOT__CPU0__DOT__state) 
						       >> 1U) 
						      & ((IData)(vlTOPp->NES__DOT__CPU0__DOT__state) 
							 & ((IData)(vlTOPp->NES__DOT__CPU0__DOT__rotate)
							     ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__C)
							     : 
							    ((IData)(vlTOPp->NES__DOT__CPU0__DOT__shift)
							      ? 0U
							      : (IData)(vlTOPp->NES__DOT__CPU0__DOT__inc))))))))
					      : ((0x10U 
						  & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						  ? 
						 ((8U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  (((IData)(vlTOPp->NES__DOT__CPU0__DOT__state) 
						    >> 2U) 
						   & (((IData)(vlTOPp->NES__DOT__CPU0__DOT__state) 
						       >> 1U) 
						      & (~ (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))))
						   : 
						  ((4U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   ((~ 
						     ((IData)(vlTOPp->NES__DOT__CPU0__DOT__state) 
						      >> 1U)) 
						    & ((~ (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)) 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__CO)))
						    : 
						   (((IData)(vlTOPp->NES__DOT__CPU0__DOT__state) 
						     >> 1U) 
						    & (~ (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)))))
						  : 
						 ((8U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  (((IData)(vlTOPp->NES__DOT__CPU0__DOT__state) 
						    >> 2U) 
						   & ((2U 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						       ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)
						       : 
						      ((IData)(vlTOPp->NES__DOT__CPU0__DOT__state) 
						       & ((IData)(vlTOPp->NES__DOT__CPU0__DOT__rotate)
							   ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__C)
							   : 
							  ((IData)(vlTOPp->NES__DOT__CPU0__DOT__compare)
							    ? 1U
							    : 
							   (((IData)(vlTOPp->NES__DOT__CPU0__DOT__shift) 
							     | (IData)(vlTOPp->NES__DOT__CPU0__DOT__load_only))
							     ? 0U
							     : (IData)(vlTOPp->NES__DOT__CPU0__DOT__C)))))))
						   : 
						  ((4U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   (((IData)(vlTOPp->NES__DOT__CPU0__DOT__state) 
						     >> 1U) 
						    & ((~ (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)) 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__CO)))
						    : 
						   (((IData)(vlTOPp->NES__DOT__CPU0__DOT__state) 
						     >> 1U) 
						    & ((IData)(vlTOPp->NES__DOT__CPU0__DOT__state) 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__CO))))))));
    // ALWAYS at cpu.v:589
    vlTOPp->__Vtableidx6 = (((IData)(vlTOPp->NES__DOT__CPU0__DOT__backwards) 
			     << 0xaU) | (((IData)(vlTOPp->NES__DOT__CPU0__DOT__op) 
					  << 6U) | (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)));
    vlTOPp->NES__DOT__CPU0__DOT__alu_op = vlTOPp->__Vtable6_NES__DOT__CPU0__DOT__alu_op
	[vlTOPp->__Vtableidx6];
    // ALWAYS at cpu.v:541
    vlTOPp->__Vtableidx5 = (((IData)(vlTOPp->NES__DOT__CPU0__DOT__dst_reg) 
			     << 9U) | (((IData)(vlTOPp->NES__DOT__CPU0__DOT__index_y) 
					<< 8U) | (((IData)(vlTOPp->NES__DOT__CPU0__DOT__src_reg) 
						   << 6U) 
						  | (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))));
    vlTOPp->NES__DOT__CPU0__DOT__regsel = vlTOPp->__Vtable5_NES__DOT__CPU0__DOT__regsel
	[vlTOPp->__Vtableidx5];
    vlTOPp->NES__DOT__CPU0__DOT__DIMUX = ((IData)(vlTOPp->NES__DOT__Ready)
					   ? (IData)(vlTOPp->NES__DOT__data_out)
					   : (IData)(vlTOPp->NES__DOT__CPU0__DOT__DIHOLD));
    vlTOPp->NES__DOT__CPU0__DOT__IR = ((1U & ((~ (IData)(vlTOPp->NES__DOT__CPU0__DOT__I)) 
					      | (IData)(vlTOPp->NES__DOT__CPU0__DOT__NMI_edge)))
				        ? 0U : ((IData)(vlTOPp->NES__DOT__CPU0__DOT__IRHOLD_valid)
						 ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__IRHOLD)
						 : (IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX)));
    // ALWAYS at cpu.v:297
    vlTOPp->NES__DOT__CPU0__DOT__PC_temp = ((0x20U 
					     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
					     ? ((0x10U 
						 & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						 ? (IData)(vlTOPp->NES__DOT__pc)
						 : 
						((8U 
						  & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						  ? 
						 ((2U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? (IData)(vlTOPp->NES__DOT__pc)
						   : 
						  ((1U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   (((IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX) 
						     << 8U) 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD))
						    : (IData)(vlTOPp->NES__DOT__pc)))
						  : (IData)(vlTOPp->NES__DOT__pc)))
					     : ((0x10U 
						 & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						 ? 
						((8U 
						  & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						  ? 
						 ((2U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? (IData)(vlTOPp->NES__DOT__pc)
						   : 
						  ((1U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   (((IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX) 
						     << 8U) 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD))
						    : (IData)(vlTOPp->NES__DOT__pc)))
						  : 
						 ((4U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  ((2U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   ((1U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 
						    (((IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX) 
						      << 8U) 
						     | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD))
						     : (IData)(vlTOPp->NES__DOT__pc))
						    : (IData)(vlTOPp->NES__DOT__pc))
						   : (IData)(vlTOPp->NES__DOT__pc)))
						 : 
						((8U 
						  & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						  ? 
						 ((4U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  ((2U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? (IData)(vlTOPp->NES__DOT__pc)
						    : 
						   ((1U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? (IData)(vlTOPp->NES__DOT__pc)
						     : 
						    ((1U 
						      & ((~ (IData)(vlTOPp->NES__DOT__CPU0__DOT__I)) 
							 | (IData)(vlTOPp->NES__DOT__CPU0__DOT__NMI_edge)))
						      ? 
						     (((IData)(vlTOPp->NES__DOT__CPU0__DOT__ABH) 
						       << 8U) 
						      | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ABL))
						      : (IData)(vlTOPp->NES__DOT__pc))))
						   : 
						  ((2U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   ((1U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? (IData)(vlTOPp->NES__DOT__pc)
						     : 
						    ((IData)(vlTOPp->NES__DOT__CPU0__DOT__res)
						      ? 0xfffcU
						      : 
						     ((IData)(vlTOPp->NES__DOT__CPU0__DOT__NMI_edge)
						       ? 0xfffaU
						       : 0xfffeU)))
						    : (IData)(vlTOPp->NES__DOT__pc)))
						  : 
						 ((4U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  ((2U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   ((1U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 
						    (((IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD) 
						      << 8U) 
						     | (0xffU 
							& (IData)(vlTOPp->NES__DOT__pc)))
						     : 
						    (((IData)(vlTOPp->NES__DOT__CPU0__DOT__ABH) 
						      << 8U) 
						     | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD)))
						    : (IData)(vlTOPp->NES__DOT__pc))
						   : (IData)(vlTOPp->NES__DOT__pc)))));
    // ALWAYS at reg_lut.v:7
    vlTOPp->__Vtableidx1 = vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__byte_lut;
    vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__data = 
	vlTOPp->__Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data
	[vlTOPp->__Vtableidx1];
    // ALWAYS at cpu.v:675
    vlTOPp->NES__DOT__CPU0__DOT__BI = (0xffU & ((0x20U 
						 & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						 ? 
						((0x10U 
						  & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						  ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX)
						  : 
						 ((8U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  ((4U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX)
						    : 
						   ((2U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 0U
						     : (IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX)))
						   : 
						  ((4U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 0U
						    : 
						   ((2U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 0U
						     : 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? 0U
						      : (IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX))))))
						 : 
						((0x10U 
						  & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						  ? 
						 ((8U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  ((4U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   ((1U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX)
						     : 0U)
						    : 
						   ((2U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 0U
						     : (IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX)))
						   : (IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX))
						  : 
						 ((8U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  ((4U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   ((2U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? 0U
						      : (IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX))
						     : 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX)
						      : 0U))
						    : 
						   ((2U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX)
						      : 0U)
						     : 0U))
						   : 
						  ((4U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   ((2U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX)
						      : 0U)
						     : 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? (IData)(vlTOPp->NES__DOT__pc)
						      : (IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX)))
						    : 
						   ((2U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX)
						     : 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? 0U
						      : (IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX))))))));
    vlTOPp->NES__DOT__CPU0__DOT__regfile = vlTOPp->NES__DOT__CPU0__DOT__AXYS
	[vlTOPp->NES__DOT__CPU0__DOT__regsel];
    // ALWAYS at i2c_master_top.v:106
    vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__message 
	= ((IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__address)
	    ? 0x72U : (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__data));
    // ALWAYS at cpu.v:425
    vlTOPp->NES__DOT__data_in_cpu = (0xffU & ((0x20U 
					       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
					       ? ((0x10U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile)
						   : 
						  ((8U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   ((4U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 
						    ((2U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? 
						     ((1U 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						       ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile)
						       : (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD))
						      : (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile))
						     : (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile))
						    : 
						   ((4U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile)
						     : 
						    ((2U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? 
						     ((1U 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						       ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile)
						       : 
						      ((IData)(vlTOPp->NES__DOT__CPU0__DOT__php)
						        ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__P)
						        : (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD)))
						      : (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile)))))
					       : ((0x10U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  ((8U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   ((4U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile)
						     : 
						    ((2U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? 
						     ((1U 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						       ? (IData)(vlTOPp->NES__DOT__pc)
						       : 
						      ((IData)(vlTOPp->NES__DOT__pc) 
						       >> 8U))
						      : (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile)))
						    : (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile))
						   : 
						  ((8U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   ((4U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile)
						     : 
						    ((2U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? 
						     ((1U 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						       ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile)
						       : 
						      (0xefU 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__P)))
						      : 
						     ((1U 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						       ? (IData)(vlTOPp->NES__DOT__pc)
						       : 
						      ((IData)(vlTOPp->NES__DOT__pc) 
						       >> 8U))))
						    : (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile)))));
    // ALWAYS at cpu.v:362
    vlTOPp->NES__DOT__address_cpu = ((0x20U & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
				      ? ((0x10U & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
					  ? ((8U & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
					      ? (IData)(vlTOPp->NES__DOT__pc)
					      : ((4U 
						  & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						  ? (IData)(vlTOPp->NES__DOT__pc)
						  : 
						 ((2U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? (IData)(vlTOPp->NES__DOT__pc)
						   : 
						  ((1U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD)
						    : (IData)(vlTOPp->NES__DOT__pc)))))
					  : ((8U & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
					      ? ((4U 
						  & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						  ? 
						 ((2U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  ((1U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX)
						    : 
						   (((IData)(vlTOPp->NES__DOT__CPU0__DOT__ABH) 
						     << 8U) 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ABL)))
						   : 
						  ((1U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? (IData)(vlTOPp->NES__DOT__pc)
						    : 
						   (0x100U 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD))))
						  : 
						 ((2U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  ((1U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   (0x100U 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD))
						    : 
						   (0x100U 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile)))
						   : 
						  ((1U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   (((IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX) 
						     << 8U) 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD))
						    : 
						   (0x100U 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD)))))
					      : ((4U 
						  & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						  ? 
						 ((2U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  (0x100U 
						   | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD))
						   : 
						  ((1U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   (0x100U 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile))
						    : 
						   (((IData)(vlTOPp->NES__DOT__CPU0__DOT__ABH) 
						     << 8U) 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ABL))))
						  : 
						 ((2U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  ((1U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   (((IData)(vlTOPp->NES__DOT__CPU0__DOT__ABH) 
						     << 8U) 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ABL))
						    : 
						   (0x100U 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile)))
						   : (IData)(vlTOPp->NES__DOT__pc)))))
				      : ((0x10U & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
					  ? ((8U & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
					      ? ((4U 
						  & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						  ? 
						 ((2U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  ((1U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   (0x100U 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD))
						    : (IData)(vlTOPp->NES__DOT__pc))
						   : (IData)(vlTOPp->NES__DOT__pc))
						  : 
						 ((2U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  ((1U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   (0x100U 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD))
						    : 
						   (0x100U 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile)))
						   : 
						  ((1U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   (((IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX) 
						     << 8U) 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD))
						    : (IData)(vlTOPp->NES__DOT__pc))))
					      : ((4U 
						  & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						  ? 
						 ((2U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  ((1U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   (((IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX) 
						     << 8U) 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD))
						    : (IData)(vlTOPp->NES__DOT__pc))
						   : 
						  ((1U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   (((IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD) 
						     << 8U) 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ABL))
						    : 
						   (((IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX) 
						     << 8U) 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD))))
						  : 
						 ((2U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  ((1U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD)
						    : (IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX))
						   : 
						  ((1U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   (((IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX) 
						     << 8U) 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD))
						    : (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD)))))
					  : ((8U & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
					      ? ((4U 
						  & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						  ? 
						 ((2U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  ((1U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD)
						    : (IData)(vlTOPp->NES__DOT__pc))
						   : (IData)(vlTOPp->NES__DOT__pc))
						  : 
						 ((2U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  ((1U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? (IData)(vlTOPp->NES__DOT__pc)
						    : 
						   (0x100U 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD)))
						   : 
						  ((1U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   (0x100U 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD))
						    : 
						   (0x100U 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile)))))
					      : ((4U 
						  & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						  ? 
						 ((2U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  ((1U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   (((IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD) 
						     << 8U) 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ABL))
						    : 
						   (((IData)(vlTOPp->NES__DOT__CPU0__DOT__ABH) 
						     << 8U) 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD)))
						   : 
						  ((1U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? (IData)(vlTOPp->NES__DOT__pc)
						    : 
						   (((IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD) 
						     << 8U) 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ABL))))
						  : 
						 ((1U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  (((IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX) 
						    << 8U) 
						   | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD))
						   : (IData)(vlTOPp->NES__DOT__pc))))));
    // ALWAYS at cpu.v:633
    vlTOPp->NES__DOT__CPU0__DOT__AI = (0xffU & ((0x20U 
						 & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						 ? 
						((0x10U 
						  & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						  ? 
						 ((8U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 0U
						   : 
						  ((4U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 0U
						    : 
						   ((2U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 0U
						     : 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? 0U
						      : (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile)))))
						  : 
						 ((8U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  ((4U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 0U
						    : 
						   ((2U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD)
						      : (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile))
						     : 0U))
						   : 
						  ((4U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   ((2U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD)
						     : (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile))
						    : 
						   ((2U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX)
						      : (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile))
						     : 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile)
						      : 0U)))))
						 : 
						((0x10U 
						  & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						  ? 
						 ((8U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  ((4U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   ((1U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 0U
						     : (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile))
						    : 
						   ((2U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD)
						      : (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile))
						     : 0U))
						   : 
						  ((4U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 0U
						    : 
						   ((2U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile)
						      : 0U)
						     : 0U)))
						  : 
						 ((8U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  ((4U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   ((2U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD)
						      : (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile))
						     : 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? 
						     ((IData)(vlTOPp->NES__DOT__CPU0__DOT__load_only)
						       ? 0U
						       : (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile))
						      : 0U))
						    : 
						   ((2U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? 0U
						      : (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD))
						     : 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD)
						      : (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile))))
						   : 
						  ((4U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   ((2U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? 0U
						      : (IData)(vlTOPp->NES__DOT__CPU0__DOT__ABH))
						     : 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX)
						      : 0U))
						    : 
						   ((2U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? 0U
						      : (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile))
						     : 0U))))));
    vlTOPp->NES__DOT__address = ((IData)(vlTOPp->NES__DOT__OAM_en)
				  ? (IData)(vlTOPp->NES__DOT__oam_fetch_address_q)
				  : (IData)(vlTOPp->NES__DOT__address_cpu));
    vlTOPp->NES__DOT__data_in = ((IData)(vlTOPp->NES__DOT__OAM_en)
				  ? (IData)(vlTOPp->NES__DOT__data_out_mem)
				  : (IData)(vlTOPp->NES__DOT__data_in_cpu));
    // ALWAYS at ALU.v:55
    vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_logic 
	= ((2U & (IData)(vlTOPp->NES__DOT__CPU0__DOT__alu_op))
	    ? ((1U & (IData)(vlTOPp->NES__DOT__CPU0__DOT__alu_op))
	        ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__AI)
	        : ((IData)(vlTOPp->NES__DOT__CPU0__DOT__AI) 
		   ^ (IData)(vlTOPp->NES__DOT__CPU0__DOT__BI)))
	    : ((1U & (IData)(vlTOPp->NES__DOT__CPU0__DOT__alu_op))
	        ? ((IData)(vlTOPp->NES__DOT__CPU0__DOT__AI) 
		   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__BI))
	        : ((IData)(vlTOPp->NES__DOT__CPU0__DOT__AI) 
		   | (IData)(vlTOPp->NES__DOT__CPU0__DOT__BI))));
    if (vlTOPp->NES__DOT__CPU0__DOT__alu_shift_right) {
	vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_logic 
	    = ((0x100U & ((IData)(vlTOPp->NES__DOT__CPU0__DOT__AI) 
			  << 8U)) | (((IData)(vlTOPp->NES__DOT__CPU0__DOT__CI) 
				      << 7U) | (0x7fU 
						& ((IData)(vlTOPp->NES__DOT__CPU0__DOT__AI) 
						   >> 1U))));
    }
    // ALWAYS at ALU.v:69
    vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_BI 
	= (0xffU & ((8U & (IData)(vlTOPp->NES__DOT__CPU0__DOT__alu_op))
		     ? ((4U & (IData)(vlTOPp->NES__DOT__CPU0__DOT__alu_op))
			 ? 0U : (IData)(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_logic))
		     : ((4U & (IData)(vlTOPp->NES__DOT__CPU0__DOT__alu_op))
			 ? (~ (IData)(vlTOPp->NES__DOT__CPU0__DOT__BI))
			 : (IData)(vlTOPp->NES__DOT__CPU0__DOT__BI))));
    // ALWAYS at ALU.v:89
    vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_l = 
	(0x1fU & (((0xfU & (IData)(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_logic)) 
		   + (0xfU & (IData)(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_BI))) 
		  + (1U & (((IData)(vlTOPp->NES__DOT__CPU0__DOT__alu_shift_right) 
			    | (3U == (3U & ((IData)(vlTOPp->NES__DOT__CPU0__DOT__alu_op) 
					    >> 2U))))
			    ? 0U : (IData)(vlTOPp->NES__DOT__CPU0__DOT__CI)))));
    vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_HC 
	= (1U & (((IData)(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_l) 
		  >> 4U) | ((IData)(vlTOPp->NES__DOT__CPU0__DOT____Vcellinp__ALU__BCD) 
			    & (5U <= (7U & ((IData)(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_l) 
					    >> 1U))))));
    // ALWAYS at ALU.v:89
    vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_h = 
	(0x1fU & ((((IData)(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_logic) 
		    >> 4U) + (0xfU & ((IData)(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_BI) 
				      >> 4U))) + (IData)(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_HC)));
    vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp = (
						   ((IData)(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_h) 
						    << 4U) 
						   | (0xfU 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_l)));
}

VL_INLINE_OPT void VNES::_sequent__TOP__103(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__103\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_1_next 
	= vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_1_next;
}

VL_INLINE_OPT void VNES::_sequent__TOP__104(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__104\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_0_next 
	= vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_0_next;
}

VL_INLINE_OPT void VNES::_sequent__TOP__106(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__106\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__ppu_address_latch 
	= vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__ppu_address_latch;
}

VL_INLINE_OPT void VNES::_sequent__TOP__107(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__107\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyT_Next 
	= vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyT_Next;
}

VL_INLINE_OPT void VNES::_sequent__TOP__108(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__108\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__loopy_latch 
	= vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__loopy_latch;
}

VL_INLINE_OPT void VNES::_sequent__TOP__110(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__110\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyT 
	= vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyT;
}

VL_INLINE_OPT void VNES::_sequent__TOP__111(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__111\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CLK_DIV 
	= vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CLK_DIV;
}

VL_INLINE_OPT void VNES::_sequent__TOP__112(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__112\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK 
	= vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK;
}

VL_INLINE_OPT void VNES::_sequent__TOP__113(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__113\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VGA_CLK = vlTOPp->VGA_CLK;
}

VL_INLINE_OPT void VNES::_sequent__TOP__115(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__115\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__ppu_reg_r_address 
	= vlTOPp->NES__DOT__PPU0__DOT__ppu_reg_r_address;
}

VL_INLINE_OPT void VNES::_sequent__TOP__116(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__116\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__PPUADDR = vlTOPp->NES__DOT__PPU0__DOT__PPUADDR;
}

VL_INLINE_OPT void VNES::_sequent__TOP__117(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__117\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__NES__DOT__PPUSCROLL = vlTOPp->NES__DOT__PPUSCROLL;
}

VL_INLINE_OPT void VNES::_sequent__TOP__118(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__118\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__PPUSTATUS 
	= vlTOPp->NES__DOT__PPU0__DOT__PPUSTATUS;
}

VL_INLINE_OPT void VNES::_sequent__TOP__119(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__119\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__PPU_SCROLL_FLAG 
	= vlTOPp->NES__DOT__PPU0__DOT__PPU_SCROLL_FLAG;
}

VL_INLINE_OPT void VNES::_sequent__TOP__120(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__120\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__PPU_ADDR_FLAG 
	= vlTOPp->NES__DOT__PPU0__DOT__PPU_ADDR_FLAG;
}

VL_INLINE_OPT void VNES::_sequent__TOP__121(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__121\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__NES__DOT__PPU0__DOT__MEM1__DOT__ppu_mem_array__v0 = 0U;
}

VL_INLINE_OPT void VNES::_sequent__TOP__144(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__144\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__NES__DOT__CPU0__DOT__state = vlTOPp->NES__DOT__CPU0__DOT__state;
}

VL_INLINE_OPT void VNES::_sequent__TOP__149(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__149\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__NES__DOT__CPU0__DOT__AXYS__v0 = 0U;
}

VL_INLINE_OPT void VNES::_sequent__TOP__150(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__150\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__byte_lut 
	= vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__byte_lut;
    // ALWAYS at hdmi_driver.v:91
    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__byte_lut 
	= (0xffU & ((0x3eU == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__byte_lut))
		     ? 0U : (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__byte_lut_next)));
}

VL_INLINE_OPT void VNES::_sequent__TOP__151(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__151\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at PPU_BG.sv:55
    vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__ppu_r_addr_d 
	= vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__ppu_r_addr_q;
}

VL_INLINE_OPT void VNES::_sequent__TOP__152(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__152\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at PPU_BG.sv:55
    if ((1U & (~ ((0x101U > (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)) 
		  | ((0x316U < (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)) 
		     & (0x320U > (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX))))))) {
	vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__nametable_byte_curr 
	    = vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__nametable_byte_curr;
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__153(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__153\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at PPU_BG.sv:55
    if ((1U & (~ ((0x101U > (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)) 
		  | ((0x316U < (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)) 
		     & (0x320U > (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX))))))) {
	vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__attribute_data_curr 
	    = vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__attribute_data_curr;
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__154(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__154\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at PPU.sv:122
    if ((((((((((0x2000U == (IData)(vlTOPp->NES__DOT__address_cpu)) 
		| (0x778U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
	       | ((0x2001U == (IData)(vlTOPp->NES__DOT__address_cpu)) 
		  | (0x779U == (IData)(vlTOPp->NES__DOT__address_cpu)))) 
	      | (0x2002U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
	     | (0x2003U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
	    | (0x2004U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
	   | (0x2005U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
	  | (0x2006U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
	 | (0x2007U == (IData)(vlTOPp->NES__DOT__address_cpu)))) {
	if ((1U & (~ ((0x2000U == (IData)(vlTOPp->NES__DOT__address_cpu)) 
		      | (0x778U == (IData)(vlTOPp->NES__DOT__address_cpu)))))) {
	    if ((1U & (~ ((0x2001U == (IData)(vlTOPp->NES__DOT__address_cpu)) 
			  | (0x779U == (IData)(vlTOPp->NES__DOT__address_cpu)))))) {
		if ((0x2002U != (IData)(vlTOPp->NES__DOT__address_cpu))) {
		    if ((0x2003U != (IData)(vlTOPp->NES__DOT__address_cpu))) {
			if ((0x2004U != (IData)(vlTOPp->NES__DOT__address_cpu))) {
			    if ((0x2005U != (IData)(vlTOPp->NES__DOT__address_cpu))) {
				if ((0x2006U != (IData)(vlTOPp->NES__DOT__address_cpu))) {
				    if (vlTOPp->NES__DOT__RWE) {
					vlTOPp->NES__DOT__PPU0__DOT__PPUDATA 
					    = vlTOPp->NES__DOT__data_in;
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__155(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__155\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at PPU_BG.sv:55
    vlTOPp->NES__DOT__PPU0__DOT__BLUE_bg = (((0x101U 
					      > (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)) 
					     & (0xf1U 
						> (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawY)))
					     ? ((2U 
						 & (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__current_px))
						 ? 
						((1U 
						  & (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__current_px))
						  ? 0xffU
						  : 0U)
						 : 
						((1U 
						  & (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__current_px))
						  ? 0xffU
						  : 0xfcU))
					     : 0U);
}

VL_INLINE_OPT void VNES::_sequent__TOP__156(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__156\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at PPU_BG.sv:55
    vlTOPp->NES__DOT__PPU0__DOT__RED_bg = (((0x101U 
					     > (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)) 
					    & (0xf1U 
					       > (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawY)))
					    ? ((2U 
						& (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__current_px))
					        ? 0U
					        : (
						   (1U 
						    & (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__current_px))
						    ? 0xffU
						    : 0xbbU))
					    : 0U);
}

VL_INLINE_OPT void VNES::_sequent__TOP__157(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__157\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at PPU_BG.sv:55
    vlTOPp->NES__DOT__PPU0__DOT__GREEN_bg = (((0x101U 
					       > (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)) 
					      & (0xf1U 
						 > (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawY)))
					      ? ((2U 
						  & (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__current_px))
						  ? 
						 ((1U 
						   & (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__current_px))
						   ? 0U
						   : 0xffU)
						  : 
						 ((1U 
						   & (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__current_px))
						   ? 0xffU
						   : 0x64U))
					      : 0U);
}

VL_INLINE_OPT void VNES::_sequent__TOP__158(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__158\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at PPU_BG.sv:55
    if (((0x101U > (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)) 
	 | ((0x316U < (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)) 
	    & (0x320U > (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX))))) {
	if ((1U & (~ ((1U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))) 
		      | (2U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))))))) {
	    if (((3U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))) 
		 | (4U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))))) {
		vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__attribute_data_next 
		    = vlTOPp->NES__DOT__PPU0__DOT__mem_data_out;
	    }
	}
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__159(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__159\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at PPU_BG.sv:55
    if (((0x101U > (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)) 
	 | ((0x316U < (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)) 
	    & (0x320U > (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX))))) {
	if ((1U & (~ ((1U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))) 
		      | (2U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))))))) {
	    if ((1U & (~ ((3U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))) 
			  | (4U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))))))) {
		if (((5U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))) 
		     | (6U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))))) {
		    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_0_next 
			= vlTOPp->NES__DOT__PPU0__DOT__mem_data_out;
		}
	    }
	}
    } else {
	vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_0_next 
	    = vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_0_next;
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__160(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__160\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at PPU_BG.sv:55
    if (((0x101U > (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)) 
	 | ((0x316U < (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)) 
	    & (0x320U > (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX))))) {
	if ((1U & (~ ((1U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))) 
		      | (2U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))))))) {
	    if ((1U & (~ ((3U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))) 
			  | (4U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))))))) {
		if ((1U & (~ ((5U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))) 
			      | (6U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))))))) {
		    if (((7U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))) 
			 | (8U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))))) {
			vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_1_next 
			    = vlTOPp->NES__DOT__PPU0__DOT__mem_data_out;
		    }
		}
	    }
	}
    } else {
	vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_1_next 
	    = vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_1_next;
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__161(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__161\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at PPU_BG.sv:55
    if (((0x101U > (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)) 
	 | ((0x316U < (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)) 
	    & (0x320U > (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX))))) {
	if (((1U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))) 
	     | (2U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))))) {
	    vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__nametable_byte_next 
		= vlTOPp->NES__DOT__PPU0__DOT__mem_data_out;
	}
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__162(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__162\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at PPU_BG.sv:118
    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyT 
	= (0x77ffU & (IData)(vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyT));
    if (vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__loopy_latch) {
	vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__loopy_latch = 0U;
    }
    if ((((0xf0U > (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawY)) 
	  & (0x101U > (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX))) 
	 | ((0x20cU == (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawY)) 
	    & ((0x2bcU < (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)) 
	       & (0x320U > (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)))))) {
	if ((0x1fU == (0x1fU & (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyT)))) {
	    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyT 
		= (0x7fe0U & (IData)(vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyT));
	    if ((0x400U & (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyT))) {
		vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyT 
		    = ((0x7bffU & (IData)(vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyT)) 
		       | ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyT_Next) 
			  << 0xaU));
		vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyT_Next = 0U;
	    } else {
		vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyT 
		    = ((0x7bffU & (IData)(vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyT)) 
		       | ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyT_Next) 
			  << 0xaU));
		vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyT_Next = 1U;
	    }
	}
    }
    if (vlTOPp->reset_al) {
	if (((IData)(vlTOPp->NES__DOT__RWE) & (0x2000U 
					       == (IData)(vlTOPp->NES__DOT__address_cpu)))) {
	    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyT 
		= (0x77ffU & (IData)(vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyT));
	} else {
	    if (((IData)(vlTOPp->NES__DOT__RWE) & (0x2005U 
						   == (IData)(vlTOPp->NES__DOT__address_cpu)))) {
		if (vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__ppu_address_latch) {
		    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyT 
			= ((0x7c1fU & (IData)(vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyT)) 
			   | (0x3e0U & ((IData)(vlTOPp->NES__DOT__data_in) 
					<< 2U)));
		    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyT 
			= ((0xfffU & (IData)(vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyT)) 
			   | (0x7000U & ((IData)(vlTOPp->NES__DOT__data_in) 
					 << 0xcU)));
		} else {
		    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyT 
			= ((0x7fe0U & (IData)(vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyT)) 
			   | (0x1fU & ((IData)(vlTOPp->NES__DOT__data_in) 
				       >> 3U)));
		    vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__loopy_x 
			= (7U & (IData)(vlTOPp->NES__DOT__data_in));
		}
		vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__ppu_address_latch 
		    = (1U & (~ (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__ppu_address_latch)));
	    }
	}
	if (((IData)(vlTOPp->NES__DOT__RWE) & (0x2006U 
					       == (IData)(vlTOPp->NES__DOT__address_cpu)))) {
	    if (vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__ppu_address_latch) {
		vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyT 
		    = ((0x7f00U & (IData)(vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyT)) 
		       | (IData)(vlTOPp->NES__DOT__data_in));
		vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__loopy_latch = 1U;
	    } else {
		vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyT 
		    = ((0x4fffU & (IData)(vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyT)) 
		       | (0x3000U & ((IData)(vlTOPp->NES__DOT__data_in) 
				     << 8U)));
		vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyT 
		    = ((0x7cffU & (IData)(vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyT)) 
		       | (0x300U & ((IData)(vlTOPp->NES__DOT__data_in) 
				    << 8U)));
		vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyT 
		    = (0x77ffU & (IData)(vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyT));
		vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyT 
		    = (0x3fffU & (IData)(vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyT));
	    }
	    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__ppu_address_latch 
		= (1U & (~ (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__ppu_address_latch)));
	} else {
	    if (((~ (IData)(vlTOPp->NES__DOT__RWE)) 
		 & (0x2002U == (IData)(vlTOPp->NES__DOT__address_cpu)))) {
		vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__ppu_address_latch = 0U;
	    }
	}
    } else {
	vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyT = 0U;
	vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__ppu_address_latch = 0U;
	vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyT_Next = 0U;
	vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__loopy_x = 0U;
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__163(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__163\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at PPU.sv:122
    vlTOPp->__Vdly__VGA_CLK = (1U & ((~ (IData)(vlTOPp->vga_reset)) 
				     & (~ (IData)(vlTOPp->VGA_CLK))));
    // ALWAYS at hdmi_driver.v:83
    vlTOPp->__Vdly__VGA_CLK = (1U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__reset)
				      ? 0U : (~ (IData)(vlTOPp->VGA_CLK))));
}

VL_INLINE_OPT void VNES::_sequent__TOP__164(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__164\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at hdmi_driver.v:55
    if (vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__reset) {
	vlTOPp->__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK = 0U;
	vlTOPp->__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CLK_DIV = 0U;
    } else {
	if ((0x9c4U > vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CLK_DIV)) {
	    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CLK_DIV 
		= ((IData)(1U) + vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CLK_DIV);
	} else {
	    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK 
		= (1U & (~ (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK)));
	    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CLK_DIV = 0U;
	}
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__165(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__165\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at test_memory_interface.sv:15
    vlTOPp->NES__DOT__data_out_mem = vlTOPp->NES__DOT__MEM0__DOT__memory_array
	[vlTOPp->NES__DOT__address];
}

VL_INLINE_OPT void VNES::_sequent__TOP__166(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__166\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at NES.sv:37
    vlTOPp->NES__DOT__ppu_rwe = (((((((((((0x2000U 
					   == (IData)(vlTOPp->NES__DOT__address_cpu)) 
					  | (0x778U 
					     == (IData)(vlTOPp->NES__DOT__address_cpu))) 
					 | (0x2001U 
					    == (IData)(vlTOPp->NES__DOT__address_cpu))) 
					| (0x779U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
				       | (0x2002U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
				      | (0x2003U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
				     | (0x2004U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
				    | (0x2005U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
				   | (0x2006U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
				  | (0x2007U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
				 | (0x4014U == (IData)(vlTOPp->NES__DOT__address_cpu)));
}

VL_INLINE_OPT void VNES::_sequent__TOP__167(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__167\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:1194
    if (vlTOPp->NES__DOT__Ready) {
	vlTOPp->NES__DOT__CPU0__DOT__cond_code = (7U 
						  & ((IData)(vlTOPp->NES__DOT__CPU0__DOT__IR) 
						     >> 5U));
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__168(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__168\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at test_ppu_memory.sv:18
    if ((((IData)(vlTOPp->NES__DOT__PPU0__DOT__vblank)
	   ? (IData)(vlTOPp->NES__DOT__RWE) : 0U) & 
	 (0x2007U == (IData)(vlTOPp->NES__DOT__address_cpu)))) {
	vlTOPp->__Vdlyvval__NES__DOT__PPU0__DOT__MEM1__DOT__ppu_mem_array__v0 
	    = vlTOPp->NES__DOT__PPU0__DOT__mem_data_in;
	vlTOPp->__Vdlyvset__NES__DOT__PPU0__DOT__MEM1__DOT__ppu_mem_array__v0 = 1U;
	vlTOPp->__Vdlyvdim0__NES__DOT__PPU0__DOT__MEM1__DOT__ppu_mem_array__v0 
	    = (0x3fffU & (IData)(vlTOPp->NES__DOT__PPU0__DOT__ppu_w_address));
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__169(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__169\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:967
    if (vlTOPp->NES__DOT____Vcellinp__CPU0__reset) {
	vlTOPp->NES__DOT__CPU0__DOT__res = 1U;
    } else {
	if ((0xcU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) {
	    vlTOPp->NES__DOT__CPU0__DOT__res = 0U;
	}
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__170(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__170\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:350
    if (vlTOPp->NES__DOT__Ready) {
	vlTOPp->NES__DOT__pc = (0xffffU & ((IData)(vlTOPp->NES__DOT__CPU0__DOT__PC_temp) 
					   + (IData)(vlTOPp->NES__DOT__CPU0__DOT__PC_inc)));
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__171(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__171\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:840
    if (vlTOPp->NES__DOT____Vcellinp__CPU0__reset) {
	vlTOPp->NES__DOT__CPU0__DOT__IRHOLD_valid = 0U;
    } else {
	if (vlTOPp->NES__DOT__Ready) {
	    if (((0x1eU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)) 
		 | (0x21U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)))) {
		vlTOPp->NES__DOT__CPU0__DOT__IRHOLD_valid = 1U;
	    } else {
		if ((0xcU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) {
		    vlTOPp->NES__DOT__CPU0__DOT__IRHOLD_valid = 0U;
		}
	    }
	}
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__172(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__172\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:1180
    if (((0xcU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)) 
	 & (IData)(vlTOPp->NES__DOT__Ready))) {
	vlTOPp->NES__DOT__CPU0__DOT__brk = (0U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR));
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__173(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__173\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:1180
    if (((0xcU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)) 
	 & (IData)(vlTOPp->NES__DOT__Ready))) {
	vlTOPp->NES__DOT__CPU0__DOT__php = (8U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR));
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__174(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__174\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:414
    if (((((((0x21U != (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)) 
	     & (0x22U != (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
	    & (IData)(vlTOPp->NES__DOT__Ready)) & (0x1eU 
						   != (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
	  & (0x1fU != (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
	 & (0x20U != (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)))) {
	vlTOPp->NES__DOT__CPU0__DOT__ABL = (0xffU & (IData)(vlTOPp->NES__DOT__address_cpu));
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__175(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__175\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:414
    if (((((((0x21U != (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)) 
	     & (0x22U != (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
	    & (IData)(vlTOPp->NES__DOT__Ready)) & (0x1eU 
						   != (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
	  & (0x1fU != (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
	 & (0x20U != (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)))) {
	vlTOPp->NES__DOT__CPU0__DOT__ABH = (0xffU & 
					    ((IData)(vlTOPp->NES__DOT__address_cpu) 
					     >> 8U));
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__176(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__176\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:1123
    if (((0xcU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)) 
	 & (IData)(vlTOPp->NES__DOT__Ready))) {
	vlTOPp->NES__DOT__CPU0__DOT__shift_right = 
	    (0x42U == (0xc3U & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR)));
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__177(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__177\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:1074
    if (((0xcU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)) 
	 & (IData)(vlTOPp->NES__DOT__Ready))) {
	vlTOPp->NES__DOT__CPU0__DOT__inc = ((0xe6U 
					     == (0xe7U 
						 & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))) 
					    | (0xc8U 
					       == (0xdfU 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))));
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__178(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__178\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:1132
    if (((0xcU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)) 
	 & (IData)(vlTOPp->NES__DOT__Ready))) {
	vlTOPp->NES__DOT__CPU0__DOT__rotate = ((0x2aU 
						== 
						(0xafU 
						 & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))) 
					       | (0x26U 
						  == 
						  (0xa7U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))));
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__179(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__179\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:1142
    if (((0xcU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)) 
	 & (IData)(vlTOPp->NES__DOT__Ready))) {
	vlTOPp->NES__DOT__CPU0__DOT__op = ((0x80U & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
					    ? ((0x40U 
						& (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
					        ? (
						   (0x20U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						    ? 
						   ((0x10U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						     ? 
						    ((2U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						      ? 3U
						      : 
						     ((1U 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						       ? 7U
						       : 3U))
						     : 
						    ((8U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						      ? 
						     ((4U 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						       ? 
						      ((2U 
							& (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						        ? 3U
						        : 7U)
						       : 
						      ((2U 
							& (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						        ? 3U
						        : 
						       ((1U 
							 & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
							 ? 7U
							 : 3U)))
						      : 
						     ((2U 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						       ? 3U
						       : 7U)))
						    : 
						   ((0x10U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						     ? 
						    ((4U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						      ? 
						     ((2U 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						       ? 
						      ((1U 
							& (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						        ? 3U
						        : 7U)
						       : 
						      ((1U 
							& (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						        ? 7U
						        : 3U))
						      : 
						     ((2U 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						       ? 3U
						       : 
						      ((1U 
							& (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						        ? 7U
						        : 3U)))
						     : 
						    ((8U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						      ? 
						     ((4U 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						       ? 
						      ((2U 
							& (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						        ? 
						       ((1U 
							 & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
							 ? 3U
							 : 7U)
						        : 7U)
						       : 
						      ((2U 
							& (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						        ? 
						       ((1U 
							 & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
							 ? 3U
							 : 7U)
						        : 
						       ((1U 
							 & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
							 ? 7U
							 : 3U)))
						      : 
						     ((4U 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						       ? 
						      ((2U 
							& (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						        ? 
						       ((1U 
							 & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
							 ? 3U
							 : 7U)
						        : 7U)
						       : 
						      ((2U 
							& (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						        ? 3U
						        : 7U)))))
					        : (
						   (0x20U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						    ? 3U
						    : 
						   ((0x10U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						     ? 3U
						     : 
						    ((8U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						      ? 
						     ((4U 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						       ? 3U
						       : 
						      ((2U 
							& (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						        ? 3U
						        : 
						       ((1U 
							 & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
							 ? 3U
							 : 7U)))
						      : 3U))))
					    : ((0x40U 
						& (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
					        ? (
						   (0x20U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						    ? 
						   ((2U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						     ? 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						      ? 3U
						      : 0xfU)
						     : 3U)
						    : 
						   ((2U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						     ? 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						      ? 3U
						      : 0xfU)
						     : 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						      ? 
						     (0xcU 
						      | (3U 
							 & ((IData)(vlTOPp->NES__DOT__CPU0__DOT__IR) 
							    >> 5U)))
						      : 3U)))
					        : (
						   (0x20U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						    ? 
						   ((0x10U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						     ? 
						    ((2U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						      ? 
						     ((1U 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						       ? 3U
						       : 0xbU)
						      : 
						     ((1U 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						       ? 
						      (0xcU 
						       | (3U 
							  & ((IData)(vlTOPp->NES__DOT__CPU0__DOT__IR) 
							     >> 5U)))
						       : 3U))
						     : 
						    ((4U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						      ? 
						     ((2U 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						       ? 
						      ((1U 
							& (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						        ? 3U
						        : 0xbU)
						       : 
						      ((1U 
							& (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						        ? 
						       (0xcU 
							| (3U 
							   & ((IData)(vlTOPp->NES__DOT__CPU0__DOT__IR) 
							      >> 5U)))
						        : 0xdU))
						      : 
						     ((2U 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						       ? 
						      ((1U 
							& (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						        ? 3U
						        : 0xbU)
						       : 
						      ((1U 
							& (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						        ? 
						       (0xcU 
							| (3U 
							   & ((IData)(vlTOPp->NES__DOT__CPU0__DOT__IR) 
							      >> 5U)))
						        : 3U))))
						    : 
						   ((2U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						     ? 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						      ? 3U
						      : 0xbU)
						     : 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						      ? 
						     (0xcU 
						      | (3U 
							 & ((IData)(vlTOPp->NES__DOT__CPU0__DOT__IR) 
							    >> 5U)))
						      : 3U)))));
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__180(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__180\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:1066
    if (((0xcU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)) 
	 & (IData)(vlTOPp->NES__DOT__Ready))) {
	vlTOPp->NES__DOT__CPU0__DOT__load_only = (0xa0U 
						  == 
						  (0xe0U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR)));
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__181(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__181\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:854
    if (vlTOPp->NES__DOT__Ready) {
	vlTOPp->NES__DOT__CPU0__DOT__DIHOLD = vlTOPp->NES__DOT__data_out;
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__182(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__182\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:990
    if (((0xcU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)) 
	 & (IData)(vlTOPp->NES__DOT__Ready))) {
	vlTOPp->NES__DOT__CPU0__DOT__dst_reg = ((0x80U 
						 & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						 ? 
						((0x40U 
						  & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						  ? 
						 ((0x20U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						   ? 
						  ((0x10U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						    ? 0U
						    : 
						   ((8U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						     ? 
						    ((4U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						      ? 0U
						      : 
						     ((2U 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						       ? 0U
						       : 
						      ((1U 
							& (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						        ? 0U
						        : 2U)))
						     : 0U))
						   : 
						  ((0x10U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						    ? 0U
						    : 
						   ((8U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						     ? 
						    ((4U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						      ? 0U
						      : 
						     ((2U 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						       ? 
						      ((1U 
							& (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						        ? 0U
						        : 2U)
						       : 
						      ((1U 
							& (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						        ? 0U
						        : 3U)))
						     : 0U)))
						  : 
						 ((0x20U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						   ? 
						  ((0x10U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						    ? 
						   ((4U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						     ? 
						    ((2U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						      ? 
						     ((1U 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						       ? 0U
						       : 2U)
						      : 
						     ((1U 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						       ? 0U
						       : 3U))
						     : 
						    ((2U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						      ? 
						     ((1U 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						       ? 0U
						       : 2U)
						      : 0U))
						    : 
						   ((2U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						     ? 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						      ? 0U
						      : 2U)
						     : 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						      ? 0U
						      : 3U)))
						   : 
						  ((0x10U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						    ? 
						   ((8U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						     ? 
						    ((4U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						      ? 0U
						      : 
						     ((2U 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						       ? 
						      ((1U 
							& (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						        ? 0U
						        : 1U)
						       : 0U))
						     : 0U)
						    : 
						   ((8U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						     ? 
						    ((4U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						      ? 0U
						      : 
						     ((2U 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						       ? 0U
						       : 
						      ((1U 
							& (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						        ? 0U
						        : 3U)))
						     : 0U))))
						 : 
						((0x20U 
						  & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						  ? 0U
						  : 
						 ((0x10U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						   ? 0U
						   : 
						  ((8U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						    ? 
						   ((4U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						     ? 0U
						     : 
						    ((2U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						      ? 0U
						      : 
						     ((1U 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						       ? 0U
						       : 1U)))
						    : 0U))));
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__183(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__183\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:1011
    if (((0xcU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)) 
	 & (IData)(vlTOPp->NES__DOT__Ready))) {
	vlTOPp->NES__DOT__CPU0__DOT__src_reg = ((0x80U 
						 & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						 ? 
						((0x40U 
						  & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						  ? 
						 ((0x20U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						   ? 
						  ((0x10U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						    ? 0U
						    : 
						   ((2U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						     ? 0U
						     : 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						      ? 0U
						      : 2U)))
						   : 
						  ((0x10U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						    ? 0U
						    : 
						   ((8U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						     ? 
						    ((4U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						      ? 
						     ((2U 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						       ? 0U
						       : 
						      ((1U 
							& (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						        ? 0U
						        : 3U))
						      : 
						     ((2U 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						       ? 
						      ((1U 
							& (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						        ? 0U
						        : 2U)
						       : 
						      ((1U 
							& (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						        ? 0U
						        : 3U)))
						     : 
						    ((2U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						      ? 0U
						      : 
						     ((1U 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						       ? 0U
						       : 3U)))))
						  : 
						 ((0x20U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						   ? 
						  ((0x10U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						    ? 
						   ((8U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						     ? 
						    ((4U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						      ? 0U
						      : 
						     ((2U 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						       ? 
						      ((1U 
							& (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						        ? 0U
						        : 1U)
						       : 0U))
						     : 0U)
						    : 0U)
						   : 
						  ((8U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						    ? 
						   ((2U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						     ? 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						      ? 0U
						      : 2U)
						     : 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						      ? 0U
						      : 3U))
						    : 
						   ((4U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						     ? 
						    ((2U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						      ? 
						     ((1U 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						       ? 0U
						       : 2U)
						      : 
						     ((1U 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						       ? 0U
						       : 3U))
						     : 0U))))
						 : 0U);
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__184(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__184\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:1032
    if (((0xcU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)) 
	 & (IData)(vlTOPp->NES__DOT__Ready))) {
	vlTOPp->NES__DOT__CPU0__DOT__index_y = (((0x11U 
						  == 
						  (0x1fU 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))) 
						 | (0x96U 
						    == 
						    (0xd7U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR)))) 
						| (9U 
						   == 
						   (0xfU 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))));
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__185(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__185\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:840
    if ((1U & (~ (IData)(vlTOPp->NES__DOT____Vcellinp__CPU0__reset)))) {
	if (vlTOPp->NES__DOT__Ready) {
	    if (((0x1eU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)) 
		 | (0x21U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)))) {
		vlTOPp->NES__DOT__CPU0__DOT__IRHOLD 
		    = vlTOPp->NES__DOT__CPU0__DOT__DIMUX;
	    }
	}
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__186(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__186\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:1216
    if (((IData)(vlTOPp->NES__DOT__CPU0__DOT__NMI_edge) 
	 & (0xbU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)))) {
	vlTOPp->NES__DOT__CPU0__DOT__NMI_edge = 0U;
    } else {
	if (((IData)(vlTOPp->nmi_interrupt) & (~ (IData)(vlTOPp->NES__DOT__CPU0__DOT__NMI_1)))) {
	    vlTOPp->NES__DOT__CPU0__DOT__NMI_edge = 1U;
	}
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__187(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__187\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:794
    if ((0xbU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) {
	vlTOPp->NES__DOT__CPU0__DOT__I = 1U;
    } else {
	if ((0x27U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) {
	    vlTOPp->NES__DOT__CPU0__DOT__I = (1U & 
					      ((IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX) 
					       >> 2U));
	} else {
	    if ((0x24U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) {
		if (vlTOPp->NES__DOT__CPU0__DOT__sei) {
		    vlTOPp->NES__DOT__CPU0__DOT__I = 1U;
		}
		if (vlTOPp->NES__DOT__CPU0__DOT__cli) {
		    vlTOPp->NES__DOT__CPU0__DOT__I = 0U;
		}
	    } else {
		if ((0xcU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) {
		    if (vlTOPp->NES__DOT__CPU0__DOT__plp) {
			vlTOPp->NES__DOT__CPU0__DOT__I 
			    = (1U & ((IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD) 
				     >> 2U));
		    }
		}
	    }
	}
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__188(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__188\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:863
    if (vlTOPp->NES__DOT____Vcellinp__CPU0__reset) {
	vlTOPp->__Vdly__NES__DOT__CPU0__DOT__state = 8U;
    } else {
	if (vlTOPp->NES__DOT__Ready) {
	    if (((((((((0xcU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)) 
		       | (0x2fU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
		      | (0x30U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
		     | (0x31U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
		    | (0U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
		   | (1U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
		  | (2U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
		 | (3U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)))) {
		if ((0xcU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) {
		    if (((((((((0U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR)) 
			       | (0x20U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))) 
			      | (0x2cU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))) 
			     | (0x40U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))) 
			    | (0x4cU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))) 
			   | (0x60U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))) 
			  | (0x6cU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))) 
			 | (8U == (0xbfU & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))))) {
			vlTOPp->__Vdly__NES__DOT__CPU0__DOT__state 
			    = ((0U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
			        ? 8U : ((0x20U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
					 ? 0x1aU : 
					((0x2cU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
					  ? 0U : ((0x40U 
						   == (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						   ? 0x25U
						   : 
						  ((0x4cU 
						    == (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						    ? 0x16U
						    : 
						   ((0x60U 
						     == (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						     ? 0x2aU
						     : 
						    ((0x6cU 
						      == (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						      ? 0x18U
						      : 0x21U)))))));
		    } else {
			if (((((((((0x28U == (0xbfU 
					      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))) 
				   | (0x18U == (0x9fU 
						& (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR)))) 
				  | (0x80U == (0x9dU 
					       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR)))) 
				 | (0x8cU == (0x9fU 
					      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR)))) 
				| (0x88U == (0x8fU 
					     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR)))) 
			       | (1U == (0x1fU & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR)))) 
			      | (4U == (0x1cU & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR)))) 
			     | (9U == (0x1fU & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))))) {
			    vlTOPp->__Vdly__NES__DOT__CPU0__DOT__state 
				= ((0x28U == (0xbfU 
					      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR)))
				    ? 0x1eU : ((0x18U 
						== 
						(0x9fU 
						 & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR)))
					        ? 0x24U
					        : (
						   (0x80U 
						    == 
						    (0x9dU 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR)))
						    ? 0xdU
						    : 
						   ((0x8cU 
						     == 
						     (0x9fU 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR)))
						     ? 0U
						     : 
						    ((0x88U 
						      == 
						      (0x8fU 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR)))
						      ? 0x24U
						      : 
						     ((1U 
						       == 
						       (0x1fU 
							& (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR)))
						       ? 0xeU
						       : 
						      ((4U 
							== 
							(0x1cU 
							 & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR)))
						        ? 0x2fU
						        : 0xdU)))))));
			} else {
			    if (((((((((0xdU == (0x1fU 
						 & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))) 
				       | (0xeU == (0x1fU 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR)))) 
				      | (0x10U == (0x1fU 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR)))) 
				     | (0x11U == (0x1fU 
						  & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR)))) 
				    | (0x14U == (0x1cU 
						 & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR)))) 
				   | (0x19U == (0x1fU 
						& (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR)))) 
				  | (0x1cU == (0x1cU 
					       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR)))) 
				 | (0xaU == (0xfU & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))))) {
				vlTOPp->__Vdly__NES__DOT__CPU0__DOT__state 
				    = ((0xdU == (0x1fU 
						 & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR)))
				        ? 0U : ((0xeU 
						 == 
						 (0x1fU 
						  & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR)))
						 ? 0U
						 : 
						((0x10U 
						  == 
						  (0x1fU 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR)))
						  ? 5U
						  : 
						 ((0x11U 
						   == 
						   (0x1fU 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR)))
						   ? 0x12U
						   : 
						  ((0x14U 
						    == 
						    (0x1cU 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR)))
						    ? 0x30U
						    : 
						   ((0x19U 
						     == 
						     (0x1fU 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR)))
						     ? 2U
						     : 
						    ((0x1cU 
						      == 
						      (0x1cU 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR)))
						      ? 2U
						      : 0x24U)))))));
			    }
			}
		    }
		} else {
		    vlTOPp->__Vdly__NES__DOT__CPU0__DOT__state 
			= ((0x2fU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
			    ? ((IData)(vlTOPp->NES__DOT__CPU0__DOT__write_back)
			        ? 0x23U : 0xdU) : (
						   (0x30U 
						    == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 0x31U
						    : 
						   ((0x31U 
						     == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 
						    ((IData)(vlTOPp->NES__DOT__CPU0__DOT__write_back)
						      ? 0x23U
						      : 0xdU)
						     : 
						    ((0U 
						      == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? 1U
						      : 
						     ((1U 
						       == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						       ? 
						      ((IData)(vlTOPp->NES__DOT__CPU0__DOT__write_back)
						        ? 0x23U
						        : 0xdU)
						       : 
						      ((2U 
							== (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						        ? 3U
						        : 
						       ((((IData)(vlTOPp->NES__DOT__CPU0__DOT__CO) 
							  | (IData)(vlTOPp->NES__DOT__CPU0__DOT__store)) 
							 | (IData)(vlTOPp->NES__DOT__CPU0__DOT__write_back))
							 ? 4U
							 : 0xdU)))))));
		}
	    } else {
		if (((((((((4U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)) 
			   | (0xeU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
			  | (0xfU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
			 | (0x10U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
			| (0x11U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
		       | (0x12U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
		      | (0x13U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
		     | (0x14U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)))) {
		    vlTOPp->__Vdly__NES__DOT__CPU0__DOT__state 
			= ((4U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
			    ? ((IData)(vlTOPp->NES__DOT__CPU0__DOT__write_back)
			        ? 0x23U : 0xdU) : (
						   (0xeU 
						    == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 0xfU
						    : 
						   ((0xfU 
						     == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 0x10U
						     : 
						    ((0x10U 
						      == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? 0x11U
						      : 
						     ((0x11U 
						       == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						       ? 0xdU
						       : 
						      ((0x12U 
							== (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						        ? 0x13U
						        : 
						       ((0x13U 
							 == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
							 ? 0x14U
							 : 
							(((IData)(vlTOPp->NES__DOT__CPU0__DOT__CO) 
							  | (IData)(vlTOPp->NES__DOT__CPU0__DOT__store))
							  ? 0x15U
							  : 0xdU))))))));
		} else {
		    if (((((((((0x15U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)) 
			       | (0x23U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
			      | (0x2eU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
			     | (0xdU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
			    | (0x24U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
			   | (0x21U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
			  | (0x22U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
			 | (0x1eU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)))) {
			vlTOPp->__Vdly__NES__DOT__CPU0__DOT__state 
			    = ((0x15U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
			        ? 0xdU : ((0x23U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
					   ? 0x2eU : 
					  ((0x2eU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
					    ? 0xdU : 
					   ((0xdU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
					     ? 0xcU
					     : ((0x24U 
						 == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						 ? 0xcU
						 : 
						((0x21U 
						  == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						  ? 0x22U
						  : 
						 ((0x22U 
						   == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 0xcU
						   : 0x1fU)))))));
		    } else {
			if (((((((((0x1fU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)) 
				   | (0x20U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
				  | (0x1aU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
				 | (0x1bU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
				| (0x1cU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
			       | (0x1dU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
			      | (0x25U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
			     | (0x26U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)))) {
			    vlTOPp->__Vdly__NES__DOT__CPU0__DOT__state 
				= ((0x1fU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
				    ? 0x20U : ((0x20U 
						== (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
					        ? 0xcU
					        : (
						   (0x1aU 
						    == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 0x1bU
						    : 
						   ((0x1bU 
						     == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 0x1cU
						     : 
						    ((0x1cU 
						      == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? 0x1dU
						      : 
						     ((0x1dU 
						       == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						       ? 0xdU
						       : 
						      ((0x25U 
							== (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						        ? 0x26U
						        : 0x27U)))))));
			} else {
			    if (((((((((0x27U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)) 
				       | (0x28U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
				      | (0x29U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
				     | (0x2aU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
				    | (0x2bU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
				   | (0x2cU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
				  | (0x2dU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
				 | (5U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)))) {
				vlTOPp->__Vdly__NES__DOT__CPU0__DOT__state 
				    = ((0x27U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
				        ? 0x28U : (
						   (0x28U 
						    == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 0x29U
						    : 
						   ((0x29U 
						     == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 0xcU
						     : 
						    ((0x2aU 
						      == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? 0x2bU
						      : 
						     ((0x2bU 
						       == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						       ? 0x2cU
						       : 
						      ((0x2cU 
							== (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						        ? 0x2dU
						        : 
						       ((0x2dU 
							 == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
							 ? 0xdU
							 : 
							((IData)(vlTOPp->NES__DOT__CPU0__DOT__cond_true)
							  ? 6U
							  : 0xcU))))))));
			    } else {
				if (((((((((6U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)) 
					   | (7U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
					  | (0x16U 
					     == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
					 | (0x17U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
					| (0x18U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
				       | (0x19U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
				      | (8U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
				     | (9U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)))) {
				    vlTOPp->__Vdly__NES__DOT__CPU0__DOT__state 
					= ((6U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
					    ? (((IData)(vlTOPp->NES__DOT__CPU0__DOT__CO) 
						^ (IData)(vlTOPp->NES__DOT__CPU0__DOT__backwards))
					        ? 7U
					        : 0xcU)
					    : ((7U 
						== (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
					        ? 0xcU
					        : (
						   (0x16U 
						    == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 0x17U
						    : 
						   ((0x17U 
						     == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 0xcU
						     : 
						    ((0x18U 
						      == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? 0x19U
						      : 
						     ((0x19U 
						       == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						       ? 0x16U
						       : 
						      ((8U 
							== (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						        ? 9U
						        : 0xaU)))))));
				} else {
				    if ((0xaU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) {
					vlTOPp->__Vdly__NES__DOT__CPU0__DOT__state = 0xbU;
				    } else {
					if ((0xbU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) {
					    vlTOPp->__Vdly__NES__DOT__CPU0__DOT__state = 0x16U;
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__189(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__189\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:765
    if ((0x2eU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) {
	vlTOPp->NES__DOT__CPU0__DOT__Z = (1U & (~ (IData)(
							  (0U 
							   != (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD)))));
    } else {
	if ((0x27U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) {
	    vlTOPp->NES__DOT__CPU0__DOT__Z = (1U & 
					      ((IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX) 
					       >> 1U));
	} else {
	    if ((0xcU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) {
		if (vlTOPp->NES__DOT__CPU0__DOT__plp) {
		    vlTOPp->NES__DOT__CPU0__DOT__Z 
			= (1U & ((IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD) 
				 >> 1U));
		} else {
		    if (((((IData)(vlTOPp->NES__DOT__CPU0__DOT__load_reg) 
			   & (1U != (IData)(vlTOPp->NES__DOT__CPU0__DOT__regsel))) 
			  | (IData)(vlTOPp->NES__DOT__CPU0__DOT__compare)) 
			 | (IData)(vlTOPp->NES__DOT__CPU0__DOT__bit_ins))) {
			vlTOPp->NES__DOT__CPU0__DOT__Z 
			    = (1U & (~ (IData)((0U 
						!= (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD)))));
		    }
		}
	    }
	}
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__190(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__190\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:777
    if ((0x2eU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) {
	vlTOPp->NES__DOT__CPU0__DOT__N = vlTOPp->NES__DOT__CPU0__DOT__AN;
    } else {
	if ((0x27U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) {
	    vlTOPp->NES__DOT__CPU0__DOT__N = (1U & 
					      ((IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX) 
					       >> 7U));
	} else {
	    if ((0xcU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) {
		if (vlTOPp->NES__DOT__CPU0__DOT__plp) {
		    vlTOPp->NES__DOT__CPU0__DOT__N 
			= (1U & ((IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD) 
				 >> 7U));
		} else {
		    if ((((IData)(vlTOPp->NES__DOT__CPU0__DOT__load_reg) 
			  & (1U != (IData)(vlTOPp->NES__DOT__CPU0__DOT__regsel))) 
			 | (IData)(vlTOPp->NES__DOT__CPU0__DOT__compare))) {
			vlTOPp->NES__DOT__CPU0__DOT__N 
			    = vlTOPp->NES__DOT__CPU0__DOT__AN;
		    }
		}
	    } else {
		if (((0xdU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)) 
		     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__bit_ins))) {
		    vlTOPp->NES__DOT__CPU0__DOT__N 
			= (1U & ((IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX) 
				 >> 7U));
		}
	    }
	}
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__191(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__191\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:820
    if ((0x27U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) {
	vlTOPp->NES__DOT__CPU0__DOT__V = (1U & ((IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX) 
						>> 6U));
    } else {
	if ((0xcU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) {
	    if (vlTOPp->NES__DOT__CPU0__DOT__adc_sbc) {
		vlTOPp->NES__DOT__CPU0__DOT__V = ((
						   ((IData)(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__AI7) 
						    ^ (IData)(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__BI7)) 
						   ^ (IData)(vlTOPp->NES__DOT__CPU0__DOT__CO)) 
						  ^ (IData)(vlTOPp->NES__DOT__CPU0__DOT__AN));
	    }
	    if (vlTOPp->NES__DOT__CPU0__DOT__clv) {
		vlTOPp->NES__DOT__CPU0__DOT__V = 0U;
	    }
	    if (vlTOPp->NES__DOT__CPU0__DOT__plp) {
		vlTOPp->NES__DOT__CPU0__DOT__V = (1U 
						  & ((IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD) 
						     >> 6U));
	    }
	} else {
	    if (((0xdU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)) 
		 & (IData)(vlTOPp->NES__DOT__CPU0__DOT__bit_ins))) {
		vlTOPp->NES__DOT__CPU0__DOT__V = (1U 
						  & ((IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX) 
						     >> 6U));
	    }
	}
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__192(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__192\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:745
    if (((IData)(vlTOPp->NES__DOT__CPU0__DOT__shift) 
	 & (0x2eU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)))) {
	vlTOPp->NES__DOT__CPU0__DOT__C = vlTOPp->NES__DOT__CPU0__DOT__CO;
    } else {
	if ((0x27U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) {
	    vlTOPp->NES__DOT__CPU0__DOT__C = (1U & (IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX));
	} else {
	    if (((~ (IData)(vlTOPp->NES__DOT__CPU0__DOT__write_back)) 
		 & (0xcU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)))) {
		if ((((IData)(vlTOPp->NES__DOT__CPU0__DOT__adc_sbc) 
		      | (IData)(vlTOPp->NES__DOT__CPU0__DOT__shift)) 
		     | (IData)(vlTOPp->NES__DOT__CPU0__DOT__compare))) {
		    vlTOPp->NES__DOT__CPU0__DOT__C 
			= vlTOPp->NES__DOT__CPU0__DOT__CO;
		} else {
		    if (vlTOPp->NES__DOT__CPU0__DOT__plp) {
			vlTOPp->NES__DOT__CPU0__DOT__C 
			    = (1U & (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD));
		    } else {
			if (vlTOPp->NES__DOT__CPU0__DOT__sec) {
			    vlTOPp->NES__DOT__CPU0__DOT__C = 1U;
			}
			if (vlTOPp->NES__DOT__CPU0__DOT__clc) {
			    vlTOPp->NES__DOT__CPU0__DOT__C = 0U;
			}
		    }
		}
	    }
	}
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__193(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__193\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:532
    if (((IData)(vlTOPp->NES__DOT__CPU0__DOT__write_register) 
	 & (IData)(vlTOPp->NES__DOT__Ready))) {
	vlTOPp->__Vdlyvval__NES__DOT__CPU0__DOT__AXYS__v0 
	    = ((0x1aU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
	        ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX)
	        : ((0xf0U & ((((IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD) 
			       >> 4U) + ((IData)(vlTOPp->NES__DOT__CPU0__DOT__adj_bcd)
					  ? ((IData)(vlTOPp->NES__DOT__CPU0__DOT__adc_bcd)
					      ? ((IData)(vlTOPp->NES__DOT__CPU0__DOT__CO)
						  ? 6U
						  : 0U)
					      : ((IData)(vlTOPp->NES__DOT__CPU0__DOT__CO)
						  ? 0U
						  : 0xaU))
					  : 0U)) << 4U)) 
		   | (0xfU & ((IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD) 
			      + ((IData)(vlTOPp->NES__DOT__CPU0__DOT__adj_bcd)
				  ? ((IData)(vlTOPp->NES__DOT__CPU0__DOT__adc_bcd)
				      ? ((IData)(vlTOPp->NES__DOT__CPU0__DOT__HC)
					  ? 6U : 0U)
				      : ((IData)(vlTOPp->NES__DOT__CPU0__DOT__HC)
					  ? 0U : 0xaU))
				  : 0U)))));
	vlTOPp->__Vdlyvset__NES__DOT__CPU0__DOT__AXYS__v0 = 1U;
	vlTOPp->__Vdlyvdim0__NES__DOT__CPU0__DOT__AXYS__v0 
	    = vlTOPp->NES__DOT__CPU0__DOT__regsel;
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__204(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__204\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at PPU.sv:103
    vlTOPp->RED = ((IData)(vlTOPp->NES__DOT__PPU0__DOT__priority_bit)
		    ? (IData)(vlTOPp->NES__DOT__PPU0__DOT__RED_sp)
		    : (IData)(vlTOPp->NES__DOT__PPU0__DOT__RED_bg));
    // ALWAYS at PPU.sv:103
    vlTOPp->GREEN = ((IData)(vlTOPp->NES__DOT__PPU0__DOT__priority_bit)
		      ? (IData)(vlTOPp->NES__DOT__PPU0__DOT__GREEN_sp)
		      : (IData)(vlTOPp->NES__DOT__PPU0__DOT__GREEN_bg));
    // ALWAYS at PPU.sv:103
    vlTOPp->BLUE = ((IData)(vlTOPp->NES__DOT__PPU0__DOT__priority_bit)
		     ? (IData)(vlTOPp->NES__DOT__PPU0__DOT__BLUE_sp)
		     : (IData)(vlTOPp->NES__DOT__PPU0__DOT__BLUE_bg));
}

VL_INLINE_OPT void VNES::_sequent__TOP__205(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__205\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 149 
    VL_SIG16(__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__clk_divide,9,0);
    VL_SIG8(__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__clk_50k,0,0);
    // Body
    __Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__clk_divide 
	= vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__clk_divide;
    __Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__clk_50k 
	= vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__clk_50k;
    // ALWAYS at hdmi_driver.v:91
    if (vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__reset) {
	__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__clk_50k = 0U;
	__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__clk_divide = 0U;
    }
    if ((0x1f4U == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__clk_divide))) {
	__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__clk_50k 
	    = (1U & (~ (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__clk_50k)));
	__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__clk_divide = 0U;
    } else {
	__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__clk_divide 
	    = (0x3ffU & ((IData)(1U) + (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__clk_divide)));
    }
    vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__clk_divide 
	= __Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__clk_divide;
    vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__clk_50k 
	= __Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__clk_50k;
    vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CLK_DIV 
	= vlTOPp->__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CLK_DIV;
}

VL_INLINE_OPT void VNES::_sequent__TOP__206(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__206\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 150 
    VL_SIG16(__Vdlyvdim0__NES__DOT__MEM0__DOT__memory_array__v0,15,0);
    VL_SIG8(__Vdlyvval__NES__DOT__MEM0__DOT__memory_array__v0,7,0);
    VL_SIG8(__Vdlyvset__NES__DOT__MEM0__DOT__memory_array__v0,0,0);
    // Body
    __Vdlyvset__NES__DOT__MEM0__DOT__memory_array__v0 = 0U;
    // ALWAYS at test_memory_interface.sv:15
    if (vlTOPp->NES__DOT__RWE) {
	__Vdlyvval__NES__DOT__MEM0__DOT__memory_array__v0 
	    = vlTOPp->NES__DOT__data_in;
	__Vdlyvset__NES__DOT__MEM0__DOT__memory_array__v0 = 1U;
	__Vdlyvdim0__NES__DOT__MEM0__DOT__memory_array__v0 
	    = vlTOPp->NES__DOT__address;
    }
    // ALWAYSPOST at test_memory_interface.sv:18
    if (__Vdlyvset__NES__DOT__MEM0__DOT__memory_array__v0) {
	vlTOPp->NES__DOT__MEM0__DOT__memory_array[__Vdlyvdim0__NES__DOT__MEM0__DOT__memory_array__v0] 
	    = __Vdlyvval__NES__DOT__MEM0__DOT__memory_array__v0;
    }
}

VL_INLINE_OPT void VNES::_combo__TOP__207(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_combo__TOP__207\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->NES__DOT____Vcellinp__CPU0__reset = (1U 
						 & (~ (IData)(vlTOPp->reset_al)));
}

VL_INLINE_OPT void VNES::_sequent__TOP__208(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__208\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__ppu_address_latch 
	= vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__ppu_address_latch;
}

VL_INLINE_OPT void VNES::_sequent__TOP__210(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__210\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyT_Next 
	= vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyT_Next;
}

VL_INLINE_OPT void VNES::_sequent__TOP__224(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__224\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VGA_CLK = vlTOPp->__Vdly__VGA_CLK;
}

VL_INLINE_OPT void VNES::_sequent__TOP__226(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__226\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK 
	= vlTOPp->__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK;
}

VL_INLINE_OPT void VNES::_sequent__TOP__227(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__227\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYSPOST at cpu.v:534
    if (vlTOPp->__Vdlyvset__NES__DOT__CPU0__DOT__AXYS__v0) {
	vlTOPp->NES__DOT__CPU0__DOT__AXYS[vlTOPp->__Vdlyvdim0__NES__DOT__CPU0__DOT__AXYS__v0] 
	    = vlTOPp->__Vdlyvval__NES__DOT__CPU0__DOT__AXYS__v0;
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__256(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__256\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:1198
    vlTOPp->__Vtableidx7 = (((IData)(vlTOPp->NES__DOT__CPU0__DOT__N) 
			     << 6U) | (((IData)(vlTOPp->NES__DOT__CPU0__DOT__V) 
					<< 5U) | (((IData)(vlTOPp->NES__DOT__CPU0__DOT__C) 
						   << 4U) 
						  | (((IData)(vlTOPp->NES__DOT__CPU0__DOT__Z) 
						      << 3U) 
						     | (IData)(vlTOPp->NES__DOT__CPU0__DOT__cond_code)))));
    vlTOPp->NES__DOT__CPU0__DOT__cond_true = vlTOPp->__Vtable7_NES__DOT__CPU0__DOT__cond_true
	[vlTOPp->__Vtableidx7];
}

VL_INLINE_OPT void VNES::_sequent__TOP__258(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__258\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at PPU.sv:122
    if ((((((((((0x2000U == (IData)(vlTOPp->NES__DOT__address_cpu)) 
		| (0x778U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
	       | ((0x2001U == (IData)(vlTOPp->NES__DOT__address_cpu)) 
		  | (0x779U == (IData)(vlTOPp->NES__DOT__address_cpu)))) 
	      | (0x2002U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
	     | (0x2003U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
	    | (0x2004U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
	   | (0x2005U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
	  | (0x2006U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
	 | (0x2007U == (IData)(vlTOPp->NES__DOT__address_cpu)))) {
	if ((1U & (~ ((0x2000U == (IData)(vlTOPp->NES__DOT__address_cpu)) 
		      | (0x778U == (IData)(vlTOPp->NES__DOT__address_cpu)))))) {
	    if ((1U & (~ ((0x2001U == (IData)(vlTOPp->NES__DOT__address_cpu)) 
			  | (0x779U == (IData)(vlTOPp->NES__DOT__address_cpu)))))) {
		if ((0x2002U != (IData)(vlTOPp->NES__DOT__address_cpu))) {
		    if ((0x2003U != (IData)(vlTOPp->NES__DOT__address_cpu))) {
			if ((0x2004U != (IData)(vlTOPp->NES__DOT__address_cpu))) {
			    if ((0x2005U != (IData)(vlTOPp->NES__DOT__address_cpu))) {
				if ((0x2006U != (IData)(vlTOPp->NES__DOT__address_cpu))) {
				    if (vlTOPp->NES__DOT__RWE) {
					vlTOPp->NES__DOT__PPU0__DOT__mem_data_in 
					    = vlTOPp->NES__DOT__data_in;
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__275(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__275\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ALU.v:95
    if (vlTOPp->NES__DOT__Ready) {
	vlTOPp->NES__DOT__CPU0__DOT__AN = (1U & ((IData)(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp) 
						 >> 7U));
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__276(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__276\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ALU.v:95
    if (vlTOPp->NES__DOT__Ready) {
	vlTOPp->NES__DOT__CPU0__DOT__HC = vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_HC;
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__277(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__277\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ALU.v:95
    if (vlTOPp->NES__DOT__Ready) {
	vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__BI7 
	    = (1U & ((IData)(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_BI) 
		     >> 7U));
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__278(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__278\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:1213
    vlTOPp->NES__DOT__CPU0__DOT__NMI_1 = vlTOPp->nmi_interrupt;
}

VL_INLINE_OPT void VNES::_sequent__TOP__279(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__279\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ALU.v:95
    if (vlTOPp->NES__DOT__Ready) {
	vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__AI7 
	    = (1U & ((IData)(vlTOPp->NES__DOT__CPU0__DOT__AI) 
		     >> 7U));
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__280(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__280\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ALU.v:95
    if (vlTOPp->NES__DOT__Ready) {
	vlTOPp->NES__DOT__CPU0__DOT__CO = (1U & (((IData)(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp) 
						  >> 8U) 
						 | ((IData)(vlTOPp->NES__DOT__CPU0__DOT____Vcellinp__ALU__BCD) 
						    & (5U 
						       <= 
						       (7U 
							& ((IData)(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_h) 
							   >> 1U))))));
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__281(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__281\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:625
    if (vlTOPp->NES__DOT__Ready) {
	vlTOPp->NES__DOT__CPU0__DOT__backwards = (1U 
						  & ((IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX) 
						     >> 7U));
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__282(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__282\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:1055
    if (((0xcU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)) 
	 & (IData)(vlTOPp->NES__DOT__Ready))) {
	vlTOPp->NES__DOT__CPU0__DOT__write_back = (
						   (6U 
						    == 
						    (0x87U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))) 
						   | (0xc6U 
						      == 
						      (0xc7U 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))));
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__283(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__283\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:1168
    if (((0xcU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)) 
	 & (IData)(vlTOPp->NES__DOT__Ready))) {
	vlTOPp->NES__DOT__CPU0__DOT__bit_ins = (0x24U 
						== 
						(0xf7U 
						 & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR)));
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__284(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__284\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:1180
    if (((0xcU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)) 
	 & (IData)(vlTOPp->NES__DOT__Ready))) {
	vlTOPp->NES__DOT__CPU0__DOT__cli = (0x58U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR));
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__285(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__285\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:1180
    if (((0xcU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)) 
	 & (IData)(vlTOPp->NES__DOT__Ready))) {
	vlTOPp->NES__DOT__CPU0__DOT__sec = (0x38U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR));
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__286(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__286\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:1180
    if (((0xcU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)) 
	 & (IData)(vlTOPp->NES__DOT__Ready))) {
	vlTOPp->NES__DOT__CPU0__DOT__clc = (0x18U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR));
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__287(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__287\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:1180
    if (((0xcU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)) 
	 & (IData)(vlTOPp->NES__DOT__Ready))) {
	vlTOPp->NES__DOT__CPU0__DOT__sei = (0x78U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR));
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__288(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__288\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:1180
    if (((0xcU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)) 
	 & (IData)(vlTOPp->NES__DOT__Ready))) {
	vlTOPp->NES__DOT__CPU0__DOT__clv = (0xb8U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR));
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__289(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__289\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:1044
    if (((0xcU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)) 
	 & (IData)(vlTOPp->NES__DOT__Ready))) {
	vlTOPp->NES__DOT__CPU0__DOT__store = ((0x84U 
					       == (0xe5U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))) 
					      | (0x81U 
						 == 
						 (0xe3U 
						  & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))));
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__290(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__290\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:973
    if (((0xcU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)) 
	 & (IData)(vlTOPp->NES__DOT__Ready))) {
	vlTOPp->NES__DOT__CPU0__DOT__load_reg = (1U 
						 & ((0x80U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						     ? 
						    ((0x40U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						      ? 
						     ((0x20U 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						       ? 
						      ((0x10U 
							& (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						        ? 
						       ((~ 
							 ((IData)(vlTOPp->NES__DOT__CPU0__DOT__IR) 
							  >> 1U)) 
							& (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						        : 
						       ((8U 
							 & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
							 ? 
							((4U 
							  & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
							  ? 
							 ((~ 
							   ((IData)(vlTOPp->NES__DOT__CPU0__DOT__IR) 
							    >> 1U)) 
							  & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
							  : 
							 (~ 
							  ((IData)(vlTOPp->NES__DOT__CPU0__DOT__IR) 
							   >> 1U)))
							 : 
							((~ 
							  ((IData)(vlTOPp->NES__DOT__CPU0__DOT__IR) 
							   >> 1U)) 
							 & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))))
						       : 
						      ((~ 
							((IData)(vlTOPp->NES__DOT__CPU0__DOT__IR) 
							 >> 4U)) 
						       & (((IData)(vlTOPp->NES__DOT__CPU0__DOT__IR) 
							   >> 3U) 
							  & ((~ 
							      ((IData)(vlTOPp->NES__DOT__CPU0__DOT__IR) 
							       >> 2U)) 
							     & (~ (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))))))
						      : 
						     ((0x20U 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						       ? 
						      ((0x10U 
							& (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						        ? 
						       ((8U 
							 & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
							 ? 
							((4U 
							  & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
							  ? 
							 ((~ 
							   ((IData)(vlTOPp->NES__DOT__CPU0__DOT__IR) 
							    >> 1U)) 
							  | (~ (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR)))
							  : 
							 ((2U 
							   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
							   ? 
							  (~ (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
							   : (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR)))
							 : 
							((4U 
							  & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
							  ? 
							 ((~ 
							   ((IData)(vlTOPp->NES__DOT__CPU0__DOT__IR) 
							    >> 1U)) 
							  | (~ (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR)))
							  : 
							 ((~ 
							   ((IData)(vlTOPp->NES__DOT__CPU0__DOT__IR) 
							    >> 1U)) 
							  & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))))
						        : 
						       ((~ 
							 ((IData)(vlTOPp->NES__DOT__CPU0__DOT__IR) 
							  >> 1U)) 
							| (~ (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))))
						       : 
						      (((IData)(vlTOPp->NES__DOT__CPU0__DOT__IR) 
							>> 3U) 
						       & ((~ 
							   ((IData)(vlTOPp->NES__DOT__CPU0__DOT__IR) 
							    >> 2U)) 
							  & (~ (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))))))
						     : 
						    ((0x10U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						      ? 
						     ((~ 
						       ((IData)(vlTOPp->NES__DOT__CPU0__DOT__IR) 
							>> 1U)) 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						      : 
						     ((8U 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						       ? 
						      ((4U 
							& (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						        ? 
						       ((~ 
							 ((IData)(vlTOPp->NES__DOT__CPU0__DOT__IR) 
							  >> 1U)) 
							& (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))
						        : 
						       ((~ 
							 ((IData)(vlTOPp->NES__DOT__CPU0__DOT__IR) 
							  >> 1U)) 
							| (~ (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))))
						       : 
						      ((~ 
							((IData)(vlTOPp->NES__DOT__CPU0__DOT__IR) 
							 >> 1U)) 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))))));
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__291(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__291\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:1102
    if (((0xcU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)) 
	 & (IData)(vlTOPp->NES__DOT__Ready))) {
	vlTOPp->NES__DOT__CPU0__DOT__shift = ((6U == 
					       (0x87U 
						& (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))) 
					      | (0xaU 
						 == 
						 (0x8fU 
						  & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))));
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__292(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__292\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:1112
    if (((0xcU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)) 
	 & (IData)(vlTOPp->NES__DOT__Ready))) {
	vlTOPp->NES__DOT__CPU0__DOT__compare = (((0xc0U 
						  == 
						  (0xdbU 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))) 
						 | (0xccU 
						    == 
						    (0xdfU 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR)))) 
						| (0xc1U 
						   == 
						   (0xe3U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))));
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__293(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__293\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:492
    vlTOPp->NES__DOT__CPU0__DOT__adj_bcd = ((IData)(vlTOPp->NES__DOT__CPU0__DOT__adc_sbc) 
					    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__D));
}

VL_INLINE_OPT void VNES::_sequent__TOP__294(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__294\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:1093
    if ((((0xcU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)) 
	  | (8U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
	 & (IData)(vlTOPp->NES__DOT__Ready))) {
	vlTOPp->NES__DOT__CPU0__DOT__adc_bcd = ((0x61U 
						 == 
						 (0xe3U 
						  & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR))) 
						& (IData)(vlTOPp->NES__DOT__CPU0__DOT__D));
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__297(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__297\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__DrawY = vlTOPp->NES__DOT__PPU0__DOT__DrawY;
}

VL_INLINE_OPT void VNES::_sequent__TOP__298(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__298\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__DrawX = vlTOPp->NES__DOT__PPU0__DOT__DrawX;
}

VL_INLINE_OPT void VNES::_sequent__TOP__299(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__299\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__sda = vlTOPp->sda;
}

VL_INLINE_OPT void VNES::_sequent__TOP__302(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__302\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__address 
	= vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__address;
}

VL_INLINE_OPT void VNES::_sequent__TOP__303(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__303\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__byte_num_local 
	= vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__byte_num_local;
}

VL_INLINE_OPT void VNES::_sequent__TOP__304(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__304\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__counter 
	= vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__counter;
}

VL_INLINE_OPT void VNES::_sequent__TOP__306(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__306\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__vblank = vlTOPp->NES__DOT__PPU0__DOT__vblank;
}

VL_INLINE_OPT void VNES::_sequent__TOP__307(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__307\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyV 
	= vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyV;
}

VL_INLINE_OPT void VNES::_sequent__TOP__308(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__308\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__done 
	= vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__done;
}

VL_INLINE_OPT void VNES::_sequent__TOP__332(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__332\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at PPU_BG.sv:196
    if (vlTOPp->reset_al) {
	if ((((0xf0U > (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawY)) 
	      | (0x20cU == (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawY))) 
	     & ((0x102U > (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)) 
		| ((0x314U < (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)) 
		   & (0x320U > (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)))))) {
	    if (((0U == (7U & (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX))) 
		 & (0x101U != (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)))) {
		vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_0_curr 
		    = vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_0_next;
	    }
	}
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__333(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__333\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at PPU_BG.sv:196
    if (vlTOPp->reset_al) {
	if ((((0xf0U > (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawY)) 
	      | (0x20cU == (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawY))) 
	     & ((0x102U > (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)) 
		| ((0x314U < (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)) 
		   & (0x320U > (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)))))) {
	    if (((0U == (7U & (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX))) 
		 & (0x101U != (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)))) {
		vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_1_curr 
		    = vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_1_next;
	    }
	}
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__334(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__334\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at hdmi_driver.v:109
    if (vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__reset) {
	vlTOPp->__Vdly__NES__DOT__PPU0__DOT__DrawX = 0U;
	vlTOPp->__Vdly__NES__DOT__PPU0__DOT__DrawY = 0U;
    } else {
	vlTOPp->__Vdly__NES__DOT__PPU0__DOT__DrawX 
	    = (0x3ffU & ((0x31fU == (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX))
			  ? 0U : ((IData)(1U) + (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX))));
	if ((0x31fU == (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX))) {
	    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__DrawY 
		= (0x3ffU & ((0x20cU == (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawY))
			      ? 0U : ((IData)(1U) + (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawY))));
	}
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__335(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__335\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at i2c_master_top.v:40
    if (((((((((0U == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state)) 
	       | (4U == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))) 
	      | (5U == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))) 
	     | (1U == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))) 
	    | (7U == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))) 
	   | (8U == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))) 
	  | (2U == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))) 
	 | (0xbU == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state)))) {
	if ((0U == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))) {
	    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__address = 1U;
	    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__counter = 8U;
	    vlTOPp->scl = 1U;
	    vlTOPp->__Vdly__sda = 1U;
	    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__byte_num_local = 2U;
	    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__done = 0U;
	} else {
	    if ((4U == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))) {
		vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__fail = 0U;
		vlTOPp->__Vdly__sda = 0U;
	    } else {
		if ((5U == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))) {
		    vlTOPp->scl = 0U;
		} else {
		    if ((1U == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))) {
			vlTOPp->__Vdly__sda = (1U & 
					       ((0U 
						 != (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__counter))
						 ? 
						(1U 
						 & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__message) 
						    >> 
						    (7U 
						     & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__counter) 
							- (IData)(1U)))))
						 : 0U));
		    } else {
			if ((7U == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))) {
			    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__counter 
				= (0xfU & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__counter) 
					   - (IData)(1U)));
			    vlTOPp->scl = 1U;
			} else {
			    if ((8U == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))) {
				vlTOPp->scl = 0U;
			    } else {
				if ((2U == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))) {
				    vlTOPp->scl = 1U;
				} else {
				    vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__ack 
					= (1U & (~ (IData)(vlTOPp->sda)));
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	if ((0xcU == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))) {
	    vlTOPp->scl = 0U;
	} else {
	    if ((6U == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))) {
		vlTOPp->scl = 1U;
	    } else {
		if ((0xdU == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))) {
		    vlTOPp->__Vdly__sda = 1U;
		} else {
		    if ((9U == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))) {
			vlTOPp->__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__done 
			    = (1U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__address)
				      ? (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__done)
				      : 1U));
			vlTOPp->__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__address = 0U;
		    } else {
			if ((0xaU == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))) {
			    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__byte_num_local 
				= (7U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__address)
					  ? (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__byte_num_local)
					  : ((IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__byte_num_local) 
					     - (IData)(1U))));
			    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__counter = 8U;
			    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__done = 0U;
			    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__address = 0U;
			} else {
			    if ((3U == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))) {
				vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__fail = 1U;
			    }
			}
		    }
		}
	    }
	}
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__336(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__336\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at PPU_BG.sv:196
    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyV 
	= (0x77ffU & (IData)(vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyV));
    if ((((0x20cU == (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawY)) 
	  & (0x118U < (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX))) 
	 & (0x131U > (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)))) {
	vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyV 
	    = ((0x7ffU & (IData)(vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyV)) 
	       | (0x7800U & (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyT)));
	vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyV 
	    = ((0x7c1fU & (IData)(vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyV)) 
	       | (0x3e0U & (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyT)));
    }
    if (((((~ (IData)(vlTOPp->NES__DOT__RWE)) | (IData)(vlTOPp->NES__DOT__RWE)) 
	  & (0x2007U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
	 & (IData)(vlTOPp->NES__DOT__PPU0__DOT__vblank))) {
	vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyV 
	    = (0x7fffU & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyV) 
			  + ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__ppu_increment)
			      ? 0x20U : 1U)));
    }
    if (vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__loopy_latch) {
	vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyV 
	    = vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyT;
    }
    if (((~ (IData)(vlTOPp->NES__DOT__RWE)) & (0x7d2U 
					       == (IData)(vlTOPp->NES__DOT__address_cpu)))) {
	vlTOPp->__Vdly__NES__DOT__PPU0__DOT__vblank = 0U;
    }
    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__vblank = (
						   ((0xf1U 
						     == (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawY)) 
						    & (1U 
						       == (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX))) 
						   | ((~ 
						       ((0x20cU 
							 == (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawY)) 
							& (1U 
							   == (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)))) 
						      & (IData)(vlTOPp->NES__DOT__PPU0__DOT__vblank)));
    if (vlTOPp->reset_al) {
	if ((((0xf0U > (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawY)) 
	      | (0x20cU == (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawY))) 
	     & ((0x102U > (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)) 
		| ((0x314U < (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)) 
		   & (0x320U > (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)))))) {
	    if (((0U == (7U & (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX))) 
		 & (0x101U != (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)))) {
		if ((0x1fU == (0x1fU & (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyV)))) {
		    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyV 
			= (0x7fe0U & (IData)(vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyV));
		    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyV 
			= ((0x7bffU & (IData)(vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyV)) 
			   | (0x400U & ((~ ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyV) 
					    >> 0xaU)) 
					<< 0xaU)));
		} else {
		    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyV 
			= ((0x7fe0U & (IData)(vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyV)) 
			   | (0x1fU & ((IData)(1U) 
				       + (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyV))));
		}
	    }
	    if ((0x100U == (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX))) {
		if ((7U == (7U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyV) 
				  >> 0xcU)))) {
		    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyV 
			= (0xfffU & (IData)(vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyV));
		    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyV 
			= ((0x7c1fU & (IData)(vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyV)) 
			   | (0x3e0U & (((0x1dU == 
					  (0x1fU & 
					   ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyV) 
					    >> 5U)))
					  ? 0U : ((IData)(1U) 
						  + 
						  ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyV) 
						   >> 5U))) 
					<< 5U)));
		} else {
		    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyV 
			= ((0xfffU & (IData)(vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyV)) 
			   | (0x7000U & (((IData)(1U) 
					  + ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyV) 
					     >> 0xcU)) 
					 << 0xcU)));
		}
	    }
	    if ((0x101U == (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX))) {
		vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyV 
		    = ((0x7bffU & (IData)(vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyV)) 
		       | (0x400U & (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyT)));
		vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyV 
		    = ((0x7fe0U & (IData)(vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyV)) 
		       | (0x1fU & (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyT)));
	    }
	}
    } else {
	vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyV = 0U;
	vlTOPp->__Vdly__NES__DOT__PPU0__DOT__vblank = 1U;
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__337(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__337\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at PPU.sv:122
    if ((1U & (~ (IData)(vlTOPp->reset_al)))) {
	vlTOPp->__Vdly__NES__DOT__PPU0__DOT__PPU_ADDR_FLAG = 0U;
	vlTOPp->__Vdly__NES__DOT__PPU0__DOT__PPU_SCROLL_FLAG = 0U;
	vlTOPp->__Vdly__NES__DOT__PPU0__DOT__PPUSTATUS = 0U;
    }
    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__PPUSTATUS 
	= ((0x7fU & (IData)(vlTOPp->__Vdly__NES__DOT__PPU0__DOT__PPUSTATUS)) 
	   | ((IData)(vlTOPp->NES__DOT__PPU0__DOT__vblank) 
	      << 7U));
    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__PPUSTATUS 
	= ((0xbfU & (IData)(vlTOPp->__Vdly__NES__DOT__PPU0__DOT__PPUSTATUS)) 
	   | (0x40U & ((~ (IData)(vlTOPp->NES__DOT__PPU0__DOT__vblank)) 
		       << 6U)));
    vlTOPp->nmi_interrupt = (1U & ((0x80U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__PPUCTRL) 
					     & (IData)(vlTOPp->NES__DOT__PPU0__DOT__PPUSTATUS)))
				    ? 1U : 0U));
    if ((((((((((0x2000U == (IData)(vlTOPp->NES__DOT__address_cpu)) 
		| (0x778U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
	       | ((0x2001U == (IData)(vlTOPp->NES__DOT__address_cpu)) 
		  | (0x779U == (IData)(vlTOPp->NES__DOT__address_cpu)))) 
	      | (0x2002U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
	     | (0x2003U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
	    | (0x2004U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
	   | (0x2005U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
	  | (0x2006U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
	 | (0x2007U == (IData)(vlTOPp->NES__DOT__address_cpu)))) {
	if (((0x2000U == (IData)(vlTOPp->NES__DOT__address_cpu)) 
	     | (0x778U == (IData)(vlTOPp->NES__DOT__address_cpu)))) {
	    if (vlTOPp->NES__DOT__RWE) {
		vlTOPp->__Vdly__NES__DOT__PPU0__DOT__PPUSTATUS 
		    = ((0xe0U & (IData)(vlTOPp->__Vdly__NES__DOT__PPU0__DOT__PPUSTATUS)) 
		       | (0x1fU & (IData)(vlTOPp->NES__DOT__data_in)));
	    } else {
		vlTOPp->NES__DOT__data_out_ppu = vlTOPp->NES__DOT__PPU0__DOT__PPUCTRL;
	    }
	} else {
	    if (((0x2001U == (IData)(vlTOPp->NES__DOT__address_cpu)) 
		 | (0x779U == (IData)(vlTOPp->NES__DOT__address_cpu)))) {
		if (vlTOPp->NES__DOT__RWE) {
		    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__PPUSTATUS 
			= ((0xe0U & (IData)(vlTOPp->__Vdly__NES__DOT__PPU0__DOT__PPUSTATUS)) 
			   | (0x1fU & (IData)(vlTOPp->NES__DOT__data_in)));
		} else {
		    vlTOPp->NES__DOT__data_out_ppu 
			= vlTOPp->NES__DOT__PPU0__DOT__PPUMASK;
		}
	    } else {
		if ((0x2002U == (IData)(vlTOPp->NES__DOT__address_cpu))) {
		    if ((1U & (~ (IData)(vlTOPp->NES__DOT__RWE)))) {
			vlTOPp->__Vdly__NES__DOT__PPU0__DOT__PPU_SCROLL_FLAG = 0U;
			vlTOPp->NES__DOT__data_out_ppu 
			    = vlTOPp->NES__DOT__PPU0__DOT__PPUSTATUS;
		    }
		} else {
		    if ((0x2003U == (IData)(vlTOPp->NES__DOT__address_cpu))) {
			if (vlTOPp->NES__DOT__RWE) {
			    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__PPUSTATUS 
				= ((0xe0U & (IData)(vlTOPp->__Vdly__NES__DOT__PPU0__DOT__PPUSTATUS)) 
				   | (0x1fU & (IData)(vlTOPp->NES__DOT__data_in)));
			} else {
			    vlTOPp->NES__DOT__data_out_ppu 
				= vlTOPp->NES__DOT__PPU0__DOT__OAMADDR;
			}
		    } else {
			if ((0x2004U == (IData)(vlTOPp->NES__DOT__address_cpu))) {
			    if (vlTOPp->NES__DOT__RWE) {
				vlTOPp->__Vdly__NES__DOT__PPU0__DOT__PPUSTATUS 
				    = ((0xe0U & (IData)(vlTOPp->__Vdly__NES__DOT__PPU0__DOT__PPUSTATUS)) 
				       | (0x1fU & (IData)(vlTOPp->NES__DOT__data_in)));
			    } else {
				vlTOPp->NES__DOT__data_out_ppu 
				    = vlTOPp->NES__DOT__PPU0__DOT__OAMDATA;
			    }
			} else {
			    if ((0x2005U == (IData)(vlTOPp->NES__DOT__address_cpu))) {
				if (((IData)(vlTOPp->NES__DOT__RWE) 
				     & (~ (IData)(vlTOPp->NES__DOT__PPU0__DOT__PPU_SCROLL_FLAG)))) {
				    vlTOPp->__Vdly__NES__DOT__PPUSCROLL 
					= ((0xff00U 
					    & (IData)(vlTOPp->__Vdly__NES__DOT__PPUSCROLL)) 
					   | (IData)(vlTOPp->NES__DOT__data_in));
				    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__PPU_SCROLL_FLAG = 1U;
				    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__PPUSTATUS 
					= ((0xe0U & (IData)(vlTOPp->__Vdly__NES__DOT__PPU0__DOT__PPUSTATUS)) 
					   | (0x1fU 
					      & (IData)(vlTOPp->NES__DOT__data_in)));
				} else {
				    if (((IData)(vlTOPp->NES__DOT__RWE) 
					 & (IData)(vlTOPp->NES__DOT__PPU0__DOT__PPU_SCROLL_FLAG))) {
					vlTOPp->__Vdly__NES__DOT__PPUSCROLL 
					    = ((0xffU 
						& (IData)(vlTOPp->__Vdly__NES__DOT__PPUSCROLL)) 
					       | ((IData)(vlTOPp->NES__DOT__data_in) 
						  << 8U));
					vlTOPp->__Vdly__NES__DOT__PPU0__DOT__PPU_SCROLL_FLAG = 0U;
					vlTOPp->__Vdly__NES__DOT__PPU0__DOT__PPUSTATUS 
					    = (0x1fU 
					       & (IData)(vlTOPp->NES__DOT__data_in));
				    } else {
					vlTOPp->__Vdly__NES__DOT__PPUSCROLL 
					    = vlTOPp->NES__DOT__PPUSCROLL;
				    }
				}
			    } else {
				if ((0x2006U == (IData)(vlTOPp->NES__DOT__address_cpu))) {
				    if (((IData)(vlTOPp->NES__DOT__RWE) 
					 & (~ (IData)(vlTOPp->NES__DOT__PPU0__DOT__PPU_ADDR_FLAG)))) {
					vlTOPp->__Vdly__NES__DOT__PPU0__DOT__PPUADDR 
					    = ((0xffU 
						& (IData)(vlTOPp->__Vdly__NES__DOT__PPU0__DOT__PPUADDR)) 
					       | ((IData)(vlTOPp->NES__DOT__data_in) 
						  << 8U));
					vlTOPp->__Vdly__NES__DOT__PPU0__DOT__PPU_ADDR_FLAG = 1U;
					vlTOPp->__Vdly__NES__DOT__PPU0__DOT__PPUSTATUS 
					    = ((0xe0U 
						& (IData)(vlTOPp->__Vdly__NES__DOT__PPU0__DOT__PPUSTATUS)) 
					       | (0x1fU 
						  & (IData)(vlTOPp->NES__DOT__data_in)));
				    } else {
					if (((IData)(vlTOPp->NES__DOT__RWE) 
					     & (IData)(vlTOPp->NES__DOT__PPU0__DOT__PPU_ADDR_FLAG))) {
					    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__PPUADDR 
						= (
						   (0xff00U 
						    & (IData)(vlTOPp->__Vdly__NES__DOT__PPU0__DOT__PPUADDR)) 
						   | (IData)(vlTOPp->NES__DOT__data_in));
					    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__PPU_ADDR_FLAG = 0U;
					    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__PPUSTATUS 
						= (
						   (0xe0U 
						    & (IData)(vlTOPp->__Vdly__NES__DOT__PPU0__DOT__PPUSTATUS)) 
						   | (0x1fU 
						      & (IData)(vlTOPp->NES__DOT__data_in)));
					}
				    }
				} else {
				    vlTOPp->__Vdly__NES__DOT__PPU0__DOT__PPUADDR 
					= (0xffffU 
					   & ((4U & (IData)(vlTOPp->NES__DOT__PPU0__DOT__PPUCTRL))
					       ? ((IData)(0x20U) 
						  + (IData)(vlTOPp->NES__DOT__PPU0__DOT__PPUADDR))
					       : ((IData)(1U) 
						  + (IData)(vlTOPp->NES__DOT__PPU0__DOT__PPUADDR))));
				    if (vlTOPp->NES__DOT__RWE) {
					vlTOPp->NES__DOT__PPU0__DOT__ppu_w_address 
					    = vlTOPp->NES__DOT__PPU0__DOT__PPUADDR;
					vlTOPp->__Vdly__NES__DOT__PPU0__DOT__PPUSTATUS 
					    = ((0xe0U 
						& (IData)(vlTOPp->__Vdly__NES__DOT__PPU0__DOT__PPUSTATUS)) 
					       | (0x1fU 
						  & (IData)(vlTOPp->NES__DOT__data_in)));
				    } else {
					vlTOPp->NES__DOT__data_out_ppu 
					    = vlTOPp->NES__DOT__PPU0__DOT__mem_data_out;
					vlTOPp->__Vdly__NES__DOT__PPU0__DOT__ppu_reg_r_address 
					    = vlTOPp->NES__DOT__PPU0__DOT__PPUADDR;
					vlTOPp->__Vdly__NES__DOT__PPU0__DOT__PPUSTATUS 
					    = ((0xe0U 
						& (IData)(vlTOPp->__Vdly__NES__DOT__PPU0__DOT__PPUSTATUS)) 
					       | (0x1fU 
						  & (IData)(vlTOPp->NES__DOT__data_in)));
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	vlTOPp->__Vdly__NES__DOT__PPUSCROLL = vlTOPp->NES__DOT__PPUSCROLL;
	vlTOPp->NES__DOT__data_out_ppu = 0U;
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__338(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__338\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:1084
    if ((((0xcU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)) 
	  | (8U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
	 & (IData)(vlTOPp->NES__DOT__Ready))) {
	vlTOPp->NES__DOT__CPU0__DOT__adc_sbc = (0x61U 
						== 
						(0x63U 
						 & (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR)));
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__339(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__339\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:808
    if ((0x27U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) {
	vlTOPp->NES__DOT__CPU0__DOT__D = (1U & ((IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX) 
						>> 3U));
    } else {
	if ((0xcU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) {
	    if (vlTOPp->NES__DOT__CPU0__DOT__sed) {
		vlTOPp->NES__DOT__CPU0__DOT__D = 1U;
	    }
	    if (vlTOPp->NES__DOT__CPU0__DOT__cld) {
		vlTOPp->NES__DOT__CPU0__DOT__D = 0U;
	    }
	    if (vlTOPp->NES__DOT__CPU0__DOT__plp) {
		vlTOPp->NES__DOT__CPU0__DOT__D = (1U 
						  & ((IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD) 
						     >> 3U));
	    }
	}
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__340(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__340\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__loopy_latch 
	= vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__loopy_latch;
}

VL_INLINE_OPT void VNES::_sequent__TOP__341(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__341\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_1_next 
	= vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_1_next;
}

VL_INLINE_OPT void VNES::_sequent__TOP__342(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__342\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_0_next 
	= vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_0_next;
}

VL_INLINE_OPT void VNES::_sequent__TOP__344(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__344\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sda = vlTOPp->__Vdly__sda;
}

VL_INLINE_OPT void VNES::_sequent__TOP__346(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__346\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyT = vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyT;
}

VL_INLINE_OPT void VNES::_sequent__TOP__347(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__347\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__address 
	= vlTOPp->__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__address;
}

VL_INLINE_OPT void VNES::_sequent__TOP__349(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__349\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__byte_num_local 
	= vlTOPp->__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__byte_num_local;
}

VL_INLINE_OPT void VNES::_sequent__TOP__350(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__350\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__counter 
	= vlTOPp->__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__counter;
}

VL_INLINE_OPT void VNES::_sequent__TOP__351(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__351\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->NES__DOT__PPU0__DOT__DrawY = vlTOPp->__Vdly__NES__DOT__PPU0__DOT__DrawY;
}

VL_INLINE_OPT void VNES::_sequent__TOP__354(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__354\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyV = vlTOPp->__Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyV;
}

VL_INLINE_OPT void VNES::_sequent__TOP__356(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__356\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__done = vlTOPp->__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__done;
}

VL_INLINE_OPT void VNES::_sequent__TOP__360(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__360\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->NES__DOT__PPU0__DOT__PPUADDR = vlTOPp->__Vdly__NES__DOT__PPU0__DOT__PPUADDR;
}

VL_INLINE_OPT void VNES::_sequent__TOP__361(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__361\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->NES__DOT__PPUSCROLL = vlTOPp->__Vdly__NES__DOT__PPUSCROLL;
}

VL_INLINE_OPT void VNES::_sequent__TOP__363(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__363\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->NES__DOT__PPU0__DOT__PPUSTATUS = vlTOPp->__Vdly__NES__DOT__PPU0__DOT__PPUSTATUS;
}

VL_INLINE_OPT void VNES::_sequent__TOP__364(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__364\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->NES__DOT__PPU0__DOT__PPU_SCROLL_FLAG = vlTOPp->__Vdly__NES__DOT__PPU0__DOT__PPU_SCROLL_FLAG;
}

VL_INLINE_OPT void VNES::_sequent__TOP__365(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__365\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->NES__DOT__PPU0__DOT__PPU_ADDR_FLAG = vlTOPp->__Vdly__NES__DOT__PPU0__DOT__PPU_ADDR_FLAG;
}

VL_INLINE_OPT void VNES::_sequent__TOP__377(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__377\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VGA_VS = ((0x1eaU <= (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawY)) 
		      & (0x1ecU > (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawY)));
}

VL_INLINE_OPT void VNES::_sequent__TOP__378(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__378\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at PPU_BG.sv:105
    vlTOPp->nt_bit = (1U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyT) 
			    >> 0xaU));
}

VL_INLINE_OPT void VNES::_sequent__TOP__381(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__381\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at i2c_master_top.v:40
    vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state 
	= ((IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__reset)
	    ? 0U : (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__next_state));
}

VL_INLINE_OPT void VNES::_sequent__TOP__382(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__382\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at PPU_BG.sv:118
    if (vlTOPp->reset_al) {
	if (((IData)(vlTOPp->NES__DOT__RWE) & (0x2000U 
					       == (IData)(vlTOPp->NES__DOT__address_cpu)))) {
	    vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__ppu_increment 
		= (1U & ((IData)(vlTOPp->NES__DOT__data_in) 
			 >> 2U));
	}
    } else {
	vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__ppu_increment = 0U;
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__384(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__384\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->NES__DOT__CPU0__DOT__P = (0x30U | (((IData)(vlTOPp->NES__DOT__CPU0__DOT__N) 
						<< 7U) 
					       | (((IData)(vlTOPp->NES__DOT__CPU0__DOT__V) 
						   << 6U) 
						  | (((IData)(vlTOPp->NES__DOT__CPU0__DOT__D) 
						      << 3U) 
						     | (((IData)(vlTOPp->NES__DOT__CPU0__DOT__I) 
							 << 2U) 
							| (((IData)(vlTOPp->NES__DOT__CPU0__DOT__Z) 
							    << 1U) 
							   | (IData)(vlTOPp->NES__DOT__CPU0__DOT__C)))))));
}

VL_INLINE_OPT void VNES::_sequent__TOP__385(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__385\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at PPU.sv:122
    if ((((((((((0x2000U == (IData)(vlTOPp->NES__DOT__address_cpu)) 
		| (0x778U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
	       | ((0x2001U == (IData)(vlTOPp->NES__DOT__address_cpu)) 
		  | (0x779U == (IData)(vlTOPp->NES__DOT__address_cpu)))) 
	      | (0x2002U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
	     | (0x2003U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
	    | (0x2004U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
	   | (0x2005U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
	  | (0x2006U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
	 | (0x2007U == (IData)(vlTOPp->NES__DOT__address_cpu)))) {
	if ((1U & (~ ((0x2000U == (IData)(vlTOPp->NES__DOT__address_cpu)) 
		      | (0x778U == (IData)(vlTOPp->NES__DOT__address_cpu)))))) {
	    if ((1U & (~ ((0x2001U == (IData)(vlTOPp->NES__DOT__address_cpu)) 
			  | (0x779U == (IData)(vlTOPp->NES__DOT__address_cpu)))))) {
		if ((0x2002U != (IData)(vlTOPp->NES__DOT__address_cpu))) {
		    if ((0x2003U == (IData)(vlTOPp->NES__DOT__address_cpu))) {
			if (vlTOPp->NES__DOT__RWE) {
			    vlTOPp->NES__DOT__PPU0__DOT__OAMADDR 
				= vlTOPp->NES__DOT__data_in;
			}
		    }
		}
	    }
	}
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__386(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__386\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at PPU.sv:122
    if ((((((((((0x2000U == (IData)(vlTOPp->NES__DOT__address_cpu)) 
		| (0x778U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
	       | ((0x2001U == (IData)(vlTOPp->NES__DOT__address_cpu)) 
		  | (0x779U == (IData)(vlTOPp->NES__DOT__address_cpu)))) 
	      | (0x2002U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
	     | (0x2003U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
	    | (0x2004U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
	   | (0x2005U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
	  | (0x2006U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
	 | (0x2007U == (IData)(vlTOPp->NES__DOT__address_cpu)))) {
	if ((1U & (~ ((0x2000U == (IData)(vlTOPp->NES__DOT__address_cpu)) 
		      | (0x778U == (IData)(vlTOPp->NES__DOT__address_cpu)))))) {
	    if (((0x2001U == (IData)(vlTOPp->NES__DOT__address_cpu)) 
		 | (0x779U == (IData)(vlTOPp->NES__DOT__address_cpu)))) {
		if (vlTOPp->NES__DOT__RWE) {
		    vlTOPp->NES__DOT__PPU0__DOT__PPUMASK 
			= vlTOPp->NES__DOT__data_in;
		}
	    }
	}
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__387(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__387\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at PPU.sv:122
    if ((((((((((0x2000U == (IData)(vlTOPp->NES__DOT__address_cpu)) 
		| (0x778U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
	       | ((0x2001U == (IData)(vlTOPp->NES__DOT__address_cpu)) 
		  | (0x779U == (IData)(vlTOPp->NES__DOT__address_cpu)))) 
	      | (0x2002U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
	     | (0x2003U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
	    | (0x2004U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
	   | (0x2005U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
	  | (0x2006U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
	 | (0x2007U == (IData)(vlTOPp->NES__DOT__address_cpu)))) {
	if (((0x2000U == (IData)(vlTOPp->NES__DOT__address_cpu)) 
	     | (0x778U == (IData)(vlTOPp->NES__DOT__address_cpu)))) {
	    if (vlTOPp->NES__DOT__RWE) {
		vlTOPp->NES__DOT__PPU0__DOT__PPUCTRL 
		    = vlTOPp->NES__DOT__data_in;
	    }
	}
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__388(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__388\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at PPU.sv:122
    if ((((((((((0x2000U == (IData)(vlTOPp->NES__DOT__address_cpu)) 
		| (0x778U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
	       | ((0x2001U == (IData)(vlTOPp->NES__DOT__address_cpu)) 
		  | (0x779U == (IData)(vlTOPp->NES__DOT__address_cpu)))) 
	      | (0x2002U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
	     | (0x2003U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
	    | (0x2004U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
	   | (0x2005U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
	  | (0x2006U == (IData)(vlTOPp->NES__DOT__address_cpu))) 
	 | (0x2007U == (IData)(vlTOPp->NES__DOT__address_cpu)))) {
	if ((1U & (~ ((0x2000U == (IData)(vlTOPp->NES__DOT__address_cpu)) 
		      | (0x778U == (IData)(vlTOPp->NES__DOT__address_cpu)))))) {
	    if ((1U & (~ ((0x2001U == (IData)(vlTOPp->NES__DOT__address_cpu)) 
			  | (0x779U == (IData)(vlTOPp->NES__DOT__address_cpu)))))) {
		if ((0x2002U != (IData)(vlTOPp->NES__DOT__address_cpu))) {
		    if ((0x2003U != (IData)(vlTOPp->NES__DOT__address_cpu))) {
			if ((0x2004U == (IData)(vlTOPp->NES__DOT__address_cpu))) {
			    if (vlTOPp->NES__DOT__RWE) {
				vlTOPp->NES__DOT__PPU0__DOT__OAMDATA 
				    = vlTOPp->NES__DOT__data_in;
			    }
			}
		    }
		}
	    }
	}
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__389(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__389\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at test_ppu_memory.sv:18
    vlTOPp->NES__DOT__PPU0__DOT__mem_data_out = vlTOPp->NES__DOT__PPU0__DOT__MEM1__DOT__ppu_mem_array
	[(0x3fffU & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__vblank)
		      ? (IData)(vlTOPp->NES__DOT__PPU0__DOT__ppu_reg_r_address)
		      : (((0x101U < (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)) 
			  & (0x140U > (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)))
			  ? (IData)(vlTOPp->NES__DOT__PPU0__DOT__sprite_address)
			  : ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__mem_fetch)
			      ? (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__ppu_r_addr_q)
			      : (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__palette_mem_address)))))];
}

VL_INLINE_OPT void VNES::_sequent__TOP__390(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__390\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->NES__DOT__data_out = ((IData)(vlTOPp->NES__DOT__ppu_rwe)
				   ? (IData)(vlTOPp->NES__DOT__data_out_ppu)
				   : (IData)(vlTOPp->NES__DOT__data_out_mem));
}

VL_INLINE_OPT void VNES::_sequent__TOP__391(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__391\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ALU.v:95
    if (vlTOPp->NES__DOT__Ready) {
	vlTOPp->NES__DOT__CPU0__DOT__ADD = (0xffU & (IData)(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp));
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__392(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__392\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:1180
    if (((0xcU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)) 
	 & (IData)(vlTOPp->NES__DOT__Ready))) {
	vlTOPp->NES__DOT__CPU0__DOT__cld = (0xd8U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR));
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__393(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__393\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:1180
    if (((0xcU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)) 
	 & (IData)(vlTOPp->NES__DOT__Ready))) {
	vlTOPp->NES__DOT__CPU0__DOT__sed = (0xf8U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR));
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__394(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__394\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:1180
    if (((0xcU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)) 
	 & (IData)(vlTOPp->NES__DOT__Ready))) {
	vlTOPp->NES__DOT__CPU0__DOT__plp = (0x28U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__IR));
    }
}

VL_INLINE_OPT void VNES::_combo__TOP__396(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_combo__TOP__396\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__reset = vlTOPp->reset_al;
}

VL_INLINE_OPT void VNES::_sequent__TOP__398(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__398\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at hdmi_driver.v:87
    vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__byte_lut_next 
	= (0xffU & ((IData)(1U) + (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__byte_lut)));
}

VL_INLINE_OPT void VNES::_sequent__TOP__403(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__403\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->NES__DOT__PPU0__DOT__ppu_reg_r_address 
	= vlTOPp->__Vdly__NES__DOT__PPU0__DOT__ppu_reg_r_address;
}

VL_INLINE_OPT void VNES::_sequent__TOP__407(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__407\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->NES__DOT__PPU0__DOT__vblank = vlTOPp->__Vdly__NES__DOT__PPU0__DOT__vblank;
}

VL_INLINE_OPT void VNES::_sequent__TOP__408(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__408\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYSPOST at test_ppu_memory.sv:20
    if (vlTOPp->__Vdlyvset__NES__DOT__PPU0__DOT__MEM1__DOT__ppu_mem_array__v0) {
	vlTOPp->NES__DOT__PPU0__DOT__MEM1__DOT__ppu_mem_array[vlTOPp->__Vdlyvdim0__NES__DOT__PPU0__DOT__MEM1__DOT__ppu_mem_array__v0] 
	    = vlTOPp->__Vdlyvval__NES__DOT__PPU0__DOT__MEM1__DOT__ppu_mem_array__v0;
    }
}

VL_INLINE_OPT void VNES::_sequent__TOP__410(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__410\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->NES__DOT__PPU0__DOT__DrawX = vlTOPp->__Vdly__NES__DOT__PPU0__DOT__DrawX;
}

VL_INLINE_OPT void VNES::_combo__TOP__412(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_combo__TOP__412\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->NES__DOT__Ready = (1U & ((IData)(vlTOPp->NES__DOT__OAM_en)
				      ? 0U : (IData)(vlTOPp->ready_in)));
}

VL_INLINE_OPT void VNES::_sequent__TOP__413(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__413\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->NES__DOT__CPU0__DOT__state = vlTOPp->__Vdly__NES__DOT__CPU0__DOT__state;
}

VL_INLINE_OPT void VNES::_sequent__TOP__414(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__414\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at i2c_master_top.v:106
    vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__next_state 
	= (0x1fU & (((((((((0U == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state)) 
			   | (4U == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))) 
			  | (5U == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))) 
			 | (1U == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))) 
			| (0xeU == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))) 
		       | (7U == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))) 
		      | (8U == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))) 
		     | (2U == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state)))
		     ? ((0U == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))
			 ? 4U : ((4U == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))
				  ? 5U : ((5U == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))
					   ? 1U : (
						   (1U 
						    == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))
						    ? 
						   ((0U 
						     == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__counter))
						     ? 2U
						     : 0xeU)
						    : 
						   ((0xeU 
						     == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))
						     ? 7U
						     : 
						    ((7U 
						      == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))
						      ? 8U
						      : 
						     ((8U 
						       == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))
						       ? 1U
						       : 0xbU)))))))
		     : ((0xbU == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))
			 ? 0xcU : ((0xcU == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))
				    ? ((IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__ack)
				        ? 9U : 3U) : 
				   ((9U == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))
				     ? 0xaU : ((0xaU 
						== (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))
					        ? (
						   (0U 
						    == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__byte_num_local))
						    ? 6U
						    : 1U)
					        : (
						   (6U 
						    == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))
						    ? 0xdU
						    : 
						   ((0xdU 
						     == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))
						     ? 0U
						     : 
						    ((3U 
						      == (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state))
						      ? 3U
						      : 0U)))))))));
}

VL_INLINE_OPT void VNES::_sequent__TOP__416(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__416\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__byte_lut 
	= vlTOPp->__Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__byte_lut;
}

VL_INLINE_OPT void VNES::_sequent__TOP__417(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__417\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VGA_HS = ((0x290U <= (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)) 
		      & (0x2f0U > (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)));
}

VL_INLINE_OPT void VNES::_sequent__TOP__418(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__418\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at PPU_BG.sv:272
    vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__mem_fetch 
	= ((0U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))) 
	   | (((1U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))) 
	       | (2U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U)))) 
	      | (((3U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))) 
		  | (4U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U)))) 
		 | (((5U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))) 
		     | (6U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U)))) 
		    | ((7U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))) 
		       | (8U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))))))));
}

VL_INLINE_OPT void VNES::_sequent__TOP__419(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__419\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at PPU_BG.sv:272
    vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__ALE = ((0U 
						   != 
						   VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))) 
						  & (((1U 
						       == 
						       VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))) 
						      | (2U 
							 == 
							 VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U)))) 
						     | (((3U 
							  == 
							  VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))) 
							 | (4U 
							    == 
							    VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U)))) 
							| (((5U 
							     == 
							     VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))) 
							    | (6U 
							       == 
							       VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U)))) 
							   | ((7U 
							       == 
							       VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))) 
							      | (8U 
								 == 
								 VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))))))));
}

VL_INLINE_OPT void VNES::_sequent__TOP__420(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__420\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at hdmi_driver.v:121
    vlTOPp->Draw_enable = ((0x280U >= (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)) 
			   & (0x1e0U >= (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawY)));
}

VL_INLINE_OPT void VNES::_sequent__TOP__421(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__421\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:446
    vlTOPp->__Vtableidx3 = (((IData)(vlTOPp->NES__DOT__CPU0__DOT__store) 
			     << 6U) | (IData)(vlTOPp->NES__DOT__CPU0__DOT__state));
    vlTOPp->NES__DOT__RWE = vlTOPp->__Vtable3_NES__DOT__RWE
	[vlTOPp->__Vtableidx3];
}

VL_INLINE_OPT void VNES::_sequent__TOP__422(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__422\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:474
    vlTOPp->__Vtableidx4 = (((IData)(vlTOPp->NES__DOT__CPU0__DOT__plp) 
			     << 7U) | (((IData)(vlTOPp->NES__DOT__CPU0__DOT__load_reg) 
					<< 6U) | (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)));
    vlTOPp->NES__DOT__CPU0__DOT__write_register = vlTOPp->__Vtable4_NES__DOT__CPU0__DOT__write_register
	[vlTOPp->__Vtableidx4];
}

VL_INLINE_OPT void VNES::_combo__TOP__423(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_combo__TOP__423\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at PPU_BG.sv:272
    vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap[7U] 
	= ((2U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_1_curr) 
		  << 1U)) | (1U & (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_0_curr)));
    vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap[6U] 
	= ((2U & (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_1_curr)) 
	   | (1U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_0_curr) 
		    >> 1U)));
    vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap[5U] 
	= ((2U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_1_curr) 
		  >> 1U)) | (1U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_0_curr) 
				   >> 2U)));
    vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap[4U] 
	= ((2U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_1_curr) 
		  >> 2U)) | (1U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_0_curr) 
				   >> 3U)));
    vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap[3U] 
	= ((2U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_1_curr) 
		  >> 3U)) | (1U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_0_curr) 
				   >> 4U)));
    vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap[2U] 
	= ((2U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_1_curr) 
		  >> 4U)) | (1U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_0_curr) 
				   >> 5U)));
    vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap[1U] 
	= ((2U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_1_curr) 
		  >> 5U)) | (1U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_0_curr) 
				   >> 6U)));
    vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap[0U] 
	= ((2U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_1_curr) 
		  >> 6U)) | (1U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_0_curr) 
				   >> 7U)));
    vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__current_px 
	= vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap
	[vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap_index];
    vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap_index 
	= (7U & VL_MODDIV_III(32, ((IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX) 
				   - (IData)(1U)), (IData)(8U)));
}

VL_INLINE_OPT void VNES::_multiclk__TOP__424(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_multiclk__TOP__424\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at PPU_BG.sv:272
    vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__nt_address 
	= (0x2000U | (0xfffU & (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyV)));
    vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__at_address 
	= (0x23c0U | (((0xc00U & (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyV)) 
		       | (0x38U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyV) 
				   >> 4U))) | (7U & 
					       ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyV) 
						>> 2U))));
    vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__ppu_r_addr_q 
	= (0xffffU & ((0U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U)))
		       ? 0U : (((1U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))) 
				| (2U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))))
			        ? (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__nt_address)
			        : (((3U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))) 
				    | (4U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))))
				    ? (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__at_address)
				    : (((5U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))) 
					| (6U == VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))))
				        ? (0x1000U 
					   | (((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__nametable_byte_next) 
					       << 4U) 
					      | (7U 
						 & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyV) 
						    >> 0xcU))))
				        : (((7U == 
					     VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))) 
					    | (8U == 
					       VL_MODDIV_III(32, (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX), (IData)(8U))))
					    ? (0x1000U 
					       | ((IData)(8U) 
						  + 
						  (((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__nametable_byte_next) 
						    << 4U) 
						   + 
						   (7U 
						    & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyV) 
						       >> 0xcU)))))
					    : 0U))))));
}

VL_INLINE_OPT void VNES::_sequent__TOP__425(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__425\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:324
    vlTOPp->__Vtableidx2 = (((IData)(vlTOPp->NES__DOT__CPU0__DOT__backwards) 
			     << 9U) | (((IData)(vlTOPp->NES__DOT__CPU0__DOT__CO) 
					<< 8U) | (((IData)(vlTOPp->NES__DOT__CPU0__DOT__NMI_edge) 
						   << 7U) 
						  | (((IData)(vlTOPp->NES__DOT__CPU0__DOT__I) 
						      << 6U) 
						     | (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)))));
    vlTOPp->NES__DOT__CPU0__DOT__PC_inc = vlTOPp->__Vtable2_NES__DOT__CPU0__DOT__PC_inc
	[vlTOPp->__Vtableidx2];
}

VL_INLINE_OPT void VNES::_sequent__TOP__426(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__426\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->NES__DOT__CPU0__DOT____Vcellinp__ALU__BCD 
	= ((IData)(vlTOPp->NES__DOT__CPU0__DOT__adc_bcd) 
	   & (0xdU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)));
}

VL_INLINE_OPT void VNES::_sequent__TOP__427(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__427\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:615
    vlTOPp->NES__DOT__CPU0__DOT__alu_shift_right = 
	((((0xdU == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)) 
	   | (0x24U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
	  | (0x23U == (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))) 
	 & (IData)(vlTOPp->NES__DOT__CPU0__DOT__shift_right));
}

VL_INLINE_OPT void VNES::_sequent__TOP__428(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__428\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:708
    vlTOPp->NES__DOT__CPU0__DOT__CI = (1U & ((0x20U 
					      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
					      ? ((~ 
						  ((IData)(vlTOPp->NES__DOT__CPU0__DOT__state) 
						   >> 4U)) 
						 & ((8U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 
						    ((~ 
						      ((IData)(vlTOPp->NES__DOT__CPU0__DOT__state) 
						       >> 2U)) 
						     & ((IData)(vlTOPp->NES__DOT__CPU0__DOT__state) 
							>> 1U))
						     : 
						    ((4U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? 
						     (((IData)(vlTOPp->NES__DOT__CPU0__DOT__state) 
						       >> 1U) 
						      | ((IData)(vlTOPp->NES__DOT__CPU0__DOT__state) 
							 | ((IData)(vlTOPp->NES__DOT__CPU0__DOT__rotate)
							     ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__C)
							     : 
							    ((IData)(vlTOPp->NES__DOT__CPU0__DOT__shift)
							      ? 0U
							      : (IData)(vlTOPp->NES__DOT__CPU0__DOT__inc)))))
						      : 
						     (((IData)(vlTOPp->NES__DOT__CPU0__DOT__state) 
						       >> 1U) 
						      & ((IData)(vlTOPp->NES__DOT__CPU0__DOT__state) 
							 & ((IData)(vlTOPp->NES__DOT__CPU0__DOT__rotate)
							     ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__C)
							     : 
							    ((IData)(vlTOPp->NES__DOT__CPU0__DOT__shift)
							      ? 0U
							      : (IData)(vlTOPp->NES__DOT__CPU0__DOT__inc))))))))
					      : ((0x10U 
						  & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						  ? 
						 ((8U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  (((IData)(vlTOPp->NES__DOT__CPU0__DOT__state) 
						    >> 2U) 
						   & (((IData)(vlTOPp->NES__DOT__CPU0__DOT__state) 
						       >> 1U) 
						      & (~ (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))))
						   : 
						  ((4U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   ((~ 
						     ((IData)(vlTOPp->NES__DOT__CPU0__DOT__state) 
						      >> 1U)) 
						    & ((~ (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)) 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__CO)))
						    : 
						   (((IData)(vlTOPp->NES__DOT__CPU0__DOT__state) 
						     >> 1U) 
						    & (~ (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)))))
						  : 
						 ((8U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  (((IData)(vlTOPp->NES__DOT__CPU0__DOT__state) 
						    >> 2U) 
						   & ((2U 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						       ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)
						       : 
						      ((IData)(vlTOPp->NES__DOT__CPU0__DOT__state) 
						       & ((IData)(vlTOPp->NES__DOT__CPU0__DOT__rotate)
							   ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__C)
							   : 
							  ((IData)(vlTOPp->NES__DOT__CPU0__DOT__compare)
							    ? 1U
							    : 
							   (((IData)(vlTOPp->NES__DOT__CPU0__DOT__shift) 
							     | (IData)(vlTOPp->NES__DOT__CPU0__DOT__load_only))
							     ? 0U
							     : (IData)(vlTOPp->NES__DOT__CPU0__DOT__C)))))))
						   : 
						  ((4U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   (((IData)(vlTOPp->NES__DOT__CPU0__DOT__state) 
						     >> 1U) 
						    & ((~ (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)) 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__CO)))
						    : 
						   (((IData)(vlTOPp->NES__DOT__CPU0__DOT__state) 
						     >> 1U) 
						    & ((IData)(vlTOPp->NES__DOT__CPU0__DOT__state) 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__CO))))))));
}

VL_INLINE_OPT void VNES::_sequent__TOP__429(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__429\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:589
    vlTOPp->__Vtableidx6 = (((IData)(vlTOPp->NES__DOT__CPU0__DOT__backwards) 
			     << 0xaU) | (((IData)(vlTOPp->NES__DOT__CPU0__DOT__op) 
					  << 6U) | (IData)(vlTOPp->NES__DOT__CPU0__DOT__state)));
    vlTOPp->NES__DOT__CPU0__DOT__alu_op = vlTOPp->__Vtable6_NES__DOT__CPU0__DOT__alu_op
	[vlTOPp->__Vtableidx6];
}

VL_INLINE_OPT void VNES::_sequent__TOP__430(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__430\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:541
    vlTOPp->__Vtableidx5 = (((IData)(vlTOPp->NES__DOT__CPU0__DOT__dst_reg) 
			     << 9U) | (((IData)(vlTOPp->NES__DOT__CPU0__DOT__index_y) 
					<< 8U) | (((IData)(vlTOPp->NES__DOT__CPU0__DOT__src_reg) 
						   << 6U) 
						  | (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))));
    vlTOPp->NES__DOT__CPU0__DOT__regsel = vlTOPp->__Vtable5_NES__DOT__CPU0__DOT__regsel
	[vlTOPp->__Vtableidx5];
}

VL_INLINE_OPT void VNES::_combo__TOP__431(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_combo__TOP__431\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->NES__DOT__CPU0__DOT__DIMUX = ((IData)(vlTOPp->NES__DOT__Ready)
					   ? (IData)(vlTOPp->NES__DOT__data_out)
					   : (IData)(vlTOPp->NES__DOT__CPU0__DOT__DIHOLD));
}

VL_INLINE_OPT void VNES::_sequent__TOP__432(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__432\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at reg_lut.v:7
    vlTOPp->__Vtableidx1 = vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__byte_lut;
    vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__data = 
	vlTOPp->__Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data
	[vlTOPp->__Vtableidx1];
}

VL_INLINE_OPT void VNES::_combo__TOP__433(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_combo__TOP__433\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->NES__DOT__CPU0__DOT__IR = ((1U & ((~ (IData)(vlTOPp->NES__DOT__CPU0__DOT__I)) 
					      | (IData)(vlTOPp->NES__DOT__CPU0__DOT__NMI_edge)))
				        ? 0U : ((IData)(vlTOPp->NES__DOT__CPU0__DOT__IRHOLD_valid)
						 ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__IRHOLD)
						 : (IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX)));
}

VL_INLINE_OPT void VNES::_combo__TOP__434(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_combo__TOP__434\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:297
    vlTOPp->NES__DOT__CPU0__DOT__PC_temp = ((0x20U 
					     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
					     ? ((0x10U 
						 & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						 ? (IData)(vlTOPp->NES__DOT__pc)
						 : 
						((8U 
						  & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						  ? 
						 ((2U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? (IData)(vlTOPp->NES__DOT__pc)
						   : 
						  ((1U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   (((IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX) 
						     << 8U) 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD))
						    : (IData)(vlTOPp->NES__DOT__pc)))
						  : (IData)(vlTOPp->NES__DOT__pc)))
					     : ((0x10U 
						 & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						 ? 
						((8U 
						  & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						  ? 
						 ((2U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? (IData)(vlTOPp->NES__DOT__pc)
						   : 
						  ((1U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   (((IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX) 
						     << 8U) 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD))
						    : (IData)(vlTOPp->NES__DOT__pc)))
						  : 
						 ((4U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  ((2U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   ((1U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 
						    (((IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX) 
						      << 8U) 
						     | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD))
						     : (IData)(vlTOPp->NES__DOT__pc))
						    : (IData)(vlTOPp->NES__DOT__pc))
						   : (IData)(vlTOPp->NES__DOT__pc)))
						 : 
						((8U 
						  & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						  ? 
						 ((4U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  ((2U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? (IData)(vlTOPp->NES__DOT__pc)
						    : 
						   ((1U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? (IData)(vlTOPp->NES__DOT__pc)
						     : 
						    ((1U 
						      & ((~ (IData)(vlTOPp->NES__DOT__CPU0__DOT__I)) 
							 | (IData)(vlTOPp->NES__DOT__CPU0__DOT__NMI_edge)))
						      ? 
						     (((IData)(vlTOPp->NES__DOT__CPU0__DOT__ABH) 
						       << 8U) 
						      | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ABL))
						      : (IData)(vlTOPp->NES__DOT__pc))))
						   : 
						  ((2U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   ((1U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? (IData)(vlTOPp->NES__DOT__pc)
						     : 
						    ((IData)(vlTOPp->NES__DOT__CPU0__DOT__res)
						      ? 0xfffcU
						      : 
						     ((IData)(vlTOPp->NES__DOT__CPU0__DOT__NMI_edge)
						       ? 0xfffaU
						       : 0xfffeU)))
						    : (IData)(vlTOPp->NES__DOT__pc)))
						  : 
						 ((4U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  ((2U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   ((1U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 
						    (((IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD) 
						      << 8U) 
						     | (0xffU 
							& (IData)(vlTOPp->NES__DOT__pc)))
						     : 
						    (((IData)(vlTOPp->NES__DOT__CPU0__DOT__ABH) 
						      << 8U) 
						     | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD)))
						    : (IData)(vlTOPp->NES__DOT__pc))
						   : (IData)(vlTOPp->NES__DOT__pc)))));
}

VL_INLINE_OPT void VNES::_combo__TOP__435(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_combo__TOP__435\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:675
    vlTOPp->NES__DOT__CPU0__DOT__BI = (0xffU & ((0x20U 
						 & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						 ? 
						((0x10U 
						  & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						  ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX)
						  : 
						 ((8U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  ((4U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX)
						    : 
						   ((2U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 0U
						     : (IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX)))
						   : 
						  ((4U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 0U
						    : 
						   ((2U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 0U
						     : 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? 0U
						      : (IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX))))))
						 : 
						((0x10U 
						  & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						  ? 
						 ((8U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  ((4U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   ((1U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX)
						     : 0U)
						    : 
						   ((2U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 0U
						     : (IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX)))
						   : (IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX))
						  : 
						 ((8U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  ((4U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   ((2U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? 0U
						      : (IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX))
						     : 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX)
						      : 0U))
						    : 
						   ((2U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX)
						      : 0U)
						     : 0U))
						   : 
						  ((4U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   ((2U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX)
						      : 0U)
						     : 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? (IData)(vlTOPp->NES__DOT__pc)
						      : (IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX)))
						    : 
						   ((2U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX)
						     : 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? 0U
						      : (IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX))))))));
}

VL_INLINE_OPT void VNES::_sequent__TOP__436(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__436\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->NES__DOT__CPU0__DOT__regfile = vlTOPp->NES__DOT__CPU0__DOT__AXYS
	[vlTOPp->NES__DOT__CPU0__DOT__regsel];
}

VL_INLINE_OPT void VNES::_multiclk__TOP__437(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_multiclk__TOP__437\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at i2c_master_top.v:106
    vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__message 
	= ((IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__address)
	    ? 0x72U : (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__data));
}

VL_INLINE_OPT void VNES::_sequent__TOP__438(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__438\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:425
    vlTOPp->NES__DOT__data_in_cpu = (0xffU & ((0x20U 
					       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
					       ? ((0x10U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile)
						   : 
						  ((8U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   ((4U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 
						    ((2U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? 
						     ((1U 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						       ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile)
						       : (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD))
						      : (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile))
						     : (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile))
						    : 
						   ((4U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile)
						     : 
						    ((2U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? 
						     ((1U 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						       ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile)
						       : 
						      ((IData)(vlTOPp->NES__DOT__CPU0__DOT__php)
						        ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__P)
						        : (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD)))
						      : (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile)))))
					       : ((0x10U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  ((8U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   ((4U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile)
						     : 
						    ((2U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? 
						     ((1U 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						       ? (IData)(vlTOPp->NES__DOT__pc)
						       : 
						      ((IData)(vlTOPp->NES__DOT__pc) 
						       >> 8U))
						      : (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile)))
						    : (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile))
						   : 
						  ((8U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   ((4U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile)
						     : 
						    ((2U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? 
						     ((1U 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						       ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile)
						       : 
						      (0xefU 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__P)))
						      : 
						     ((1U 
						       & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						       ? (IData)(vlTOPp->NES__DOT__pc)
						       : 
						      ((IData)(vlTOPp->NES__DOT__pc) 
						       >> 8U))))
						    : (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile)))));
}

VL_INLINE_OPT void VNES::_combo__TOP__439(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_combo__TOP__439\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:362
    vlTOPp->NES__DOT__address_cpu = ((0x20U & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
				      ? ((0x10U & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
					  ? ((8U & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
					      ? (IData)(vlTOPp->NES__DOT__pc)
					      : ((4U 
						  & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						  ? (IData)(vlTOPp->NES__DOT__pc)
						  : 
						 ((2U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? (IData)(vlTOPp->NES__DOT__pc)
						   : 
						  ((1U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD)
						    : (IData)(vlTOPp->NES__DOT__pc)))))
					  : ((8U & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
					      ? ((4U 
						  & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						  ? 
						 ((2U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  ((1U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX)
						    : 
						   (((IData)(vlTOPp->NES__DOT__CPU0__DOT__ABH) 
						     << 8U) 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ABL)))
						   : 
						  ((1U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? (IData)(vlTOPp->NES__DOT__pc)
						    : 
						   (0x100U 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD))))
						  : 
						 ((2U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  ((1U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   (0x100U 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD))
						    : 
						   (0x100U 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile)))
						   : 
						  ((1U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   (((IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX) 
						     << 8U) 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD))
						    : 
						   (0x100U 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD)))))
					      : ((4U 
						  & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						  ? 
						 ((2U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  (0x100U 
						   | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD))
						   : 
						  ((1U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   (0x100U 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile))
						    : 
						   (((IData)(vlTOPp->NES__DOT__CPU0__DOT__ABH) 
						     << 8U) 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ABL))))
						  : 
						 ((2U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  ((1U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   (((IData)(vlTOPp->NES__DOT__CPU0__DOT__ABH) 
						     << 8U) 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ABL))
						    : 
						   (0x100U 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile)))
						   : (IData)(vlTOPp->NES__DOT__pc)))))
				      : ((0x10U & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
					  ? ((8U & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
					      ? ((4U 
						  & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						  ? 
						 ((2U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  ((1U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   (0x100U 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD))
						    : (IData)(vlTOPp->NES__DOT__pc))
						   : (IData)(vlTOPp->NES__DOT__pc))
						  : 
						 ((2U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  ((1U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   (0x100U 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD))
						    : 
						   (0x100U 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile)))
						   : 
						  ((1U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   (((IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX) 
						     << 8U) 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD))
						    : (IData)(vlTOPp->NES__DOT__pc))))
					      : ((4U 
						  & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						  ? 
						 ((2U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  ((1U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   (((IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX) 
						     << 8U) 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD))
						    : (IData)(vlTOPp->NES__DOT__pc))
						   : 
						  ((1U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   (((IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD) 
						     << 8U) 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ABL))
						    : 
						   (((IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX) 
						     << 8U) 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD))))
						  : 
						 ((2U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  ((1U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD)
						    : (IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX))
						   : 
						  ((1U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   (((IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX) 
						     << 8U) 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD))
						    : (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD)))))
					  : ((8U & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
					      ? ((4U 
						  & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						  ? 
						 ((2U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  ((1U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD)
						    : (IData)(vlTOPp->NES__DOT__pc))
						   : (IData)(vlTOPp->NES__DOT__pc))
						  : 
						 ((2U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  ((1U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? (IData)(vlTOPp->NES__DOT__pc)
						    : 
						   (0x100U 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD)))
						   : 
						  ((1U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   (0x100U 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD))
						    : 
						   (0x100U 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile)))))
					      : ((4U 
						  & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						  ? 
						 ((2U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  ((1U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   (((IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD) 
						     << 8U) 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ABL))
						    : 
						   (((IData)(vlTOPp->NES__DOT__CPU0__DOT__ABH) 
						     << 8U) 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD)))
						   : 
						  ((1U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? (IData)(vlTOPp->NES__DOT__pc)
						    : 
						   (((IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD) 
						     << 8U) 
						    | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ABL))))
						  : 
						 ((1U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  (((IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX) 
						    << 8U) 
						   | (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD))
						   : (IData)(vlTOPp->NES__DOT__pc))))));
}

VL_INLINE_OPT void VNES::_combo__TOP__440(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_combo__TOP__440\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:633
    vlTOPp->NES__DOT__CPU0__DOT__AI = (0xffU & ((0x20U 
						 & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						 ? 
						((0x10U 
						  & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						  ? 
						 ((8U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 0U
						   : 
						  ((4U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 0U
						    : 
						   ((2U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 0U
						     : 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? 0U
						      : (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile)))))
						  : 
						 ((8U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  ((4U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 0U
						    : 
						   ((2U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD)
						      : (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile))
						     : 0U))
						   : 
						  ((4U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   ((2U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD)
						     : (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile))
						    : 
						   ((2U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX)
						      : (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile))
						     : 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile)
						      : 0U)))))
						 : 
						((0x10U 
						  & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						  ? 
						 ((8U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  ((4U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   ((1U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 0U
						     : (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile))
						    : 
						   ((2U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD)
						      : (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile))
						     : 0U))
						   : 
						  ((4U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 0U
						    : 
						   ((2U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile)
						      : 0U)
						     : 0U)))
						  : 
						 ((8U 
						   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						   ? 
						  ((4U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   ((2U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD)
						      : (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile))
						     : 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? 
						     ((IData)(vlTOPp->NES__DOT__CPU0__DOT__load_only)
						       ? 0U
						       : (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile))
						      : 0U))
						    : 
						   ((2U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? 0U
						      : (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD))
						     : 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD)
						      : (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile))))
						   : 
						  ((4U 
						    & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						    ? 
						   ((2U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? 0U
						      : (IData)(vlTOPp->NES__DOT__CPU0__DOT__ABH))
						     : 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__DIMUX)
						      : 0U))
						    : 
						   ((2U 
						     & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						     ? 
						    ((1U 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__state))
						      ? 0U
						      : (IData)(vlTOPp->NES__DOT__CPU0__DOT__regfile))
						     : 0U))))));
}

VL_INLINE_OPT void VNES::_combo__TOP__441(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_combo__TOP__441\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->NES__DOT__address = ((IData)(vlTOPp->NES__DOT__OAM_en)
				  ? (IData)(vlTOPp->NES__DOT__oam_fetch_address_q)
				  : (IData)(vlTOPp->NES__DOT__address_cpu));
}

VL_INLINE_OPT void VNES::_sequent__TOP__442(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_sequent__TOP__442\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->NES__DOT__data_in = ((IData)(vlTOPp->NES__DOT__OAM_en)
				  ? (IData)(vlTOPp->NES__DOT__data_out_mem)
				  : (IData)(vlTOPp->NES__DOT__data_in_cpu));
}

VL_INLINE_OPT void VNES::_combo__TOP__443(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_combo__TOP__443\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ALU.v:55
    vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_logic 
	= ((2U & (IData)(vlTOPp->NES__DOT__CPU0__DOT__alu_op))
	    ? ((1U & (IData)(vlTOPp->NES__DOT__CPU0__DOT__alu_op))
	        ? (IData)(vlTOPp->NES__DOT__CPU0__DOT__AI)
	        : ((IData)(vlTOPp->NES__DOT__CPU0__DOT__AI) 
		   ^ (IData)(vlTOPp->NES__DOT__CPU0__DOT__BI)))
	    : ((1U & (IData)(vlTOPp->NES__DOT__CPU0__DOT__alu_op))
	        ? ((IData)(vlTOPp->NES__DOT__CPU0__DOT__AI) 
		   & (IData)(vlTOPp->NES__DOT__CPU0__DOT__BI))
	        : ((IData)(vlTOPp->NES__DOT__CPU0__DOT__AI) 
		   | (IData)(vlTOPp->NES__DOT__CPU0__DOT__BI))));
    if (vlTOPp->NES__DOT__CPU0__DOT__alu_shift_right) {
	vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_logic 
	    = ((0x100U & ((IData)(vlTOPp->NES__DOT__CPU0__DOT__AI) 
			  << 8U)) | (((IData)(vlTOPp->NES__DOT__CPU0__DOT__CI) 
				      << 7U) | (0x7fU 
						& ((IData)(vlTOPp->NES__DOT__CPU0__DOT__AI) 
						   >> 1U))));
    }
}

VL_INLINE_OPT void VNES::_combo__TOP__444(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_combo__TOP__444\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ALU.v:69
    vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_BI 
	= (0xffU & ((8U & (IData)(vlTOPp->NES__DOT__CPU0__DOT__alu_op))
		     ? ((4U & (IData)(vlTOPp->NES__DOT__CPU0__DOT__alu_op))
			 ? 0U : (IData)(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_logic))
		     : ((4U & (IData)(vlTOPp->NES__DOT__CPU0__DOT__alu_op))
			 ? (~ (IData)(vlTOPp->NES__DOT__CPU0__DOT__BI))
			 : (IData)(vlTOPp->NES__DOT__CPU0__DOT__BI))));
}

VL_INLINE_OPT void VNES::_combo__TOP__445(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_combo__TOP__445\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ALU.v:89
    vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_l = 
	(0x1fU & (((0xfU & (IData)(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_logic)) 
		   + (0xfU & (IData)(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_BI))) 
		  + (1U & (((IData)(vlTOPp->NES__DOT__CPU0__DOT__alu_shift_right) 
			    | (3U == (3U & ((IData)(vlTOPp->NES__DOT__CPU0__DOT__alu_op) 
					    >> 2U))))
			    ? 0U : (IData)(vlTOPp->NES__DOT__CPU0__DOT__CI)))));
}

VL_INLINE_OPT void VNES::_combo__TOP__446(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_combo__TOP__446\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_HC 
	= (1U & (((IData)(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_l) 
		  >> 4U) | ((IData)(vlTOPp->NES__DOT__CPU0__DOT____Vcellinp__ALU__BCD) 
			    & (5U <= (7U & ((IData)(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_l) 
					    >> 1U))))));
}

VL_INLINE_OPT void VNES::_combo__TOP__447(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_combo__TOP__447\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ALU.v:89
    vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_h = 
	(0x1fU & ((((IData)(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_logic) 
		    >> 4U) + (0xfU & ((IData)(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_BI) 
				      >> 4U))) + (IData)(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_HC)));
}

VL_INLINE_OPT void VNES::_combo__TOP__448(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_combo__TOP__448\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp = (
						   ((IData)(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_h) 
						    << 4U) 
						   | (0xfU 
						      & (IData)(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_l)));
}

void VNES::_eval(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_eval\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vm_even_cycle = !vlTOPp->__Vm_even_cycle;
    vlTOPp->__Vm_threadPoolp->workerp(0)->addTask(__Vmtask__101, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(1)->addTask(__Vmtask__102, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(2)->addTask(__Vmtask__104, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(3)->addTask(__Vmtask__105, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(4)->addTask(__Vmtask__106, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(5)->addTask(__Vmtask__108, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(6)->addTask(__Vmtask__111, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(7)->addTask(__Vmtask__113, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(8)->addTask(__Vmtask__114, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(9)->addTask(__Vmtask__115, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(10)->addTask(__Vmtask__116, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(11)->addTask(__Vmtask__117, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(12)->addTask(__Vmtask__118, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(13)->addTask(__Vmtask__119, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(14)->addTask(__Vmtask__142, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(15)->addTask(__Vmtask__147, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(16)->addTask(__Vmtask__171, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(17)->addTask(__Vmtask__174, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(18)->addTask(__Vmtask__175, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(19)->addTask(__Vmtask__177, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(20)->addTask(__Vmtask__178, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(21)->addTask(__Vmtask__179, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(22)->addTask(__Vmtask__182, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(23)->addTask(__Vmtask__183, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(24)->addTask(__Vmtask__184, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(25)->addTask(__Vmtask__185, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(26)->addTask(__Vmtask__186, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(27)->addTask(__Vmtask__187, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(28)->addTask(__Vmtask__189, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(29)->addTask(__Vmtask__190, vlTOPp->__Vm_even_cycle, vlSymsp);
    vlTOPp->__Vm_threadPoolp->workerp(30)->addTask(__Vmtask__191, vlTOPp->__Vm_even_cycle, vlSymsp);
    __Vmtask__192(vlTOPp->__Vm_even_cycle, vlSymsp);
    Verilated::mtaskId(0);
    vlTOPp->__Vm_mt_final.waitUntilUpstreamDone(vlTOPp->__Vm_even_cycle);
    // Final
    vlTOPp->__Vclklast__TOP__clk_50 = vlTOPp->clk_50;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__NES__DOT____Vcellinp__CPU0__reset 
	= vlTOPp->__VinpClk__TOP__NES__DOT____Vcellinp__CPU0__reset;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK 
	= vlTOPp->__VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__VGA_CLK 
	= vlTOPp->__VinpClk__TOP__VGA_CLK;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__done 
	= vlTOPp->__VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__done;
    vlTOPp->__VinpClk__TOP__NES__DOT____Vcellinp__CPU0__reset 
	= vlTOPp->NES__DOT____Vcellinp__CPU0__reset;
    vlTOPp->__VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK 
	= vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK;
    vlTOPp->__VinpClk__TOP__VGA_CLK = vlTOPp->VGA_CLK;
    vlTOPp->__VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__done 
	= vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__done;
}

void VNES::_eval_initial(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_eval_initial\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlTOPp->__Vclklast__TOP__clk_50 = vlTOPp->clk_50;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__NES__DOT____Vcellinp__CPU0__reset 
	= vlTOPp->__VinpClk__TOP__NES__DOT____Vcellinp__CPU0__reset;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK 
	= vlTOPp->__VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__VGA_CLK 
	= vlTOPp->__VinpClk__TOP__VGA_CLK;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__done 
	= vlTOPp->__VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__done;
}

void VNES::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::final\n"); );
    // Variables
    VNES__Syms* __restrict vlSymsp = this->__VlSymsp;
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VNES::_eval_settle(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_eval_settle\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

VL_INLINE_OPT QData VNES::_change_request(VNES__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_change_request\n"); );
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->VGA_CLK ^ vlTOPp->__Vchglast__TOP__VGA_CLK)
	 | (vlTOPp->NES__DOT____Vcellinp__CPU0__reset ^ vlTOPp->__Vchglast__TOP__NES__DOT____Vcellinp__CPU0__reset)
	 | (vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__done ^ vlTOPp->__Vchglast__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__done)
	 | (vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK ^ vlTOPp->__Vchglast__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK)
	 | (vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap_index ^ vlTOPp->__Vchglast__TOP__NES__DOT__PPU0__DOT__BG0__DOT__bitmap_index));
    VL_DEBUG_IF( if(__req && ((vlTOPp->VGA_CLK ^ vlTOPp->__Vchglast__TOP__VGA_CLK))) VL_DBG_MSGF("        CHANGE: NES.sv:7: VGA_CLK\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->NES__DOT____Vcellinp__CPU0__reset ^ vlTOPp->__Vchglast__TOP__NES__DOT____Vcellinp__CPU0__reset))) VL_DBG_MSGF("        CHANGE: cpu.v:24: NES.__Vcellinp__CPU0__reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__done ^ vlTOPp->__Vchglast__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__done))) VL_DBG_MSGF("        CHANGE: hdmi_driver.v:24: NES.PPU0.HD_0.done\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK ^ vlTOPp->__Vchglast__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK))) VL_DBG_MSGF("        CHANGE: hdmi_driver.v:25: NES.PPU0.HD_0.mI2C_CTRL_CLK\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap_index ^ vlTOPp->__Vchglast__TOP__NES__DOT__PPU0__DOT__BG0__DOT__bitmap_index))) VL_DBG_MSGF("        CHANGE: PPU_BG.sv:35: NES.PPU0.BG0.bitmap_index\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__VGA_CLK = vlTOPp->VGA_CLK;
    vlTOPp->__Vchglast__TOP__NES__DOT____Vcellinp__CPU0__reset 
	= vlTOPp->NES__DOT____Vcellinp__CPU0__reset;
    vlTOPp->__Vchglast__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__done 
	= vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__done;
    vlTOPp->__Vchglast__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK 
	= vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK;
    vlTOPp->__Vchglast__TOP__NES__DOT__PPU0__DOT__BG0__DOT__bitmap_index 
	= vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap_index;
    return __req;
}

#ifdef VL_DEBUG
void VNES::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk_50 & 0xfeU))) {
	Verilated::overWidthError("clk_50");}
    if (VL_UNLIKELY((ready_in & 0xfeU))) {
	Verilated::overWidthError("ready_in");}
    if (VL_UNLIKELY((reset_al & 0xfeU))) {
	Verilated::overWidthError("reset_al");}
    if (VL_UNLIKELY((vga_reset & 0xfeU))) {
	Verilated::overWidthError("vga_reset");}
}
#endif // VL_DEBUG

void VNES::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNES::_ctor_var_reset\n"); );
    // Body
    clk_50 = VL_RAND_RESET_I(1);
    ready_in = VL_RAND_RESET_I(1);
    reset_al = VL_RAND_RESET_I(1);
    nmi_interrupt = VL_RAND_RESET_I(1);
    RED = VL_RAND_RESET_I(8);
    GREEN = VL_RAND_RESET_I(8);
    BLUE = VL_RAND_RESET_I(8);
    VGA_CLK = VL_RAND_RESET_I(1);
    VGA_HS = VL_RAND_RESET_I(1);
    VGA_VS = VL_RAND_RESET_I(1);
    VGA_BLANK_N = VL_RAND_RESET_I(1);
    VGA_SYNC_N = VL_RAND_RESET_I(1);
    vga_reset = VL_RAND_RESET_I(1);
    multiplier = VL_RAND_RESET_I(8);
    multiplier_two = VL_RAND_RESET_I(8);
    nt_bit = VL_RAND_RESET_I(1);
    scl = VL_RAND_RESET_I(1);
    sda = VL_RAND_RESET_I(1);
    Draw_enable = VL_RAND_RESET_I(1);
    NES__DOT__res_interrupt = VL_RAND_RESET_I(1);
    NES__DOT__RWE = VL_RAND_RESET_I(1);
    NES__DOT__ppu_rwe = VL_RAND_RESET_I(1);
    NES__DOT__C = VL_RAND_RESET_I(1);
    NES__DOT__OAM_en = VL_RAND_RESET_I(1);
    NES__DOT__Ready = VL_RAND_RESET_I(1);
    NES__DOT__address = VL_RAND_RESET_I(16);
    NES__DOT__r_address = VL_RAND_RESET_I(16);
    NES__DOT__w_address = VL_RAND_RESET_I(16);
    NES__DOT__pc = VL_RAND_RESET_I(16);
    NES__DOT__PPUSCROLL = VL_RAND_RESET_I(16);
    NES__DOT__address_cpu = VL_RAND_RESET_I(16);
    NES__DOT__oam_fetch_address_q = VL_RAND_RESET_I(16);
    NES__DOT__data_in = VL_RAND_RESET_I(8);
    NES__DOT__data_out = VL_RAND_RESET_I(8);
    NES__DOT__data_out_ppu = VL_RAND_RESET_I(8);
    NES__DOT__data_out_mem = VL_RAND_RESET_I(8);
    NES__DOT__hold = VL_RAND_RESET_I(8);
    NES__DOT__data_in_cpu = VL_RAND_RESET_I(8);
    NES__DOT____Vcellinp__CPU0__reset = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<65536; ++__Vi0) {
	    NES__DOT__MEM0__DOT__memory_array[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
	    NES__DOT__PPU0__DOT__palette_ram[__Vi0] = VL_RAND_RESET_I(8);
    }}
    NES__DOT__PPU0__DOT__color_code_bg = VL_RAND_RESET_I(8);
    NES__DOT__PPU0__DOT__color_code_spr = VL_RAND_RESET_I(8);
    NES__DOT__PPU0__DOT__sprite_counter = VL_RAND_RESET_I(4);
    NES__DOT__PPU0__DOT__CLK_COUNTER = VL_RAND_RESET_I(1);
    NES__DOT__PPU0__DOT__PPU_ADDR_FLAG = VL_RAND_RESET_I(1);
    NES__DOT__PPU0__DOT__PPU_SCROLL_FLAG = VL_RAND_RESET_I(1);
    NES__DOT__PPU0__DOT__mem_data_out = VL_RAND_RESET_I(8);
    NES__DOT__PPU0__DOT__mem_data_out_d = VL_RAND_RESET_I(8);
    NES__DOT__PPU0__DOT__mem_data_in = VL_RAND_RESET_I(8);
    NES__DOT__PPU0__DOT__ppu_w_address = VL_RAND_RESET_I(16);
    NES__DOT__PPU0__DOT__ppu_reg_r_address = VL_RAND_RESET_I(16);
    NES__DOT__PPU0__DOT__sprite_address = VL_RAND_RESET_I(16);
    NES__DOT__PPU0__DOT__vblank = VL_RAND_RESET_I(1);
    NES__DOT__PPU0__DOT__ppu_read = VL_RAND_RESET_I(1);
    NES__DOT__PPU0__DOT__vga_vblank = VL_RAND_RESET_I(1);
    NES__DOT__PPU0__DOT__DrawX = VL_RAND_RESET_I(10);
    NES__DOT__PPU0__DOT__DrawY = VL_RAND_RESET_I(10);
    NES__DOT__PPU0__DOT__RED_bg = VL_RAND_RESET_I(8);
    NES__DOT__PPU0__DOT__GREEN_bg = VL_RAND_RESET_I(8);
    NES__DOT__PPU0__DOT__BLUE_bg = VL_RAND_RESET_I(8);
    NES__DOT__PPU0__DOT__RED_sp = VL_RAND_RESET_I(8);
    NES__DOT__PPU0__DOT__GREEN_sp = VL_RAND_RESET_I(8);
    NES__DOT__PPU0__DOT__BLUE_sp = VL_RAND_RESET_I(8);
    NES__DOT__PPU0__DOT__PPUADDR = VL_RAND_RESET_I(16);
    NES__DOT__PPU0__DOT__PPUCTRL = VL_RAND_RESET_I(8);
    NES__DOT__PPU0__DOT__PPUMASK = VL_RAND_RESET_I(8);
    NES__DOT__PPU0__DOT__PPUSTATUS = VL_RAND_RESET_I(8);
    NES__DOT__PPU0__DOT__OAMADDR = VL_RAND_RESET_I(8);
    NES__DOT__PPU0__DOT__OAMDATA = VL_RAND_RESET_I(8);
    NES__DOT__PPU0__DOT__PPUDATA = VL_RAND_RESET_I(8);
    NES__DOT__PPU0__DOT__OAMDMA = VL_RAND_RESET_I(8);
    NES__DOT__PPU0__DOT__data_out_oam = VL_RAND_RESET_I(8);
    NES__DOT__PPU0__DOT__sprite_data_in = VL_RAND_RESET_I(8);
    NES__DOT__PPU0__DOT__sprite_mem_access = VL_RAND_RESET_I(1);
    NES__DOT__PPU0__DOT__sprite_address_q = VL_RAND_RESET_I(16);
    NES__DOT__PPU0__DOT__sprite_address_d = VL_RAND_RESET_I(16);
    NES__DOT__PPU0__DOT__address_to_vram = VL_RAND_RESET_I(16);
    NES__DOT__PPU0__DOT__priority_bit = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
	    NES__DOT__PPU0__DOT____Vcellout__BG0__palette_ram[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<16384; ++__Vi0) {
	    NES__DOT__PPU0__DOT__MEM1__DOT__ppu_mem_array[__Vi0] = VL_RAND_RESET_I(8);
    }}
    NES__DOT__PPU0__DOT__HD_0__DOT__data = VL_RAND_RESET_I(8);
    NES__DOT__PPU0__DOT__HD_0__DOT__byte_lut = VL_RAND_RESET_I(8);
    NES__DOT__PPU0__DOT__HD_0__DOT__byte_lut_next = VL_RAND_RESET_I(8);
    NES__DOT__PPU0__DOT__HD_0__DOT__clk_divide = VL_RAND_RESET_I(10);
    NES__DOT__PPU0__DOT__HD_0__DOT__clk_50k = VL_RAND_RESET_I(1);
    NES__DOT__PPU0__DOT__HD_0__DOT__reset = VL_RAND_RESET_I(1);
    NES__DOT__PPU0__DOT__HD_0__DOT__done = VL_RAND_RESET_I(1);
    NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK = VL_RAND_RESET_I(1);
    NES__DOT__PPU0__DOT__HD_0__DOT__fail = VL_RAND_RESET_I(1);
    NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CLK_DIV = VL_RAND_RESET_I(32);
    NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__counter = VL_RAND_RESET_I(4);
    NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__message = VL_RAND_RESET_I(8);
    NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state = VL_RAND_RESET_I(5);
    NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__next_state = VL_RAND_RESET_I(5);
    NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__ack = VL_RAND_RESET_I(1);
    NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__byte_num_local = VL_RAND_RESET_I(3);
    NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__address = VL_RAND_RESET_I(1);
    NES__DOT__PPU0__DOT__BG0__DOT__LoopyT_Next = VL_RAND_RESET_I(1);
    NES__DOT__PPU0__DOT__BG0__DOT__horiz_counter = VL_RAND_RESET_I(10);
    NES__DOT__PPU0__DOT__BG0__DOT__vert_counter = VL_RAND_RESET_I(10);
    NES__DOT__PPU0__DOT__BG0__DOT__nt_address = VL_RAND_RESET_I(16);
    NES__DOT__PPU0__DOT__BG0__DOT__ppu_r_addr_q = VL_RAND_RESET_I(16);
    NES__DOT__PPU0__DOT__BG0__DOT__ppu_r_addr_d = VL_RAND_RESET_I(16);
    NES__DOT__PPU0__DOT__BG0__DOT__at_address = VL_RAND_RESET_I(16);
    NES__DOT__PPU0__DOT__BG0__DOT__bitmap_one_address = VL_RAND_RESET_I(16);
    NES__DOT__PPU0__DOT__BG0__DOT__bitmap_two_address = VL_RAND_RESET_I(16);
    NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_0_next = VL_RAND_RESET_I(8);
    NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_1_next = VL_RAND_RESET_I(8);
    NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_0_curr = VL_RAND_RESET_I(8);
    NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_1_curr = VL_RAND_RESET_I(8);
    NES__DOT__PPU0__DOT__BG0__DOT__nametable_byte_curr = VL_RAND_RESET_I(8);
    NES__DOT__PPU0__DOT__BG0__DOT__attribute_data_curr = VL_RAND_RESET_I(8);
    NES__DOT__PPU0__DOT__BG0__DOT__nametable_byte_next = VL_RAND_RESET_I(8);
    NES__DOT__PPU0__DOT__BG0__DOT__attribute_data_next = VL_RAND_RESET_I(8);
    NES__DOT__PPU0__DOT__BG0__DOT__fetch_phase = VL_RAND_RESET_I(4);
    NES__DOT__PPU0__DOT__BG0__DOT__fetch_phase_next = VL_RAND_RESET_I(4);
    NES__DOT__PPU0__DOT__BG0__DOT__ALE = VL_RAND_RESET_I(1);
    NES__DOT__PPU0__DOT__BG0__DOT__pipe_0 = VL_RAND_RESET_I(8);
    NES__DOT__PPU0__DOT__BG0__DOT__pipe_1 = VL_RAND_RESET_I(8);
    NES__DOT__PPU0__DOT__BG0__DOT__pipe_2 = VL_RAND_RESET_I(8);
    NES__DOT__PPU0__DOT__BG0__DOT__pipe_3 = VL_RAND_RESET_I(8);
    NES__DOT__PPU0__DOT__BG0__DOT__palette_mem_address = VL_RAND_RESET_I(16);
    NES__DOT__PPU0__DOT__BG0__DOT__palette_fetch_counter = VL_RAND_RESET_I(6);
    NES__DOT__PPU0__DOT__BG0__DOT__palette_fetch_enable = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
	    NES__DOT__PPU0__DOT__BG0__DOT__bitmap[__Vi0] = VL_RAND_RESET_I(2);
    }}
    NES__DOT__PPU0__DOT__BG0__DOT__bitmap_index = VL_RAND_RESET_I(3);
    NES__DOT__PPU0__DOT__BG0__DOT__bitmap_vertical_index = VL_RAND_RESET_I(11);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    NES__DOT__PPU0__DOT__BG0__DOT__bg_palette_ram_separated[__Vi0] = VL_RAND_RESET_I(8);
    }}
    NES__DOT__PPU0__DOT__BG0__DOT__right = VL_RAND_RESET_I(1);
    NES__DOT__PPU0__DOT__BG0__DOT__left = VL_RAND_RESET_I(1);
    NES__DOT__PPU0__DOT__BG0__DOT__top = VL_RAND_RESET_I(1);
    NES__DOT__PPU0__DOT__BG0__DOT__bottom = VL_RAND_RESET_I(1);
    NES__DOT__PPU0__DOT__BG0__DOT__at_scroll_address = VL_RAND_RESET_I(16);
    NES__DOT__PPU0__DOT__BG0__DOT__nt_scroll_address = VL_RAND_RESET_I(16);
    NES__DOT__PPU0__DOT__BG0__DOT__LoopyV = VL_RAND_RESET_I(15);
    NES__DOT__PPU0__DOT__BG0__DOT__LoopyT = VL_RAND_RESET_I(15);
    NES__DOT__PPU0__DOT__BG0__DOT__LoopyV_temp = VL_RAND_RESET_I(15);
    NES__DOT__PPU0__DOT__BG0__DOT__LoopyV_temp_two = VL_RAND_RESET_I(15);
    NES__DOT__PPU0__DOT__BG0__DOT__fine_y = VL_RAND_RESET_I(3);
    NES__DOT__PPU0__DOT__BG0__DOT__loopy_x = VL_RAND_RESET_I(3);
    NES__DOT__PPU0__DOT__BG0__DOT__offset = VL_RAND_RESET_I(8);
    NES__DOT__PPU0__DOT__BG0__DOT__nt_base = VL_RAND_RESET_I(16);
    NES__DOT__PPU0__DOT__BG0__DOT__curr_nt = VL_RAND_RESET_I(16);
    NES__DOT__PPU0__DOT__BG0__DOT__next_nt = VL_RAND_RESET_I(16);
    NES__DOT__PPU0__DOT__BG0__DOT__at_base = VL_RAND_RESET_I(16);
    NES__DOT__PPU0__DOT__BG0__DOT__curr_at = VL_RAND_RESET_I(16);
    NES__DOT__PPU0__DOT__BG0__DOT__next_at = VL_RAND_RESET_I(16);
    NES__DOT__PPU0__DOT__BG0__DOT__next_table = VL_RAND_RESET_I(8);
    NES__DOT__PPU0__DOT__BG0__DOT__coarse_x = VL_RAND_RESET_I(8);
    NES__DOT__PPU0__DOT__BG0__DOT__ppu_address_latch = VL_RAND_RESET_I(1);
    NES__DOT__PPU0__DOT__BG0__DOT__pre_render = VL_RAND_RESET_I(1);
    NES__DOT__PPU0__DOT__BG0__DOT__ppu_increment = VL_RAND_RESET_I(1);
    NES__DOT__PPU0__DOT__BG0__DOT__current_px = VL_RAND_RESET_I(2);
    NES__DOT__PPU0__DOT__BG0__DOT__mem_fetch = VL_RAND_RESET_I(1);
    NES__DOT__PPU0__DOT__BG0__DOT__loopy_latch = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__ABL = VL_RAND_RESET_I(8);
    NES__DOT__CPU0__DOT__ABH = VL_RAND_RESET_I(8);
    NES__DOT__CPU0__DOT__ADD = VL_RAND_RESET_I(8);
    NES__DOT__CPU0__DOT__DIHOLD = VL_RAND_RESET_I(8);
    NES__DOT__CPU0__DOT__DIHOLD_valid = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__DIMUX = VL_RAND_RESET_I(8);
    NES__DOT__CPU0__DOT__IRHOLD = VL_RAND_RESET_I(8);
    NES__DOT__CPU0__DOT__IRHOLD_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    NES__DOT__CPU0__DOT__AXYS[__Vi0] = VL_RAND_RESET_I(8);
    }}
    NES__DOT__CPU0__DOT__C = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__Z = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__I = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__D = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__V = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__N = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__AN = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__HC = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__AI = VL_RAND_RESET_I(8);
    NES__DOT__CPU0__DOT__BI = VL_RAND_RESET_I(8);
    NES__DOT__CPU0__DOT__IR = VL_RAND_RESET_I(8);
    NES__DOT__CPU0__DOT__CI = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__CO = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__NMI_edge = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__regsel = VL_RAND_RESET_I(2);
    NES__DOT__CPU0__DOT__regfile = VL_RAND_RESET_I(8);
    NES__DOT__CPU0__DOT__P = VL_RAND_RESET_I(8);
    NES__DOT__CPU0__DOT__state = VL_RAND_RESET_I(6);
    NES__DOT__CPU0__DOT__PC_inc = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__PC_temp = VL_RAND_RESET_I(16);
    NES__DOT__CPU0__DOT__src_reg = VL_RAND_RESET_I(2);
    NES__DOT__CPU0__DOT__dst_reg = VL_RAND_RESET_I(2);
    NES__DOT__CPU0__DOT__index_y = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__load_reg = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__inc = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__write_back = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__load_only = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__store = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__adc_sbc = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__compare = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__shift = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__rotate = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__backwards = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__cond_true = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__cond_code = VL_RAND_RESET_I(3);
    NES__DOT__CPU0__DOT__shift_right = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__alu_shift_right = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__op = VL_RAND_RESET_I(4);
    NES__DOT__CPU0__DOT__alu_op = VL_RAND_RESET_I(4);
    NES__DOT__CPU0__DOT__adc_bcd = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__adj_bcd = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__bit_ins = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__plp = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__php = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__clc = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__sec = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__cld = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__sed = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__cli = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__sei = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__clv = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__brk = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__res = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__write_register = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT____Vcellinp__ALU__BCD = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__NMI_1 = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__ALU__DOT__AI7 = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__ALU__DOT__BI7 = VL_RAND_RESET_I(1);
    NES__DOT__CPU0__DOT__ALU__DOT__temp_logic = VL_RAND_RESET_I(9);
    NES__DOT__CPU0__DOT__ALU__DOT__temp_BI = VL_RAND_RESET_I(8);
    NES__DOT__CPU0__DOT__ALU__DOT__temp_l = VL_RAND_RESET_I(5);
    NES__DOT__CPU0__DOT__ALU__DOT__temp_h = VL_RAND_RESET_I(5);
    NES__DOT__CPU0__DOT__ALU__DOT__temp = VL_RAND_RESET_I(9);
    NES__DOT__CPU0__DOT__ALU__DOT__temp_HC = VL_RAND_RESET_I(1);
    __Vtableidx1 = VL_RAND_RESET_I(8);
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[0] = 0x98U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[1] = 3U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[2] = 1U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[3] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[4] = 2U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[5] = 0x18U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[6] = 3U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[7] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[8] = 0x14U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[9] = 0x70U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[10] = 0x15U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[11] = 0x20U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[12] = 0x16U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[13] = 0x30U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[14] = 0x18U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[15] = 0x46U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[16] = 0x40U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[17] = 0x80U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[18] = 0x41U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[19] = 0x10U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[20] = 0x49U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[21] = 0xa8U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[22] = 0x55U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[23] = 0x10U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[24] = 0x56U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[25] = 8U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[26] = 0x96U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[27] = 0xf6U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[28] = 0x73U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[29] = 7U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[30] = 0x76U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[31] = 0x1fU;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[32] = 0x98U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[33] = 3U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[34] = 0x99U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[35] = 2U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[36] = 0x9aU;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[37] = 0xe0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[38] = 0x9cU;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[39] = 0x30U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[40] = 0x9dU;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[41] = 0x61U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[42] = 0xa2U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[43] = 0xa4U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[44] = 0xa3U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[45] = 0xa4U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[46] = 0xa5U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[47] = 4U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[48] = 0xabU;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[49] = 0x40U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[50] = 0xafU;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[51] = 0x16U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[52] = 0xbaU;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[53] = 0x60U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[54] = 0xd1U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[55] = 0xffU;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[56] = 0xdeU;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[57] = 0x10U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[58] = 0xe4U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[59] = 0x60U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[60] = 0xfaU;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[61] = 0x7dU;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[62] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[63] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[64] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[65] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[66] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[67] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[68] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[69] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[70] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[71] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[72] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[73] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[74] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[75] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[76] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[77] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[78] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[79] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[80] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[81] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[82] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[83] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[84] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[85] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[86] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[87] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[88] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[89] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[90] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[91] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[92] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[93] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[94] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[95] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[96] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[97] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[98] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[99] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[100] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[101] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[102] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[103] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[104] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[105] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[106] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[107] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[108] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[109] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[110] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[111] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[112] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[113] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[114] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[115] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[116] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[117] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[118] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[119] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[120] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[121] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[122] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[123] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[124] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[125] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[126] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[127] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[128] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[129] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[130] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[131] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[132] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[133] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[134] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[135] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[136] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[137] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[138] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[139] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[140] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[141] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[142] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[143] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[144] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[145] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[146] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[147] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[148] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[149] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[150] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[151] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[152] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[153] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[154] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[155] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[156] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[157] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[158] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[159] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[160] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[161] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[162] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[163] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[164] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[165] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[166] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[167] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[168] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[169] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[170] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[171] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[172] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[173] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[174] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[175] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[176] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[177] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[178] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[179] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[180] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[181] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[182] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[183] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[184] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[185] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[186] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[187] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[188] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[189] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[190] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[191] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[192] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[193] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[194] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[195] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[196] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[197] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[198] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[199] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[200] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[201] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[202] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[203] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[204] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[205] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[206] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[207] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[208] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[209] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[210] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[211] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[212] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[213] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[214] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[215] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[216] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[217] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[218] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[219] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[220] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[221] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[222] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[223] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[224] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[225] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[226] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[227] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[228] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[229] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[230] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[231] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[232] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[233] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[234] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[235] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[236] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[237] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[238] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[239] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[240] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[241] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[242] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[243] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[244] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[245] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[246] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[247] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[248] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[249] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[250] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[251] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[252] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[253] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[254] = 0U;
    __Vtable1_NES__DOT__PPU0__DOT__HD_0__DOT__data[255] = 0U;
    __Vtableidx2 = VL_RAND_RESET_I(10);
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[0] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[1] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[2] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[3] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[4] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[5] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[6] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[7] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[8] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[9] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[10] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[11] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[12] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[13] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[14] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[15] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[16] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[17] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[18] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[19] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[20] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[21] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[22] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[23] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[24] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[25] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[26] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[27] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[28] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[29] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[30] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[31] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[32] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[33] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[34] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[35] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[36] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[37] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[38] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[39] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[40] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[41] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[42] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[43] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[44] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[45] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[46] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[47] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[48] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[49] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[50] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[51] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[52] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[53] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[54] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[55] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[56] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[57] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[58] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[59] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[60] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[61] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[62] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[63] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[64] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[65] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[66] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[67] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[68] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[69] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[70] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[71] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[72] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[73] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[74] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[75] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[76] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[77] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[78] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[79] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[80] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[81] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[82] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[83] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[84] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[85] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[86] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[87] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[88] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[89] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[90] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[91] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[92] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[93] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[94] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[95] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[96] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[97] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[98] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[99] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[100] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[101] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[102] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[103] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[104] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[105] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[106] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[107] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[108] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[109] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[110] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[111] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[112] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[113] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[114] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[115] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[116] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[117] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[118] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[119] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[120] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[121] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[122] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[123] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[124] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[125] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[126] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[127] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[128] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[129] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[130] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[131] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[132] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[133] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[134] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[135] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[136] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[137] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[138] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[139] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[140] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[141] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[142] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[143] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[144] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[145] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[146] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[147] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[148] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[149] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[150] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[151] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[152] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[153] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[154] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[155] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[156] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[157] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[158] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[159] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[160] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[161] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[162] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[163] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[164] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[165] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[166] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[167] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[168] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[169] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[170] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[171] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[172] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[173] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[174] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[175] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[176] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[177] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[178] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[179] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[180] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[181] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[182] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[183] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[184] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[185] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[186] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[187] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[188] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[189] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[190] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[191] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[192] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[193] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[194] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[195] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[196] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[197] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[198] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[199] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[200] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[201] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[202] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[203] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[204] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[205] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[206] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[207] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[208] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[209] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[210] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[211] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[212] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[213] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[214] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[215] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[216] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[217] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[218] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[219] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[220] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[221] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[222] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[223] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[224] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[225] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[226] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[227] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[228] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[229] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[230] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[231] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[232] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[233] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[234] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[235] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[236] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[237] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[238] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[239] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[240] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[241] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[242] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[243] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[244] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[245] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[246] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[247] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[248] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[249] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[250] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[251] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[252] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[253] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[254] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[255] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[256] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[257] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[258] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[259] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[260] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[261] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[262] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[263] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[264] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[265] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[266] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[267] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[268] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[269] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[270] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[271] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[272] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[273] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[274] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[275] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[276] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[277] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[278] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[279] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[280] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[281] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[282] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[283] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[284] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[285] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[286] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[287] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[288] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[289] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[290] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[291] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[292] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[293] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[294] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[295] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[296] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[297] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[298] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[299] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[300] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[301] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[302] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[303] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[304] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[305] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[306] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[307] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[308] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[309] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[310] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[311] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[312] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[313] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[314] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[315] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[316] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[317] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[318] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[319] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[320] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[321] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[322] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[323] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[324] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[325] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[326] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[327] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[328] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[329] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[330] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[331] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[332] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[333] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[334] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[335] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[336] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[337] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[338] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[339] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[340] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[341] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[342] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[343] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[344] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[345] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[346] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[347] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[348] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[349] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[350] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[351] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[352] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[353] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[354] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[355] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[356] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[357] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[358] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[359] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[360] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[361] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[362] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[363] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[364] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[365] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[366] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[367] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[368] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[369] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[370] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[371] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[372] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[373] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[374] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[375] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[376] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[377] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[378] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[379] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[380] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[381] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[382] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[383] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[384] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[385] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[386] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[387] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[388] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[389] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[390] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[391] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[392] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[393] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[394] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[395] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[396] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[397] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[398] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[399] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[400] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[401] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[402] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[403] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[404] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[405] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[406] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[407] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[408] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[409] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[410] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[411] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[412] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[413] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[414] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[415] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[416] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[417] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[418] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[419] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[420] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[421] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[422] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[423] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[424] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[425] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[426] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[427] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[428] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[429] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[430] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[431] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[432] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[433] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[434] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[435] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[436] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[437] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[438] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[439] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[440] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[441] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[442] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[443] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[444] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[445] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[446] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[447] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[448] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[449] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[450] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[451] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[452] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[453] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[454] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[455] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[456] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[457] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[458] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[459] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[460] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[461] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[462] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[463] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[464] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[465] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[466] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[467] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[468] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[469] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[470] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[471] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[472] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[473] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[474] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[475] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[476] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[477] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[478] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[479] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[480] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[481] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[482] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[483] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[484] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[485] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[486] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[487] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[488] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[489] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[490] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[491] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[492] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[493] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[494] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[495] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[496] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[497] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[498] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[499] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[500] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[501] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[502] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[503] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[504] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[505] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[506] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[507] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[508] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[509] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[510] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[511] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[512] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[513] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[514] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[515] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[516] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[517] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[518] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[519] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[520] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[521] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[522] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[523] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[524] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[525] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[526] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[527] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[528] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[529] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[530] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[531] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[532] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[533] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[534] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[535] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[536] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[537] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[538] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[539] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[540] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[541] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[542] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[543] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[544] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[545] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[546] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[547] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[548] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[549] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[550] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[551] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[552] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[553] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[554] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[555] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[556] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[557] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[558] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[559] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[560] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[561] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[562] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[563] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[564] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[565] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[566] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[567] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[568] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[569] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[570] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[571] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[572] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[573] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[574] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[575] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[576] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[577] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[578] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[579] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[580] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[581] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[582] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[583] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[584] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[585] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[586] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[587] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[588] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[589] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[590] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[591] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[592] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[593] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[594] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[595] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[596] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[597] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[598] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[599] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[600] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[601] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[602] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[603] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[604] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[605] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[606] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[607] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[608] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[609] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[610] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[611] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[612] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[613] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[614] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[615] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[616] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[617] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[618] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[619] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[620] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[621] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[622] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[623] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[624] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[625] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[626] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[627] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[628] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[629] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[630] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[631] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[632] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[633] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[634] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[635] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[636] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[637] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[638] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[639] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[640] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[641] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[642] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[643] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[644] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[645] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[646] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[647] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[648] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[649] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[650] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[651] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[652] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[653] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[654] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[655] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[656] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[657] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[658] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[659] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[660] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[661] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[662] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[663] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[664] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[665] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[666] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[667] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[668] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[669] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[670] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[671] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[672] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[673] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[674] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[675] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[676] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[677] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[678] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[679] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[680] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[681] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[682] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[683] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[684] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[685] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[686] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[687] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[688] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[689] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[690] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[691] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[692] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[693] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[694] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[695] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[696] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[697] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[698] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[699] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[700] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[701] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[702] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[703] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[704] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[705] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[706] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[707] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[708] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[709] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[710] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[711] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[712] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[713] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[714] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[715] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[716] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[717] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[718] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[719] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[720] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[721] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[722] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[723] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[724] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[725] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[726] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[727] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[728] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[729] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[730] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[731] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[732] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[733] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[734] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[735] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[736] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[737] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[738] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[739] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[740] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[741] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[742] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[743] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[744] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[745] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[746] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[747] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[748] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[749] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[750] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[751] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[752] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[753] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[754] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[755] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[756] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[757] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[758] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[759] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[760] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[761] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[762] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[763] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[764] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[765] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[766] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[767] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[768] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[769] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[770] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[771] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[772] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[773] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[774] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[775] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[776] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[777] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[778] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[779] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[780] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[781] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[782] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[783] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[784] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[785] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[786] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[787] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[788] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[789] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[790] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[791] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[792] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[793] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[794] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[795] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[796] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[797] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[798] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[799] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[800] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[801] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[802] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[803] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[804] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[805] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[806] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[807] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[808] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[809] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[810] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[811] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[812] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[813] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[814] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[815] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[816] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[817] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[818] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[819] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[820] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[821] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[822] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[823] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[824] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[825] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[826] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[827] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[828] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[829] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[830] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[831] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[832] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[833] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[834] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[835] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[836] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[837] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[838] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[839] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[840] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[841] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[842] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[843] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[844] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[845] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[846] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[847] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[848] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[849] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[850] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[851] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[852] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[853] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[854] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[855] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[856] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[857] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[858] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[859] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[860] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[861] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[862] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[863] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[864] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[865] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[866] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[867] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[868] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[869] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[870] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[871] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[872] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[873] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[874] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[875] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[876] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[877] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[878] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[879] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[880] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[881] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[882] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[883] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[884] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[885] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[886] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[887] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[888] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[889] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[890] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[891] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[892] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[893] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[894] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[895] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[896] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[897] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[898] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[899] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[900] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[901] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[902] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[903] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[904] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[905] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[906] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[907] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[908] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[909] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[910] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[911] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[912] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[913] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[914] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[915] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[916] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[917] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[918] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[919] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[920] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[921] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[922] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[923] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[924] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[925] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[926] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[927] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[928] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[929] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[930] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[931] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[932] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[933] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[934] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[935] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[936] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[937] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[938] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[939] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[940] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[941] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[942] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[943] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[944] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[945] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[946] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[947] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[948] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[949] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[950] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[951] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[952] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[953] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[954] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[955] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[956] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[957] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[958] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[959] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[960] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[961] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[962] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[963] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[964] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[965] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[966] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[967] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[968] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[969] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[970] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[971] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[972] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[973] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[974] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[975] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[976] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[977] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[978] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[979] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[980] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[981] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[982] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[983] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[984] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[985] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[986] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[987] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[988] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[989] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[990] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[991] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[992] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[993] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[994] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[995] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[996] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[997] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[998] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[999] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[1000] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[1001] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[1002] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[1003] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[1004] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[1005] = 1U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[1006] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[1007] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[1008] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[1009] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[1010] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[1011] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[1012] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[1013] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[1014] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[1015] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[1016] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[1017] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[1018] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[1019] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[1020] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[1021] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[1022] = 0U;
    __Vtable2_NES__DOT__CPU0__DOT__PC_inc[1023] = 0U;
    __Vtableidx3 = VL_RAND_RESET_I(7);
    __Vtable3_NES__DOT__RWE[0] = 0U;
    __Vtable3_NES__DOT__RWE[1] = 0U;
    __Vtable3_NES__DOT__RWE[2] = 0U;
    __Vtable3_NES__DOT__RWE[3] = 0U;
    __Vtable3_NES__DOT__RWE[4] = 0U;
    __Vtable3_NES__DOT__RWE[5] = 0U;
    __Vtable3_NES__DOT__RWE[6] = 0U;
    __Vtable3_NES__DOT__RWE[7] = 0U;
    __Vtable3_NES__DOT__RWE[8] = 1U;
    __Vtable3_NES__DOT__RWE[9] = 1U;
    __Vtable3_NES__DOT__RWE[10] = 1U;
    __Vtable3_NES__DOT__RWE[11] = 0U;
    __Vtable3_NES__DOT__RWE[12] = 0U;
    __Vtable3_NES__DOT__RWE[13] = 0U;
    __Vtable3_NES__DOT__RWE[14] = 0U;
    __Vtable3_NES__DOT__RWE[15] = 0U;
    __Vtable3_NES__DOT__RWE[16] = 0U;
    __Vtable3_NES__DOT__RWE[17] = 0U;
    __Vtable3_NES__DOT__RWE[18] = 0U;
    __Vtable3_NES__DOT__RWE[19] = 0U;
    __Vtable3_NES__DOT__RWE[20] = 0U;
    __Vtable3_NES__DOT__RWE[21] = 0U;
    __Vtable3_NES__DOT__RWE[22] = 0U;
    __Vtable3_NES__DOT__RWE[23] = 0U;
    __Vtable3_NES__DOT__RWE[24] = 0U;
    __Vtable3_NES__DOT__RWE[25] = 0U;
    __Vtable3_NES__DOT__RWE[26] = 1U;
    __Vtable3_NES__DOT__RWE[27] = 1U;
    __Vtable3_NES__DOT__RWE[28] = 0U;
    __Vtable3_NES__DOT__RWE[29] = 0U;
    __Vtable3_NES__DOT__RWE[30] = 0U;
    __Vtable3_NES__DOT__RWE[31] = 0U;
    __Vtable3_NES__DOT__RWE[32] = 0U;
    __Vtable3_NES__DOT__RWE[33] = 0U;
    __Vtable3_NES__DOT__RWE[34] = 1U;
    __Vtable3_NES__DOT__RWE[35] = 0U;
    __Vtable3_NES__DOT__RWE[36] = 0U;
    __Vtable3_NES__DOT__RWE[37] = 0U;
    __Vtable3_NES__DOT__RWE[38] = 0U;
    __Vtable3_NES__DOT__RWE[39] = 0U;
    __Vtable3_NES__DOT__RWE[40] = 0U;
    __Vtable3_NES__DOT__RWE[41] = 0U;
    __Vtable3_NES__DOT__RWE[42] = 0U;
    __Vtable3_NES__DOT__RWE[43] = 0U;
    __Vtable3_NES__DOT__RWE[44] = 0U;
    __Vtable3_NES__DOT__RWE[45] = 0U;
    __Vtable3_NES__DOT__RWE[46] = 1U;
    __Vtable3_NES__DOT__RWE[47] = 0U;
    __Vtable3_NES__DOT__RWE[48] = 0U;
    __Vtable3_NES__DOT__RWE[49] = 0U;
    __Vtable3_NES__DOT__RWE[50] = 0U;
    __Vtable3_NES__DOT__RWE[51] = 0U;
    __Vtable3_NES__DOT__RWE[52] = 0U;
    __Vtable3_NES__DOT__RWE[53] = 0U;
    __Vtable3_NES__DOT__RWE[54] = 0U;
    __Vtable3_NES__DOT__RWE[55] = 0U;
    __Vtable3_NES__DOT__RWE[56] = 0U;
    __Vtable3_NES__DOT__RWE[57] = 0U;
    __Vtable3_NES__DOT__RWE[58] = 0U;
    __Vtable3_NES__DOT__RWE[59] = 0U;
    __Vtable3_NES__DOT__RWE[60] = 0U;
    __Vtable3_NES__DOT__RWE[61] = 0U;
    __Vtable3_NES__DOT__RWE[62] = 0U;
    __Vtable3_NES__DOT__RWE[63] = 0U;
    __Vtable3_NES__DOT__RWE[64] = 0U;
    __Vtable3_NES__DOT__RWE[65] = 1U;
    __Vtable3_NES__DOT__RWE[66] = 0U;
    __Vtable3_NES__DOT__RWE[67] = 0U;
    __Vtable3_NES__DOT__RWE[68] = 1U;
    __Vtable3_NES__DOT__RWE[69] = 0U;
    __Vtable3_NES__DOT__RWE[70] = 0U;
    __Vtable3_NES__DOT__RWE[71] = 0U;
    __Vtable3_NES__DOT__RWE[72] = 1U;
    __Vtable3_NES__DOT__RWE[73] = 1U;
    __Vtable3_NES__DOT__RWE[74] = 1U;
    __Vtable3_NES__DOT__RWE[75] = 0U;
    __Vtable3_NES__DOT__RWE[76] = 0U;
    __Vtable3_NES__DOT__RWE[77] = 0U;
    __Vtable3_NES__DOT__RWE[78] = 0U;
    __Vtable3_NES__DOT__RWE[79] = 0U;
    __Vtable3_NES__DOT__RWE[80] = 0U;
    __Vtable3_NES__DOT__RWE[81] = 1U;
    __Vtable3_NES__DOT__RWE[82] = 0U;
    __Vtable3_NES__DOT__RWE[83] = 0U;
    __Vtable3_NES__DOT__RWE[84] = 0U;
    __Vtable3_NES__DOT__RWE[85] = 1U;
    __Vtable3_NES__DOT__RWE[86] = 0U;
    __Vtable3_NES__DOT__RWE[87] = 0U;
    __Vtable3_NES__DOT__RWE[88] = 0U;
    __Vtable3_NES__DOT__RWE[89] = 0U;
    __Vtable3_NES__DOT__RWE[90] = 1U;
    __Vtable3_NES__DOT__RWE[91] = 1U;
    __Vtable3_NES__DOT__RWE[92] = 0U;
    __Vtable3_NES__DOT__RWE[93] = 0U;
    __Vtable3_NES__DOT__RWE[94] = 0U;
    __Vtable3_NES__DOT__RWE[95] = 0U;
    __Vtable3_NES__DOT__RWE[96] = 0U;
    __Vtable3_NES__DOT__RWE[97] = 0U;
    __Vtable3_NES__DOT__RWE[98] = 1U;
    __Vtable3_NES__DOT__RWE[99] = 0U;
    __Vtable3_NES__DOT__RWE[100] = 0U;
    __Vtable3_NES__DOT__RWE[101] = 0U;
    __Vtable3_NES__DOT__RWE[102] = 0U;
    __Vtable3_NES__DOT__RWE[103] = 0U;
    __Vtable3_NES__DOT__RWE[104] = 0U;
    __Vtable3_NES__DOT__RWE[105] = 0U;
    __Vtable3_NES__DOT__RWE[106] = 0U;
    __Vtable3_NES__DOT__RWE[107] = 0U;
    __Vtable3_NES__DOT__RWE[108] = 0U;
    __Vtable3_NES__DOT__RWE[109] = 0U;
    __Vtable3_NES__DOT__RWE[110] = 1U;
    __Vtable3_NES__DOT__RWE[111] = 1U;
    __Vtable3_NES__DOT__RWE[112] = 0U;
    __Vtable3_NES__DOT__RWE[113] = 1U;
    __Vtable3_NES__DOT__RWE[114] = 0U;
    __Vtable3_NES__DOT__RWE[115] = 0U;
    __Vtable3_NES__DOT__RWE[116] = 0U;
    __Vtable3_NES__DOT__RWE[117] = 0U;
    __Vtable3_NES__DOT__RWE[118] = 0U;
    __Vtable3_NES__DOT__RWE[119] = 0U;
    __Vtable3_NES__DOT__RWE[120] = 0U;
    __Vtable3_NES__DOT__RWE[121] = 0U;
    __Vtable3_NES__DOT__RWE[122] = 0U;
    __Vtable3_NES__DOT__RWE[123] = 0U;
    __Vtable3_NES__DOT__RWE[124] = 0U;
    __Vtable3_NES__DOT__RWE[125] = 0U;
    __Vtable3_NES__DOT__RWE[126] = 0U;
    __Vtable3_NES__DOT__RWE[127] = 0U;
    __Vtableidx4 = VL_RAND_RESET_I(8);
    __Vtable4_NES__DOT__CPU0__DOT__write_register[0] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[1] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[2] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[3] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[4] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[5] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[6] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[7] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[8] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[9] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[10] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[11] = 1U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[12] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[13] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[14] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[15] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[16] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[17] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[18] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[19] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[20] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[21] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[22] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[23] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[24] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[25] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[26] = 1U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[27] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[28] = 1U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[29] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[30] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[31] = 1U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[32] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[33] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[34] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[35] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[36] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[37] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[38] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[39] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[40] = 1U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[41] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[42] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[43] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[44] = 1U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[45] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[46] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[47] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[48] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[49] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[50] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[51] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[52] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[53] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[54] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[55] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[56] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[57] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[58] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[59] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[60] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[61] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[62] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[63] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[64] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[65] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[66] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[67] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[68] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[69] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[70] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[71] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[72] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[73] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[74] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[75] = 1U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[76] = 1U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[77] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[78] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[79] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[80] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[81] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[82] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[83] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[84] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[85] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[86] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[87] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[88] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[89] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[90] = 1U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[91] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[92] = 1U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[93] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[94] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[95] = 1U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[96] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[97] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[98] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[99] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[100] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[101] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[102] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[103] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[104] = 1U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[105] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[106] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[107] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[108] = 1U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[109] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[110] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[111] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[112] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[113] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[114] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[115] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[116] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[117] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[118] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[119] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[120] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[121] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[122] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[123] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[124] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[125] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[126] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[127] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[128] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[129] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[130] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[131] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[132] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[133] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[134] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[135] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[136] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[137] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[138] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[139] = 1U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[140] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[141] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[142] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[143] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[144] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[145] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[146] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[147] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[148] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[149] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[150] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[151] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[152] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[153] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[154] = 1U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[155] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[156] = 1U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[157] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[158] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[159] = 1U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[160] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[161] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[162] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[163] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[164] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[165] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[166] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[167] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[168] = 1U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[169] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[170] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[171] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[172] = 1U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[173] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[174] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[175] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[176] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[177] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[178] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[179] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[180] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[181] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[182] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[183] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[184] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[185] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[186] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[187] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[188] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[189] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[190] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[191] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[192] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[193] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[194] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[195] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[196] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[197] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[198] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[199] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[200] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[201] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[202] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[203] = 1U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[204] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[205] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[206] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[207] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[208] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[209] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[210] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[211] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[212] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[213] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[214] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[215] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[216] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[217] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[218] = 1U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[219] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[220] = 1U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[221] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[222] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[223] = 1U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[224] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[225] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[226] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[227] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[228] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[229] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[230] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[231] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[232] = 1U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[233] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[234] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[235] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[236] = 1U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[237] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[238] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[239] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[240] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[241] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[242] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[243] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[244] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[245] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[246] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[247] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[248] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[249] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[250] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[251] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[252] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[253] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[254] = 0U;
    __Vtable4_NES__DOT__CPU0__DOT__write_register[255] = 0U;
    __Vtableidx5 = VL_RAND_RESET_I(11);
    __Vtable5_NES__DOT__CPU0__DOT__regsel[0] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[3] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[4] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[5] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[6] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[7] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[8] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[9] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[10] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[11] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[12] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[13] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[14] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[15] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[16] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[17] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[18] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[19] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[20] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[21] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[22] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[23] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[24] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[25] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[26] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[27] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[28] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[29] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[30] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[31] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[32] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[33] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[34] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[35] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[36] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[37] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[38] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[39] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[40] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[41] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[42] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[43] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[44] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[45] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[46] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[47] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[48] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[49] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[50] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[51] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[52] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[53] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[54] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[55] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[56] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[57] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[58] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[59] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[60] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[61] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[62] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[63] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[64] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[65] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[66] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[67] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[68] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[69] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[70] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[71] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[72] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[73] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[74] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[75] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[76] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[77] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[78] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[79] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[80] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[81] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[82] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[83] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[84] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[85] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[86] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[87] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[88] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[89] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[90] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[91] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[92] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[93] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[94] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[95] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[96] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[97] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[98] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[99] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[100] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[101] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[102] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[103] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[104] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[105] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[106] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[107] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[108] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[109] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[110] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[111] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[112] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[113] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[114] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[115] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[116] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[117] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[118] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[119] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[120] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[121] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[122] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[123] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[124] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[125] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[126] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[127] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[128] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[129] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[130] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[131] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[132] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[133] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[134] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[135] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[136] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[137] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[138] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[139] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[140] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[141] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[142] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[143] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[144] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[145] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[146] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[147] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[148] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[149] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[150] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[151] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[152] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[153] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[154] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[155] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[156] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[157] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[158] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[159] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[160] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[161] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[162] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[163] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[164] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[165] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[166] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[167] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[168] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[169] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[170] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[171] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[172] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[173] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[174] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[175] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[176] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[177] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[178] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[179] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[180] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[181] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[182] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[183] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[184] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[185] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[186] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[187] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[188] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[189] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[190] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[191] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[192] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[193] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[194] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[195] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[196] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[197] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[198] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[199] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[200] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[201] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[202] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[203] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[204] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[205] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[206] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[207] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[208] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[209] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[210] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[211] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[212] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[213] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[214] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[215] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[216] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[217] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[218] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[219] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[220] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[221] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[222] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[223] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[224] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[225] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[226] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[227] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[228] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[229] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[230] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[231] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[232] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[233] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[234] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[235] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[236] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[237] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[238] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[239] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[240] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[241] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[242] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[243] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[244] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[245] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[246] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[247] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[248] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[249] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[250] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[251] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[252] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[253] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[254] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[255] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[256] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[257] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[258] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[259] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[260] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[261] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[262] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[263] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[264] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[265] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[266] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[267] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[268] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[269] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[270] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[271] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[272] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[273] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[274] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[275] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[276] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[277] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[278] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[279] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[280] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[281] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[282] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[283] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[284] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[285] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[286] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[287] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[288] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[289] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[290] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[291] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[292] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[293] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[294] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[295] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[296] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[297] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[298] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[299] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[300] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[301] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[302] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[303] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[304] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[305] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[306] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[307] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[308] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[309] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[310] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[311] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[312] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[313] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[314] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[315] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[316] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[317] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[318] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[319] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[320] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[321] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[322] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[323] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[324] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[325] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[326] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[327] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[328] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[329] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[330] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[331] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[332] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[333] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[334] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[335] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[336] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[337] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[338] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[339] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[340] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[341] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[342] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[343] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[344] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[345] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[346] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[347] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[348] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[349] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[350] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[351] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[352] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[353] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[354] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[355] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[356] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[357] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[358] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[359] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[360] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[361] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[362] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[363] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[364] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[365] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[366] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[367] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[368] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[369] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[370] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[371] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[372] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[373] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[374] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[375] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[376] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[377] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[378] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[379] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[380] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[381] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[382] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[383] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[384] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[385] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[386] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[387] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[388] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[389] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[390] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[391] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[392] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[393] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[394] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[395] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[396] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[397] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[398] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[399] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[400] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[401] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[402] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[403] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[404] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[405] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[406] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[407] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[408] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[409] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[410] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[411] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[412] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[413] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[414] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[415] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[416] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[417] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[418] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[419] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[420] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[421] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[422] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[423] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[424] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[425] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[426] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[427] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[428] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[429] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[430] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[431] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[432] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[433] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[434] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[435] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[436] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[437] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[438] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[439] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[440] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[441] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[442] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[443] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[444] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[445] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[446] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[447] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[448] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[449] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[450] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[451] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[452] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[453] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[454] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[455] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[456] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[457] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[458] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[459] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[460] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[461] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[462] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[463] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[464] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[465] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[466] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[467] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[468] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[469] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[470] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[471] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[472] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[473] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[474] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[475] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[476] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[477] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[478] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[479] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[480] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[481] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[482] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[483] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[484] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[485] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[486] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[487] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[488] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[489] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[490] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[491] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[492] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[493] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[494] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[495] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[496] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[497] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[498] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[499] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[500] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[501] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[502] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[503] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[504] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[505] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[506] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[507] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[508] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[509] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[510] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[511] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[512] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[513] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[514] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[515] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[516] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[517] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[518] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[519] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[520] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[521] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[522] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[523] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[524] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[525] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[526] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[527] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[528] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[529] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[530] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[531] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[532] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[533] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[534] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[535] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[536] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[537] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[538] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[539] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[540] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[541] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[542] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[543] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[544] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[545] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[546] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[547] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[548] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[549] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[550] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[551] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[552] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[553] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[554] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[555] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[556] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[557] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[558] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[559] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[560] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[561] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[562] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[563] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[564] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[565] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[566] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[567] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[568] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[569] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[570] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[571] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[572] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[573] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[574] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[575] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[576] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[577] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[578] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[579] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[580] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[581] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[582] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[583] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[584] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[585] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[586] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[587] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[588] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[589] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[590] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[591] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[592] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[593] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[594] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[595] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[596] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[597] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[598] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[599] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[600] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[601] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[602] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[603] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[604] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[605] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[606] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[607] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[608] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[609] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[610] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[611] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[612] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[613] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[614] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[615] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[616] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[617] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[618] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[619] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[620] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[621] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[622] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[623] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[624] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[625] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[626] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[627] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[628] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[629] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[630] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[631] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[632] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[633] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[634] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[635] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[636] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[637] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[638] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[639] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[640] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[641] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[642] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[643] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[644] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[645] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[646] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[647] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[648] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[649] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[650] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[651] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[652] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[653] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[654] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[655] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[656] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[657] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[658] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[659] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[660] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[661] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[662] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[663] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[664] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[665] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[666] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[667] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[668] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[669] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[670] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[671] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[672] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[673] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[674] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[675] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[676] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[677] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[678] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[679] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[680] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[681] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[682] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[683] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[684] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[685] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[686] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[687] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[688] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[689] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[690] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[691] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[692] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[693] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[694] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[695] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[696] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[697] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[698] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[699] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[700] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[701] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[702] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[703] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[704] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[705] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[706] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[707] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[708] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[709] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[710] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[711] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[712] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[713] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[714] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[715] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[716] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[717] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[718] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[719] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[720] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[721] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[722] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[723] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[724] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[725] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[726] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[727] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[728] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[729] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[730] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[731] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[732] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[733] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[734] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[735] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[736] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[737] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[738] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[739] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[740] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[741] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[742] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[743] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[744] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[745] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[746] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[747] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[748] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[749] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[750] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[751] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[752] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[753] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[754] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[755] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[756] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[757] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[758] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[759] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[760] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[761] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[762] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[763] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[764] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[765] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[766] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[767] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[768] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[769] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[770] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[771] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[772] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[773] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[774] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[775] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[776] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[777] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[778] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[779] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[780] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[781] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[782] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[783] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[784] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[785] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[786] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[787] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[788] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[789] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[790] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[791] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[792] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[793] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[794] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[795] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[796] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[797] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[798] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[799] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[800] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[801] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[802] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[803] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[804] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[805] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[806] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[807] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[808] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[809] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[810] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[811] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[812] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[813] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[814] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[815] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[816] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[817] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[818] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[819] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[820] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[821] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[822] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[823] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[824] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[825] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[826] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[827] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[828] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[829] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[830] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[831] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[832] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[833] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[834] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[835] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[836] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[837] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[838] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[839] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[840] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[841] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[842] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[843] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[844] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[845] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[846] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[847] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[848] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[849] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[850] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[851] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[852] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[853] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[854] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[855] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[856] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[857] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[858] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[859] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[860] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[861] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[862] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[863] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[864] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[865] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[866] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[867] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[868] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[869] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[870] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[871] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[872] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[873] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[874] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[875] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[876] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[877] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[878] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[879] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[880] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[881] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[882] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[883] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[884] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[885] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[886] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[887] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[888] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[889] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[890] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[891] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[892] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[893] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[894] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[895] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[896] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[897] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[898] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[899] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[900] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[901] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[902] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[903] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[904] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[905] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[906] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[907] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[908] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[909] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[910] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[911] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[912] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[913] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[914] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[915] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[916] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[917] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[918] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[919] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[920] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[921] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[922] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[923] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[924] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[925] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[926] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[927] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[928] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[929] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[930] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[931] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[932] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[933] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[934] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[935] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[936] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[937] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[938] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[939] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[940] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[941] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[942] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[943] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[944] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[945] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[946] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[947] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[948] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[949] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[950] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[951] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[952] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[953] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[954] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[955] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[956] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[957] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[958] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[959] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[960] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[961] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[962] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[963] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[964] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[965] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[966] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[967] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[968] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[969] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[970] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[971] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[972] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[973] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[974] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[975] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[976] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[977] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[978] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[979] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[980] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[981] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[982] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[983] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[984] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[985] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[986] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[987] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[988] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[989] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[990] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[991] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[992] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[993] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[994] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[995] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[996] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[997] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[998] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[999] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1000] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1001] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1002] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1003] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1004] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1005] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1006] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1007] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1008] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1009] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1010] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1011] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1012] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1013] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1014] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1015] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1016] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1017] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1018] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1019] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1020] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1021] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1022] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1023] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1024] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1025] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1026] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1027] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1028] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1029] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1030] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1031] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1032] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1033] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1034] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1035] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1036] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1037] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1038] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1039] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1040] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1041] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1042] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1043] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1044] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1045] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1046] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1047] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1048] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1049] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1050] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1051] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1052] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1053] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1054] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1055] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1056] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1057] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1058] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1059] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1060] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1061] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1062] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1063] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1064] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1065] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1066] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1067] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1068] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1069] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1070] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1071] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1072] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1073] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1074] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1075] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1076] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1077] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1078] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1079] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1080] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1081] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1082] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1083] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1084] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1085] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1086] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1087] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1088] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1089] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1090] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1091] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1092] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1093] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1094] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1095] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1096] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1097] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1098] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1099] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1100] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1101] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1102] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1103] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1104] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1105] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1106] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1107] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1108] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1109] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1110] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1111] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1112] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1113] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1114] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1115] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1116] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1117] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1118] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1119] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1120] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1121] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1122] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1123] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1124] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1125] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1126] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1127] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1128] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1129] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1130] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1131] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1132] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1133] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1134] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1135] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1136] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1137] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1138] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1139] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1140] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1141] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1142] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1143] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1144] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1145] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1146] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1147] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1148] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1149] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1150] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1151] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1152] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1153] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1154] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1155] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1156] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1157] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1158] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1159] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1160] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1161] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1162] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1163] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1164] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1165] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1166] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1167] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1168] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1169] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1170] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1171] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1172] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1173] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1174] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1175] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1176] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1177] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1178] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1179] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1180] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1181] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1182] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1183] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1184] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1185] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1186] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1187] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1188] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1189] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1190] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1191] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1192] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1193] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1194] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1195] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1196] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1197] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1198] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1199] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1200] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1201] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1202] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1203] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1204] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1205] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1206] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1207] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1208] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1209] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1210] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1211] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1212] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1213] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1214] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1215] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1216] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1217] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1218] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1219] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1220] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1221] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1222] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1223] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1224] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1225] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1226] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1227] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1228] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1229] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1230] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1231] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1232] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1233] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1234] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1235] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1236] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1237] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1238] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1239] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1240] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1241] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1242] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1243] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1244] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1245] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1246] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1247] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1248] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1249] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1250] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1251] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1252] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1253] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1254] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1255] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1256] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1257] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1258] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1259] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1260] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1261] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1262] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1263] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1264] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1265] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1266] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1267] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1268] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1269] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1270] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1271] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1272] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1273] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1274] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1275] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1276] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1277] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1278] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1279] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1280] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1281] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1282] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1283] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1284] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1285] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1286] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1287] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1288] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1289] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1290] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1291] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1292] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1293] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1294] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1295] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1296] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1297] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1298] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1299] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1300] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1301] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1302] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1303] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1304] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1305] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1306] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1307] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1308] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1309] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1310] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1311] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1312] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1313] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1314] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1315] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1316] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1317] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1318] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1319] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1320] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1321] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1322] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1323] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1324] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1325] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1326] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1327] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1328] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1329] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1330] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1331] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1332] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1333] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1334] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1335] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1336] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1337] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1338] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1339] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1340] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1341] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1342] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1343] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1344] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1345] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1346] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1347] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1348] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1349] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1350] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1351] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1352] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1353] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1354] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1355] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1356] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1357] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1358] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1359] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1360] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1361] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1362] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1363] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1364] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1365] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1366] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1367] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1368] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1369] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1370] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1371] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1372] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1373] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1374] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1375] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1376] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1377] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1378] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1379] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1380] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1381] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1382] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1383] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1384] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1385] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1386] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1387] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1388] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1389] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1390] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1391] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1392] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1393] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1394] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1395] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1396] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1397] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1398] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1399] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1400] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1401] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1402] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1403] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1404] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1405] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1406] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1407] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1408] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1409] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1410] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1411] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1412] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1413] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1414] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1415] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1416] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1417] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1418] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1419] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1420] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1421] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1422] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1423] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1424] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1425] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1426] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1427] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1428] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1429] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1430] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1431] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1432] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1433] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1434] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1435] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1436] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1437] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1438] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1439] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1440] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1441] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1442] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1443] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1444] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1445] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1446] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1447] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1448] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1449] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1450] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1451] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1452] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1453] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1454] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1455] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1456] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1457] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1458] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1459] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1460] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1461] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1462] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1463] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1464] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1465] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1466] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1467] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1468] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1469] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1470] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1471] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1472] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1473] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1474] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1475] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1476] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1477] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1478] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1479] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1480] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1481] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1482] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1483] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1484] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1485] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1486] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1487] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1488] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1489] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1490] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1491] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1492] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1493] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1494] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1495] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1496] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1497] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1498] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1499] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1500] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1501] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1502] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1503] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1504] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1505] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1506] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1507] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1508] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1509] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1510] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1511] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1512] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1513] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1514] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1515] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1516] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1517] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1518] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1519] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1520] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1521] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1522] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1523] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1524] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1525] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1526] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1527] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1528] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1529] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1530] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1531] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1532] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1533] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1534] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1535] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1536] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1537] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1538] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1539] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1540] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1541] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1542] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1543] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1544] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1545] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1546] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1547] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1548] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1549] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1550] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1551] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1552] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1553] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1554] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1555] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1556] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1557] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1558] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1559] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1560] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1561] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1562] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1563] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1564] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1565] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1566] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1567] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1568] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1569] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1570] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1571] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1572] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1573] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1574] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1575] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1576] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1577] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1578] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1579] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1580] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1581] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1582] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1583] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1584] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1585] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1586] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1587] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1588] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1589] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1590] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1591] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1592] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1593] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1594] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1595] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1596] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1597] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1598] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1599] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1600] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1601] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1602] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1603] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1604] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1605] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1606] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1607] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1608] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1609] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1610] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1611] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1612] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1613] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1614] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1615] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1616] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1617] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1618] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1619] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1620] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1621] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1622] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1623] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1624] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1625] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1626] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1627] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1628] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1629] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1630] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1631] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1632] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1633] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1634] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1635] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1636] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1637] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1638] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1639] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1640] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1641] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1642] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1643] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1644] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1645] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1646] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1647] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1648] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1649] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1650] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1651] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1652] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1653] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1654] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1655] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1656] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1657] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1658] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1659] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1660] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1661] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1662] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1663] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1664] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1665] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1666] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1667] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1668] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1669] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1670] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1671] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1672] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1673] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1674] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1675] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1676] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1677] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1678] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1679] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1680] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1681] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1682] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1683] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1684] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1685] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1686] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1687] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1688] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1689] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1690] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1691] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1692] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1693] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1694] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1695] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1696] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1697] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1698] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1699] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1700] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1701] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1702] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1703] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1704] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1705] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1706] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1707] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1708] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1709] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1710] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1711] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1712] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1713] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1714] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1715] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1716] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1717] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1718] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1719] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1720] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1721] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1722] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1723] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1724] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1725] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1726] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1727] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1728] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1729] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1730] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1731] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1732] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1733] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1734] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1735] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1736] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1737] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1738] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1739] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1740] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1741] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1742] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1743] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1744] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1745] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1746] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1747] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1748] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1749] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1750] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1751] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1752] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1753] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1754] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1755] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1756] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1757] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1758] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1759] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1760] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1761] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1762] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1763] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1764] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1765] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1766] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1767] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1768] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1769] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1770] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1771] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1772] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1773] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1774] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1775] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1776] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1777] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1778] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1779] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1780] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1781] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1782] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1783] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1784] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1785] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1786] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1787] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1788] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1789] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1790] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1791] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1792] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1793] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1794] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1795] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1796] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1797] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1798] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1799] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1800] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1801] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1802] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1803] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1804] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1805] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1806] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1807] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1808] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1809] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1810] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1811] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1812] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1813] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1814] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1815] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1816] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1817] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1818] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1819] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1820] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1821] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1822] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1823] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1824] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1825] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1826] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1827] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1828] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1829] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1830] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1831] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1832] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1833] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1834] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1835] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1836] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1837] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1838] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1839] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1840] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1841] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1842] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1843] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1844] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1845] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1846] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1847] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1848] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1849] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1850] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1851] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1852] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1853] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1854] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1855] = 0U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1856] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1857] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1858] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1859] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1860] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1861] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1862] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1863] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1864] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1865] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1866] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1867] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1868] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1869] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1870] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1871] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1872] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1873] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1874] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1875] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1876] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1877] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1878] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1879] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1880] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1881] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1882] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1883] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1884] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1885] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1886] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1887] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1888] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1889] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1890] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1891] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1892] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1893] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1894] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1895] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1896] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1897] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1898] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1899] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1900] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1901] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1902] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1903] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1904] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1905] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1906] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1907] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1908] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1909] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1910] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1911] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1912] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1913] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1914] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1915] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1916] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1917] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1918] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1919] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1920] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1921] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1922] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1923] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1924] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1925] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1926] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1927] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1928] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1929] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1930] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1931] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1932] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1933] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1934] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1935] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1936] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1937] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1938] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1939] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1940] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1941] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1942] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1943] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1944] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1945] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1946] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1947] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1948] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1949] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1950] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1951] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1952] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1953] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1954] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1955] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1956] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1957] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1958] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1959] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1960] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1961] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1962] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1963] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1964] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1965] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1966] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1967] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1968] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1969] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1970] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1971] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1972] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1973] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1974] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1975] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1976] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1977] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1978] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1979] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1980] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1981] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1982] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1983] = 2U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1984] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1985] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1986] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1987] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1988] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1989] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1990] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1991] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1992] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1993] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1994] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1995] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1996] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1997] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1998] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[1999] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2000] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2001] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2002] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2003] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2004] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2005] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2006] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2007] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2008] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2009] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2010] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2011] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2012] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2013] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2014] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2015] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2016] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2017] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2018] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2019] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2020] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2021] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2022] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2023] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2024] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2025] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2026] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2027] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2028] = 1U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2029] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2030] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2031] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2032] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2033] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2034] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2035] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2036] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2037] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2038] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2039] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2040] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2041] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2042] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2043] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2044] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2045] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2046] = 3U;
    __Vtable5_NES__DOT__CPU0__DOT__regsel[2047] = 3U;
    __Vtableidx6 = VL_RAND_RESET_I(11);
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[0] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[3] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[4] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[5] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[6] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[7] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[8] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[9] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[10] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[11] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[12] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[13] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[14] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[15] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[16] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[17] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[18] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[19] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[20] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[21] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[22] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[23] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[24] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[25] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[26] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[27] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[28] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[29] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[30] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[31] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[32] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[33] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[34] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[35] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[36] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[37] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[38] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[39] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[40] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[41] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[42] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[43] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[44] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[45] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[46] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[47] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[48] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[49] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[50] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[51] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[52] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[53] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[54] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[55] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[56] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[57] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[58] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[59] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[60] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[61] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[62] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[63] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[64] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[65] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[66] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[67] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[68] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[69] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[70] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[71] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[72] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[73] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[74] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[75] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[76] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[77] = 1U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[78] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[79] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[80] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[81] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[82] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[83] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[84] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[85] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[86] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[87] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[88] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[89] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[90] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[91] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[92] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[93] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[94] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[95] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[96] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[97] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[98] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[99] = 1U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[100] = 1U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[101] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[102] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[103] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[104] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[105] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[106] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[107] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[108] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[109] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[110] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[111] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[112] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[113] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[114] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[115] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[116] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[117] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[118] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[119] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[120] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[121] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[122] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[123] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[124] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[125] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[126] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[127] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[128] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[129] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[130] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[131] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[132] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[133] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[134] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[135] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[136] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[137] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[138] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[139] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[140] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[141] = 2U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[142] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[143] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[144] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[145] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[146] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[147] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[148] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[149] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[150] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[151] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[152] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[153] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[154] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[155] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[156] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[157] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[158] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[159] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[160] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[161] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[162] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[163] = 2U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[164] = 2U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[165] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[166] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[167] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[168] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[169] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[170] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[171] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[172] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[173] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[174] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[175] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[176] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[177] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[178] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[179] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[180] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[181] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[182] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[183] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[184] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[185] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[186] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[187] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[188] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[189] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[190] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[191] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[192] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[193] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[194] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[195] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[196] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[197] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[198] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[199] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[200] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[201] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[202] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[203] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[204] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[205] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[206] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[207] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[208] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[209] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[210] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[211] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[212] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[213] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[214] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[215] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[216] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[217] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[218] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[219] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[220] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[221] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[222] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[223] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[224] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[225] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[226] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[227] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[228] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[229] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[230] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[231] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[232] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[233] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[234] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[235] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[236] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[237] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[238] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[239] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[240] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[241] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[242] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[243] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[244] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[245] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[246] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[247] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[248] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[249] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[250] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[251] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[252] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[253] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[254] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[255] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[256] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[257] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[258] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[259] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[260] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[261] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[262] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[263] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[264] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[265] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[266] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[267] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[268] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[269] = 4U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[270] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[271] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[272] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[273] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[274] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[275] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[276] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[277] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[278] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[279] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[280] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[281] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[282] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[283] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[284] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[285] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[286] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[287] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[288] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[289] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[290] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[291] = 4U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[292] = 4U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[293] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[294] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[295] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[296] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[297] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[298] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[299] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[300] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[301] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[302] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[303] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[304] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[305] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[306] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[307] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[308] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[309] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[310] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[311] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[312] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[313] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[314] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[315] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[316] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[317] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[318] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[319] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[320] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[321] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[322] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[323] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[324] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[325] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[326] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[327] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[328] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[329] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[330] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[331] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[332] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[333] = 5U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[334] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[335] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[336] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[337] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[338] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[339] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[340] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[341] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[342] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[343] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[344] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[345] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[346] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[347] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[348] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[349] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[350] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[351] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[352] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[353] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[354] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[355] = 5U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[356] = 5U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[357] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[358] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[359] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[360] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[361] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[362] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[363] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[364] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[365] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[366] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[367] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[368] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[369] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[370] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[371] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[372] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[373] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[374] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[375] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[376] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[377] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[378] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[379] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[380] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[381] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[382] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[383] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[384] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[385] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[386] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[387] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[388] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[389] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[390] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[391] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[392] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[393] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[394] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[395] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[396] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[397] = 6U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[398] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[399] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[400] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[401] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[402] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[403] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[404] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[405] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[406] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[407] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[408] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[409] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[410] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[411] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[412] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[413] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[414] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[415] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[416] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[417] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[418] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[419] = 6U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[420] = 6U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[421] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[422] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[423] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[424] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[425] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[426] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[427] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[428] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[429] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[430] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[431] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[432] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[433] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[434] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[435] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[436] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[437] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[438] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[439] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[440] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[441] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[442] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[443] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[444] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[445] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[446] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[447] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[448] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[449] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[450] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[451] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[452] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[453] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[454] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[455] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[456] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[457] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[458] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[459] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[460] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[461] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[462] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[463] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[464] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[465] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[466] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[467] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[468] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[469] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[470] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[471] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[472] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[473] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[474] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[475] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[476] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[477] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[478] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[479] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[480] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[481] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[482] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[483] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[484] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[485] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[486] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[487] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[488] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[489] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[490] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[491] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[492] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[493] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[494] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[495] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[496] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[497] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[498] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[499] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[500] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[501] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[502] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[503] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[504] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[505] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[506] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[507] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[508] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[509] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[510] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[511] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[512] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[513] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[514] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[515] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[516] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[517] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[518] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[519] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[520] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[521] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[522] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[523] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[524] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[525] = 8U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[526] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[527] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[528] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[529] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[530] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[531] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[532] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[533] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[534] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[535] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[536] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[537] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[538] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[539] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[540] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[541] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[542] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[543] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[544] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[545] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[546] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[547] = 8U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[548] = 8U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[549] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[550] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[551] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[552] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[553] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[554] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[555] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[556] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[557] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[558] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[559] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[560] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[561] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[562] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[563] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[564] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[565] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[566] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[567] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[568] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[569] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[570] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[571] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[572] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[573] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[574] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[575] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[576] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[577] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[578] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[579] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[580] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[581] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[582] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[583] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[584] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[585] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[586] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[587] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[588] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[589] = 9U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[590] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[591] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[592] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[593] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[594] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[595] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[596] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[597] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[598] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[599] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[600] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[601] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[602] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[603] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[604] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[605] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[606] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[607] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[608] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[609] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[610] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[611] = 9U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[612] = 9U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[613] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[614] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[615] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[616] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[617] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[618] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[619] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[620] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[621] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[622] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[623] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[624] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[625] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[626] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[627] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[628] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[629] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[630] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[631] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[632] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[633] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[634] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[635] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[636] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[637] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[638] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[639] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[640] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[641] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[642] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[643] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[644] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[645] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[646] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[647] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[648] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[649] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[650] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[651] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[652] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[653] = 0xaU;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[654] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[655] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[656] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[657] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[658] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[659] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[660] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[661] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[662] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[663] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[664] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[665] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[666] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[667] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[668] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[669] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[670] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[671] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[672] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[673] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[674] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[675] = 0xaU;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[676] = 0xaU;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[677] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[678] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[679] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[680] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[681] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[682] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[683] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[684] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[685] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[686] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[687] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[688] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[689] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[690] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[691] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[692] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[693] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[694] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[695] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[696] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[697] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[698] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[699] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[700] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[701] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[702] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[703] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[704] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[705] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[706] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[707] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[708] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[709] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[710] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[711] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[712] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[713] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[714] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[715] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[716] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[717] = 0xbU;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[718] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[719] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[720] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[721] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[722] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[723] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[724] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[725] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[726] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[727] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[728] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[729] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[730] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[731] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[732] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[733] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[734] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[735] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[736] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[737] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[738] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[739] = 0xbU;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[740] = 0xbU;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[741] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[742] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[743] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[744] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[745] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[746] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[747] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[748] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[749] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[750] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[751] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[752] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[753] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[754] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[755] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[756] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[757] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[758] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[759] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[760] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[761] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[762] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[763] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[764] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[765] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[766] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[767] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[768] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[769] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[770] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[771] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[772] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[773] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[774] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[775] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[776] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[777] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[778] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[779] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[780] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[781] = 0xcU;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[782] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[783] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[784] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[785] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[786] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[787] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[788] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[789] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[790] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[791] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[792] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[793] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[794] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[795] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[796] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[797] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[798] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[799] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[800] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[801] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[802] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[803] = 0xcU;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[804] = 0xcU;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[805] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[806] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[807] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[808] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[809] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[810] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[811] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[812] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[813] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[814] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[815] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[816] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[817] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[818] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[819] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[820] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[821] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[822] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[823] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[824] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[825] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[826] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[827] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[828] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[829] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[830] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[831] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[832] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[833] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[834] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[835] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[836] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[837] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[838] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[839] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[840] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[841] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[842] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[843] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[844] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[845] = 0xdU;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[846] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[847] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[848] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[849] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[850] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[851] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[852] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[853] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[854] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[855] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[856] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[857] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[858] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[859] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[860] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[861] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[862] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[863] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[864] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[865] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[866] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[867] = 0xdU;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[868] = 0xdU;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[869] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[870] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[871] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[872] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[873] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[874] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[875] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[876] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[877] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[878] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[879] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[880] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[881] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[882] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[883] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[884] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[885] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[886] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[887] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[888] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[889] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[890] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[891] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[892] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[893] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[894] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[895] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[896] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[897] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[898] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[899] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[900] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[901] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[902] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[903] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[904] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[905] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[906] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[907] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[908] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[909] = 0xeU;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[910] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[911] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[912] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[913] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[914] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[915] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[916] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[917] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[918] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[919] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[920] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[921] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[922] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[923] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[924] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[925] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[926] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[927] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[928] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[929] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[930] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[931] = 0xeU;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[932] = 0xeU;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[933] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[934] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[935] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[936] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[937] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[938] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[939] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[940] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[941] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[942] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[943] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[944] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[945] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[946] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[947] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[948] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[949] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[950] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[951] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[952] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[953] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[954] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[955] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[956] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[957] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[958] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[959] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[960] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[961] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[962] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[963] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[964] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[965] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[966] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[967] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[968] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[969] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[970] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[971] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[972] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[973] = 0xfU;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[974] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[975] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[976] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[977] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[978] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[979] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[980] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[981] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[982] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[983] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[984] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[985] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[986] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[987] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[988] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[989] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[990] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[991] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[992] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[993] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[994] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[995] = 0xfU;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[996] = 0xfU;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[997] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[998] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[999] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1000] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1001] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1002] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1003] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1004] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1005] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1006] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1007] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1008] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1009] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1010] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1011] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1012] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1013] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1014] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1015] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1016] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1017] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1018] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1019] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1020] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1021] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1022] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1023] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1024] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1025] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1026] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1027] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1028] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1029] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1030] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1031] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1032] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1033] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1034] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1035] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1036] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1037] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1038] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1039] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1040] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1041] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1042] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1043] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1044] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1045] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1046] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1047] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1048] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1049] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1050] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1051] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1052] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1053] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1054] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1055] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1056] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1057] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1058] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1059] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1060] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1061] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1062] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1063] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1064] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1065] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1066] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1067] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1068] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1069] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1070] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1071] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1072] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1073] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1074] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1075] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1076] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1077] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1078] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1079] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1080] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1081] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1082] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1083] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1084] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1085] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1086] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1087] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1088] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1089] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1090] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1091] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1092] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1093] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1094] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1095] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1096] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1097] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1098] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1099] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1100] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1101] = 1U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1102] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1103] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1104] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1105] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1106] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1107] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1108] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1109] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1110] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1111] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1112] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1113] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1114] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1115] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1116] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1117] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1118] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1119] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1120] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1121] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1122] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1123] = 1U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1124] = 1U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1125] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1126] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1127] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1128] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1129] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1130] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1131] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1132] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1133] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1134] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1135] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1136] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1137] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1138] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1139] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1140] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1141] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1142] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1143] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1144] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1145] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1146] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1147] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1148] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1149] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1150] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1151] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1152] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1153] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1154] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1155] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1156] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1157] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1158] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1159] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1160] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1161] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1162] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1163] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1164] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1165] = 2U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1166] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1167] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1168] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1169] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1170] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1171] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1172] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1173] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1174] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1175] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1176] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1177] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1178] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1179] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1180] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1181] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1182] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1183] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1184] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1185] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1186] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1187] = 2U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1188] = 2U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1189] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1190] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1191] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1192] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1193] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1194] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1195] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1196] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1197] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1198] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1199] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1200] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1201] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1202] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1203] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1204] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1205] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1206] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1207] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1208] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1209] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1210] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1211] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1212] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1213] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1214] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1215] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1216] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1217] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1218] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1219] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1220] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1221] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1222] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1223] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1224] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1225] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1226] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1227] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1228] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1229] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1230] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1231] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1232] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1233] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1234] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1235] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1236] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1237] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1238] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1239] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1240] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1241] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1242] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1243] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1244] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1245] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1246] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1247] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1248] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1249] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1250] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1251] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1252] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1253] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1254] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1255] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1256] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1257] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1258] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1259] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1260] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1261] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1262] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1263] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1264] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1265] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1266] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1267] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1268] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1269] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1270] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1271] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1272] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1273] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1274] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1275] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1276] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1277] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1278] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1279] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1280] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1281] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1282] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1283] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1284] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1285] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1286] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1287] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1288] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1289] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1290] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1291] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1292] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1293] = 4U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1294] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1295] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1296] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1297] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1298] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1299] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1300] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1301] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1302] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1303] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1304] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1305] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1306] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1307] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1308] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1309] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1310] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1311] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1312] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1313] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1314] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1315] = 4U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1316] = 4U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1317] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1318] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1319] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1320] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1321] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1322] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1323] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1324] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1325] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1326] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1327] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1328] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1329] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1330] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1331] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1332] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1333] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1334] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1335] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1336] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1337] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1338] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1339] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1340] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1341] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1342] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1343] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1344] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1345] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1346] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1347] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1348] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1349] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1350] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1351] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1352] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1353] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1354] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1355] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1356] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1357] = 5U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1358] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1359] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1360] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1361] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1362] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1363] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1364] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1365] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1366] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1367] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1368] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1369] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1370] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1371] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1372] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1373] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1374] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1375] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1376] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1377] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1378] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1379] = 5U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1380] = 5U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1381] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1382] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1383] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1384] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1385] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1386] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1387] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1388] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1389] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1390] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1391] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1392] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1393] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1394] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1395] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1396] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1397] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1398] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1399] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1400] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1401] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1402] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1403] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1404] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1405] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1406] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1407] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1408] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1409] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1410] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1411] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1412] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1413] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1414] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1415] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1416] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1417] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1418] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1419] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1420] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1421] = 6U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1422] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1423] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1424] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1425] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1426] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1427] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1428] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1429] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1430] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1431] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1432] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1433] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1434] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1435] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1436] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1437] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1438] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1439] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1440] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1441] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1442] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1443] = 6U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1444] = 6U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1445] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1446] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1447] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1448] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1449] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1450] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1451] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1452] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1453] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1454] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1455] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1456] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1457] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1458] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1459] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1460] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1461] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1462] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1463] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1464] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1465] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1466] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1467] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1468] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1469] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1470] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1471] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1472] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1473] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1474] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1475] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1476] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1477] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1478] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1479] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1480] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1481] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1482] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1483] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1484] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1485] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1486] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1487] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1488] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1489] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1490] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1491] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1492] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1493] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1494] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1495] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1496] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1497] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1498] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1499] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1500] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1501] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1502] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1503] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1504] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1505] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1506] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1507] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1508] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1509] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1510] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1511] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1512] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1513] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1514] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1515] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1516] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1517] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1518] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1519] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1520] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1521] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1522] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1523] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1524] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1525] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1526] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1527] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1528] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1529] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1530] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1531] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1532] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1533] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1534] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1535] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1536] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1537] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1538] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1539] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1540] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1541] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1542] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1543] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1544] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1545] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1546] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1547] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1548] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1549] = 8U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1550] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1551] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1552] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1553] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1554] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1555] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1556] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1557] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1558] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1559] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1560] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1561] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1562] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1563] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1564] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1565] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1566] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1567] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1568] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1569] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1570] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1571] = 8U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1572] = 8U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1573] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1574] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1575] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1576] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1577] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1578] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1579] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1580] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1581] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1582] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1583] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1584] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1585] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1586] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1587] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1588] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1589] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1590] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1591] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1592] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1593] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1594] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1595] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1596] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1597] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1598] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1599] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1600] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1601] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1602] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1603] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1604] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1605] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1606] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1607] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1608] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1609] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1610] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1611] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1612] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1613] = 9U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1614] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1615] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1616] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1617] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1618] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1619] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1620] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1621] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1622] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1623] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1624] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1625] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1626] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1627] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1628] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1629] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1630] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1631] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1632] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1633] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1634] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1635] = 9U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1636] = 9U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1637] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1638] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1639] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1640] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1641] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1642] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1643] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1644] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1645] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1646] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1647] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1648] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1649] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1650] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1651] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1652] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1653] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1654] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1655] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1656] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1657] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1658] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1659] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1660] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1661] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1662] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1663] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1664] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1665] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1666] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1667] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1668] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1669] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1670] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1671] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1672] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1673] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1674] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1675] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1676] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1677] = 0xaU;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1678] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1679] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1680] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1681] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1682] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1683] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1684] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1685] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1686] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1687] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1688] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1689] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1690] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1691] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1692] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1693] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1694] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1695] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1696] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1697] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1698] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1699] = 0xaU;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1700] = 0xaU;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1701] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1702] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1703] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1704] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1705] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1706] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1707] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1708] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1709] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1710] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1711] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1712] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1713] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1714] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1715] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1716] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1717] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1718] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1719] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1720] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1721] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1722] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1723] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1724] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1725] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1726] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1727] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1728] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1729] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1730] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1731] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1732] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1733] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1734] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1735] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1736] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1737] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1738] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1739] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1740] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1741] = 0xbU;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1742] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1743] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1744] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1745] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1746] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1747] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1748] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1749] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1750] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1751] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1752] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1753] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1754] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1755] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1756] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1757] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1758] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1759] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1760] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1761] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1762] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1763] = 0xbU;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1764] = 0xbU;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1765] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1766] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1767] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1768] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1769] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1770] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1771] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1772] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1773] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1774] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1775] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1776] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1777] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1778] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1779] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1780] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1781] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1782] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1783] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1784] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1785] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1786] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1787] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1788] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1789] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1790] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1791] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1792] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1793] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1794] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1795] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1796] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1797] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1798] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1799] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1800] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1801] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1802] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1803] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1804] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1805] = 0xcU;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1806] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1807] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1808] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1809] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1810] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1811] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1812] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1813] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1814] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1815] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1816] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1817] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1818] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1819] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1820] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1821] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1822] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1823] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1824] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1825] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1826] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1827] = 0xcU;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1828] = 0xcU;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1829] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1830] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1831] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1832] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1833] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1834] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1835] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1836] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1837] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1838] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1839] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1840] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1841] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1842] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1843] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1844] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1845] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1846] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1847] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1848] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1849] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1850] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1851] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1852] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1853] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1854] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1855] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1856] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1857] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1858] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1859] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1860] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1861] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1862] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1863] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1864] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1865] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1866] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1867] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1868] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1869] = 0xdU;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1870] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1871] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1872] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1873] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1874] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1875] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1876] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1877] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1878] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1879] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1880] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1881] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1882] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1883] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1884] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1885] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1886] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1887] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1888] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1889] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1890] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1891] = 0xdU;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1892] = 0xdU;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1893] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1894] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1895] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1896] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1897] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1898] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1899] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1900] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1901] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1902] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1903] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1904] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1905] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1906] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1907] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1908] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1909] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1910] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1911] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1912] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1913] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1914] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1915] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1916] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1917] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1918] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1919] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1920] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1921] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1922] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1923] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1924] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1925] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1926] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1927] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1928] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1929] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1930] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1931] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1932] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1933] = 0xeU;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1934] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1935] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1936] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1937] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1938] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1939] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1940] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1941] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1942] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1943] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1944] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1945] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1946] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1947] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1948] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1949] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1950] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1951] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1952] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1953] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1954] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1955] = 0xeU;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1956] = 0xeU;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1957] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1958] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1959] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1960] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1961] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1962] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1963] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1964] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1965] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1966] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1967] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1968] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1969] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1970] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1971] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1972] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1973] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1974] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1975] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1976] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1977] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1978] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1979] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1980] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1981] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1982] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1983] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1984] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1985] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1986] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1987] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1988] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1989] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1990] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1991] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1992] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1993] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1994] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1995] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1996] = 0U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1997] = 0xfU;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1998] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[1999] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2000] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2001] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2002] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2003] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2004] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2005] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2006] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2007] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2008] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2009] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2010] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2011] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2012] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2013] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2014] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2015] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2016] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2017] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2018] = 7U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2019] = 0xfU;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2020] = 0xfU;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2021] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2022] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2023] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2024] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2025] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2026] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2027] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2028] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2029] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2030] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2031] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2032] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2033] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2034] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2035] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2036] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2037] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2038] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2039] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2040] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2041] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2042] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2043] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2044] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2045] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2046] = 3U;
    __Vtable6_NES__DOT__CPU0__DOT__alu_op[2047] = 3U;
    __Vtableidx7 = VL_RAND_RESET_I(7);
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[0] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[1] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[2] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[3] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[4] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[5] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[6] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[7] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[8] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[9] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[10] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[11] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[12] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[13] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[14] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[15] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[16] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[17] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[18] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[19] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[20] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[21] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[22] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[23] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[24] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[25] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[26] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[27] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[28] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[29] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[30] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[31] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[32] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[33] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[34] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[35] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[36] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[37] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[38] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[39] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[40] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[41] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[42] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[43] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[44] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[45] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[46] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[47] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[48] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[49] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[50] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[51] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[52] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[53] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[54] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[55] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[56] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[57] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[58] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[59] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[60] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[61] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[62] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[63] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[64] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[65] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[66] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[67] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[68] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[69] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[70] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[71] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[72] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[73] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[74] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[75] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[76] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[77] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[78] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[79] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[80] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[81] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[82] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[83] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[84] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[85] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[86] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[87] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[88] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[89] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[90] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[91] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[92] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[93] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[94] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[95] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[96] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[97] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[98] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[99] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[100] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[101] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[102] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[103] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[104] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[105] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[106] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[107] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[108] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[109] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[110] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[111] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[112] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[113] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[114] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[115] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[116] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[117] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[118] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[119] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[120] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[121] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[122] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[123] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[124] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[125] = 1U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[126] = 0U;
    __Vtable7_NES__DOT__CPU0__DOT__cond_true[127] = 1U;
    __Vdly__NES__DOT__PPU0__DOT__PPU_ADDR_FLAG = VL_RAND_RESET_I(1);
    __Vdly__NES__DOT__PPU0__DOT__PPU_SCROLL_FLAG = VL_RAND_RESET_I(1);
    __Vdly__NES__DOT__PPU0__DOT__PPUSTATUS = VL_RAND_RESET_I(8);
    __Vdly__NES__DOT__PPUSCROLL = VL_RAND_RESET_I(16);
    __Vdly__NES__DOT__PPU0__DOT__PPUADDR = VL_RAND_RESET_I(16);
    __Vdly__NES__DOT__PPU0__DOT__ppu_reg_r_address = VL_RAND_RESET_I(16);
    __Vdly__VGA_CLK = VL_RAND_RESET_I(1);
    __Vdlyvdim0__NES__DOT__PPU0__DOT__MEM1__DOT__ppu_mem_array__v0 = VL_RAND_RESET_I(14);
    __Vdlyvval__NES__DOT__PPU0__DOT__MEM1__DOT__ppu_mem_array__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__NES__DOT__PPU0__DOT__MEM1__DOT__ppu_mem_array__v0 = VL_RAND_RESET_I(1);
    __Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK = VL_RAND_RESET_I(1);
    __Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CLK_DIV = VL_RAND_RESET_I(32);
    __Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__byte_lut = VL_RAND_RESET_I(8);
    __Vdly__NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_0_next = VL_RAND_RESET_I(8);
    __Vdly__NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_1_next = VL_RAND_RESET_I(8);
    __Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyT = VL_RAND_RESET_I(15);
    __Vdly__NES__DOT__PPU0__DOT__BG0__DOT__loopy_latch = VL_RAND_RESET_I(1);
    __Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyT_Next = VL_RAND_RESET_I(1);
    __Vdly__NES__DOT__PPU0__DOT__BG0__DOT__ppu_address_latch = VL_RAND_RESET_I(1);
    __Vdlyvdim0__NES__DOT__CPU0__DOT__AXYS__v0 = VL_RAND_RESET_I(2);
    __Vdlyvval__NES__DOT__CPU0__DOT__AXYS__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__NES__DOT__CPU0__DOT__AXYS__v0 = VL_RAND_RESET_I(1);
    __Vdly__NES__DOT__PPU0__DOT__DrawX = VL_RAND_RESET_I(10);
    __Vdly__NES__DOT__PPU0__DOT__DrawY = VL_RAND_RESET_I(10);
    __Vdly__NES__DOT__PPU0__DOT__BG0__DOT__LoopyV = VL_RAND_RESET_I(15);
    __Vdly__NES__DOT__PPU0__DOT__vblank = VL_RAND_RESET_I(1);
    __Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__address = VL_RAND_RESET_I(1);
    __Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__counter = VL_RAND_RESET_I(4);
    __Vdly__sda = VL_RAND_RESET_I(1);
    __Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__byte_num_local = VL_RAND_RESET_I(3);
    __Vdly__NES__DOT__PPU0__DOT__HD_0__DOT__done = VL_RAND_RESET_I(1);
    __Vdly__NES__DOT__CPU0__DOT__state = VL_RAND_RESET_I(6);
    __VinpClk__TOP__NES__DOT____Vcellinp__CPU0__reset = VL_RAND_RESET_I(1);
    __VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK = VL_RAND_RESET_I(1);
    __VinpClk__TOP__VGA_CLK = VL_RAND_RESET_I(1);
    __VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__done = VL_RAND_RESET_I(1);
    __Vchglast__TOP__VGA_CLK = VL_RAND_RESET_I(1);
    __Vchglast__TOP__NES__DOT____Vcellinp__CPU0__reset = VL_RAND_RESET_I(1);
    __Vchglast__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__done = VL_RAND_RESET_I(1);
    __Vchglast__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK = VL_RAND_RESET_I(1);
    __Vchglast__TOP__NES__DOT__PPU0__DOT__BG0__DOT__bitmap_index = VL_RAND_RESET_I(3);
    { int __Vi0=0; for (; __Vi0<137; ++__Vi0) {
	    __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}

void VNES::__Vmtask__101(bool even_cycle, void* symtab) {
    VNES__Syms* __restrict vlSymsp = (VNES__Syms*)symtab;
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(101);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__103(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(160);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__160(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_387.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_339.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(339);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__341(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x48U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void VNES::__Vmtask__102(bool even_cycle, void* symtab) {
    VNES__Syms* __restrict vlSymsp = (VNES__Syms*)symtab;
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(102);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__104(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(159);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__159(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_387.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_340.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(340);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__342(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x49U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void VNES::__Vmtask__104(bool even_cycle, void* symtab) {
    VNES__Syms* __restrict vlSymsp = (VNES__Syms*)symtab;
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(104);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__106(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_162.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(158);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__158(vlSymsp);
	vlTOPp->__Vm_traceActivity[8U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_387.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void VNES::__Vmtask__105(bool even_cycle, void* symtab) {
    VNES__Syms* __restrict vlSymsp = (VNES__Syms*)symtab;
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(105);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__107(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(109);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__111(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_164.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_162.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(162);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__162(vlSymsp);
	vlTOPp->__Vm_traceActivity[0xaU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_349.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_198.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_338.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_344.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_440.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_418.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_408.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_437.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(196);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__208(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x27U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void VNES::__Vmtask__106(bool even_cycle, void* symtab) {
    VNES__Syms* __restrict vlSymsp = (VNES__Syms*)symtab;
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(106);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__108(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_162.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(110);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__112(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_164.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(170);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__170(vlSymsp);
	vlTOPp->__Vm_traceActivity[0xfU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_422.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_436.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_410.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_295.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(295);
    if (((IData)(vlTOPp->__VinpClk__TOP__VGA_CLK) & 
	 (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__VGA_CLK)))) {
	vlTOPp->_sequent__TOP__297(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_332.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_302.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(302);
    if (((IData)(vlTOPp->__VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK)))) {
	vlTOPp->_sequent__TOP__304(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_333.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void VNES::__Vmtask__108(bool even_cycle, void* symtab) {
    VNES__Syms* __restrict vlSymsp = (VNES__Syms*)symtab;
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(108);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__110(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_162.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(181);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__181(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x1aU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_388.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_410.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(156);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__156(vlSymsp);
	vlTOPp->__Vm_traceActivity[6U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_253.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_349.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_408.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_283.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(283);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__285(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x37U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_410.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_411.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void VNES::__Vmtask__111(bool even_cycle, void* symtab) {
    VNES__Syms* __restrict vlSymsp = (VNES__Syms*)symtab;
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(111);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__113(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(163);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__163(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_149.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(221);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__224(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_295.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_296.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_305.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_331.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_330.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(304);
    if (((IData)(vlTOPp->__VinpClk__TOP__VGA_CLK) & 
	 (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__VGA_CLK)))) {
	vlTOPp->_sequent__TOP__306(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_334.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_300.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(300);
    if (((IData)(vlTOPp->__VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK)))) {
	vlTOPp->_sequent__TOP__302(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_333.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(333);
    if (((IData)(vlTOPp->__VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK)))) {
	vlTOPp->_sequent__TOP__335(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x43U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_342.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_345.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_348.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_347.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_379.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(354);
    if (((IData)(vlTOPp->__VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK)))) {
	vlTOPp->_sequent__TOP__356(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x50U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_407.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(407);
    if (((IData)(vlTOPp->__VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__done) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__done)))) {
	vlTOPp->_sequent__TOP__398(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x64U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(423);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__416(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x6bU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(432);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__432(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x79U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_435.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(435);
    if ((((IData)(vlTOPp->__VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK))) 
	 | ((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50))))) {
	vlTOPp->_multiclk__TOP__437(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_380.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(380);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__382(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x57U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_437.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_418.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(418);
    if ((((IData)(vlTOPp->__VinpClk__TOP__NES__DOT____Vcellinp__CPU0__reset) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__NES__DOT____Vcellinp__CPU0__reset))) 
	 | ((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50))))) {
	vlTOPp->_sequent__TOP__421(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x6eU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_436.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(436);
    if ((((IData)(vlTOPp->__VinpClk__TOP__NES__DOT____Vcellinp__CPU0__reset) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__NES__DOT____Vcellinp__CPU0__reset))) 
	 | ((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50))))) {
	vlTOPp->_sequent__TOP__438(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x7eU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_440.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(440);
    if ((((IData)(vlTOPp->__VinpClk__TOP__NES__DOT____Vcellinp__CPU0__reset) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__NES__DOT____Vcellinp__CPU0__reset))) 
	 | ((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50))))) {
	vlTOPp->_sequent__TOP__442(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x82U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void VNES::__Vmtask__113(bool even_cycle, void* symtab) {
    VNES__Syms* __restrict vlSymsp = (VNES__Syms*)symtab;
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(113);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__115(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_335.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(176);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__176(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x15U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_411.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(154);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__150(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_407.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_331.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(331);
    if (((IData)(vlTOPp->__VinpClk__TOP__VGA_CLK) & 
	 (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__VGA_CLK)))) {
	vlTOPp->_sequent__TOP__333(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x42U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_349.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_408.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_339.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_389.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(389);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__391(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x5fU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_436.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_348.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(348);
    if (((IData)(vlTOPp->__VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK)))) {
	vlTOPp->_sequent__TOP__350(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x4dU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_412.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_383.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(383);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__385(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x59U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_440.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_418.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_410.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(410);
    vlTOPp->_combo__TOP__412(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x68U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_429.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(429);
    vlTOPp->_combo__TOP__431(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x78U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_430.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_431.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_438.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_433.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(433);
    vlTOPp->_combo__TOP__435(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x7cU] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_441.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_437.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(437);
    vlTOPp->_combo__TOP__439(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x7fU] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_439.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(439);
    vlTOPp->_combo__TOP__441(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x81U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void VNES::__Vmtask__114(bool even_cycle, void* symtab) {
    VNES__Syms* __restrict vlSymsp = (VNES__Syms*)symtab;
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(114);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__116(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(180);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__180(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x19U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_410.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_411.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_335.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(335);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__337(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x44U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_361.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_362.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_359.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_363.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_358.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_386.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_385.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_384.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_383.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_387.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_388.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(388);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__390(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x5eU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_429.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_412.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(412);
    if (((IData)(vlTOPp->__VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK)))) {
	vlTOPp->_sequent__TOP__414(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x6aU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_420.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(420);
    vlTOPp->_combo__TOP__423(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x70U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void VNES::__Vmtask__115(bool even_cycle, void* symtab) {
    VNES__Syms* __restrict vlSymsp = (VNES__Syms*)symtab;
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(115);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__117(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_335.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(172);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__172(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x11U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_410.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_411.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(148);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__151(vlSymsp);
	vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_421.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_305.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(305);
    if (((IData)(vlTOPp->__VinpClk__TOP__VGA_CLK) & 
	 (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__VGA_CLK)))) {
	vlTOPp->_sequent__TOP__307(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_334.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(334);
    if (((IData)(vlTOPp->__VinpClk__TOP__VGA_CLK) & 
	 (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__VGA_CLK)))) {
	vlTOPp->_sequent__TOP__336(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_349.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_408.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_338.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_344.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_352.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_404.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_380.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_278.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(278);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__280(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x32U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_424.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_422.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_426.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_410.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_413.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(413);
    if (((IData)(vlTOPp->__VinpClk__TOP__VGA_CLK) & 
	 (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__VGA_CLK)))) {
	vlTOPp->_sequent__TOP__417(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_431.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(431);
    vlTOPp->_combo__TOP__434(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x7bU] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void VNES::__Vmtask__116(bool even_cycle, void* symtab) {
    VNES__Syms* __restrict vlSymsp = (VNES__Syms*)symtab;
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(116);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__118(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_335.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(173);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__173(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x12U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_410.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_411.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(153);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__154(vlSymsp);
	vlTOPp->__Vm_traceActivity[4U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_440.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_418.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_437.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_381.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(381);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__384(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x58U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_436.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_384.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(384);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__386(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x5aU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_440.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_418.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_437.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_349.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(349);
    if (((IData)(vlTOPp->__VinpClk__TOP__VGA_CLK) & 
	 (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__VGA_CLK)))) {
	vlTOPp->_sequent__TOP__351(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x4eU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_417.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(375);
    if (((IData)(vlTOPp->__VinpClk__TOP__VGA_CLK) & 
	 (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__VGA_CLK)))) {
	vlTOPp->_sequent__TOP__377(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_430.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(430);
    vlTOPp->_combo__TOP__433(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x7aU] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void VNES::__Vmtask__117(bool even_cycle, void* symtab) {
    VNES__Syms* __restrict vlSymsp = (VNES__Syms*)symtab;
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(117);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__119(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_335.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(169);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__169(vlSymsp);
	vlTOPp->__Vm_traceActivity[0xeU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_194.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_430.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_411.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(152);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__153(vlSymsp);
	vlTOPp->__Vm_traceActivity[3U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_408.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_290.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(290);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__292(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x3eU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_410.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_411.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_345.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(345);
    if (((IData)(vlTOPp->__VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK)))) {
	vlTOPp->_sequent__TOP__347(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x4bU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_435.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_385.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(385);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__387(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x5bU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_440.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_418.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_437.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_344.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(344);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__346(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x4aU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(376);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__378(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void VNES::__Vmtask__118(bool even_cycle, void* symtab) {
    VNES__Syms* __restrict vlSymsp = (VNES__Syms*)symtab;
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(118);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__120(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_335.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(166);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__166(vlSymsp);
	vlTOPp->__Vm_traceActivity[0xcU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_388.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_330.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(330);
    if (((IData)(vlTOPp->__VinpClk__TOP__VGA_CLK) & 
	 (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__VGA_CLK)))) {
	vlTOPp->_sequent__TOP__332(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x41U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_340.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_349.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_408.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_342.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(342);
    if (((IData)(vlTOPp->__VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK)))) {
	vlTOPp->_sequent__TOP__344(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_358.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(358);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__360(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x51U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_279.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(279);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__281(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x33U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_422.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_427.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_410.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_338.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(338);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__340(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x47U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_417.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(417);
    if (((IData)(vlTOPp->__VinpClk__TOP__VGA_CLK) & 
	 (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__VGA_CLK)))) {
	vlTOPp->_sequent__TOP__420(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void VNES::__Vmtask__119(bool even_cycle, void* symtab) {
    VNES__Syms* __restrict vlSymsp = (VNES__Syms*)symtab;
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(119);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__121(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(168);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__168(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_335.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(256);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__258(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x2cU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_440.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_418.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_437.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_392.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(392);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__394(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x62U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_410.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_411.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_347.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(347);
    if (((IData)(vlTOPp->__VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK)))) {
	vlTOPp->_sequent__TOP__349(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x4cU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_412.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_386.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(386);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__388(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x5cU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_440.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_418.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_437.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_415.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(415);
    if (((IData)(vlTOPp->__VinpClk__TOP__VGA_CLK) & 
	 (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__VGA_CLK)))) {
	vlTOPp->_sequent__TOP__419(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x6dU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void VNES::__Vmtask__142(bool even_cycle, void* symtab) {
    VNES__Syms* __restrict vlSymsp = (VNES__Syms*)symtab;
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(142);
    if ((((IData)(vlTOPp->__VinpClk__TOP__NES__DOT____Vcellinp__CPU0__reset) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__NES__DOT____Vcellinp__CPU0__reset))) 
	 | ((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50))))) {
	vlTOPp->_sequent__TOP__144(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(188);
    if ((((IData)(vlTOPp->__VinpClk__TOP__NES__DOT____Vcellinp__CPU0__reset) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__NES__DOT____Vcellinp__CPU0__reset))) 
	 | ((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50))))) {
	vlTOPp->_sequent__TOP__188(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_194.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_254.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_278.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_279.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_287.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_280.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(280);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__282(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x34U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_410.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_411.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_400.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(400);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__403(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x65U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_352.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(352);
    if (((IData)(vlTOPp->__VinpClk__TOP__VGA_CLK) & 
	 (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__VGA_CLK)))) {
	vlTOPp->_sequent__TOP__354(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x4fU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_421.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(421);
    if ((((IData)(vlTOPp->__VinpClk__TOP__VGA_CLK) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__VGA_CLK))) 
	 | ((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50))))) {
	vlTOPp->_multiclk__TOP__424(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x71U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void VNES::__Vmtask__147(bool even_cycle, void* symtab) {
    VNES__Syms* __restrict vlSymsp = (VNES__Syms*)symtab;
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(147);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__149(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(193);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__193(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_224.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_274.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_278.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_291.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(292);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__294(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x40U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_337.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(337);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__339(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x46U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_381.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_389.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_391.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_392.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(390);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__392(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x60U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_410.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_411.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_198.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(198);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__210(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x28U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_387.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(387);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__389(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x5dU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_404.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_400.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(405);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__408(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_408.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(408);
    if (((IData)(vlTOPp->__VinpClk__TOP__VGA_CLK) & 
	 (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__VGA_CLK)))) {
	vlTOPp->_sequent__TOP__410(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x67U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_413.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_415.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_417.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_420.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_421.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(414);
    if (((IData)(vlTOPp->__VinpClk__TOP__VGA_CLK) & 
	 (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__VGA_CLK)))) {
	vlTOPp->_sequent__TOP__418(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x6cU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void VNES::__Vmtask__171(bool even_cycle, void* symtab) {
    VNES__Syms* __restrict vlSymsp = (VNES__Syms*)symtab;
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(171);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__171(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x10U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_194.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_410.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_411.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_164.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(164);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__164(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_149.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(223);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__226(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x29U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_300.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_301.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_302.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_306.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(297);
    if (((IData)(vlTOPp->__VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK)))) {
	vlTOPp->_sequent__TOP__299(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_333.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void VNES::__Vmtask__174(bool even_cycle, void* symtab) {
    VNES__Syms* __restrict vlSymsp = (VNES__Syms*)symtab;
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(174);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__174(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x13U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_410.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_411.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(157);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__157(vlSymsp);
	vlTOPp->__Vm_traceActivity[7U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_349.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_408.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_253.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(253);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__204(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_420.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void VNES::__Vmtask__175(bool even_cycle, void* symtab) {
    VNES__Syms* __restrict vlSymsp = (VNES__Syms*)symtab;
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(175);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__175(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x14U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_410.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_411.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(151);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__152(vlSymsp);
	vlTOPp->__Vm_traceActivity[2U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_408.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_284.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(284);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__286(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x38U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_410.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_411.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void VNES::__Vmtask__177(bool even_cycle, void* symtab) {
    VNES__Syms* __restrict vlSymsp = (VNES__Syms*)symtab;
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(177);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__177(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x16U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_410.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_411.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(165);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__165(vlSymsp);
	vlTOPp->__Vm_traceActivity[0xbU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_388.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(150);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__206(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_439.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_440.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_418.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void VNES::__Vmtask__178(bool even_cycle, void* symtab) {
    VNES__Syms* __restrict vlSymsp = (VNES__Syms*)symtab;
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(178);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__178(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x17U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_410.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_411.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(167);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__167(vlSymsp);
	vlTOPp->__Vm_traceActivity[0xdU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_254.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_410.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_296.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(296);
    if (((IData)(vlTOPp->__VinpClk__TOP__VGA_CLK) & 
	 (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__VGA_CLK)))) {
	vlTOPp->_sequent__TOP__298(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_332.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void VNES::__Vmtask__179(bool even_cycle, void* symtab) {
    VNES__Syms* __restrict vlSymsp = (VNES__Syms*)symtab;
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(179);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__179(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x18U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_410.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_411.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_273.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(273);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__275(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x2dU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_410.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_224.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(224);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__227(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x2aU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_434.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_419.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(419);
    if ((((IData)(vlTOPp->__VinpClk__TOP__NES__DOT____Vcellinp__CPU0__reset) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__NES__DOT____Vcellinp__CPU0__reset))) 
	 | ((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50))))) {
	vlTOPp->_sequent__TOP__422(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x6fU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void VNES::__Vmtask__182(bool even_cycle, void* symtab) {
    VNES__Syms* __restrict vlSymsp = (VNES__Syms*)symtab;
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(182);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__182(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x1bU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_410.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_411.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_275.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(275);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__277(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x2fU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_410.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void VNES::__Vmtask__183(bool even_cycle, void* symtab) {
    VNES__Syms* __restrict vlSymsp = (VNES__Syms*)symtab;
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(183);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__183(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x1cU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_410.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_411.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_277.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(277);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__279(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x31U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_410.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void VNES::__Vmtask__184(bool even_cycle, void* symtab) {
    VNES__Syms* __restrict vlSymsp = (VNES__Syms*)symtab;
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(184);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__184(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x1dU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_410.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_411.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(155);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__155(vlSymsp);
	vlTOPp->__Vm_traceActivity[5U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_253.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_349.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_408.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_306.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(306);
    if (((IData)(vlTOPp->__VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK)))) {
	vlTOPp->_sequent__TOP__308(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_333.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void VNES::__Vmtask__185(bool even_cycle, void* symtab) {
    VNES__Syms* __restrict vlSymsp = (VNES__Syms*)symtab;
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(185);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__185(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x1eU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_194.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_410.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_411.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(161);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__161(vlSymsp);
	vlTOPp->__Vm_traceActivity[9U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_387.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void VNES::__Vmtask__186(bool even_cycle, void* symtab) {
    VNES__Syms* __restrict vlSymsp = (VNES__Syms*)symtab;
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(186);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__186(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x1fU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(276);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__278(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x30U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_335.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_285.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(285);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__287(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x39U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_410.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_332.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(332);
    if (((IData)(vlTOPp->__VinpClk__TOP__VGA_CLK) & 
	 (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__VGA_CLK)))) {
	vlTOPp->_sequent__TOP__334(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_349.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_408.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_391.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(391);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__393(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x61U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_410.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_379.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(379);
    if (((IData)(vlTOPp->__VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK)))) {
	vlTOPp->_sequent__TOP__381(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x56U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_412.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_394.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(394);
    vlTOPp->_combo__TOP__396(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x63U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_287.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(287);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__289(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x3bU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_410.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_411.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(411);
    if ((((IData)(vlTOPp->__VinpClk__TOP__NES__DOT____Vcellinp__CPU0__reset) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__NES__DOT____Vcellinp__CPU0__reset))) 
	 | ((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50))))) {
	vlTOPp->_sequent__TOP__413(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x69U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_418.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_419.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_422.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_424.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_425.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_426.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_427.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_431.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_433.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(428);
    if ((((IData)(vlTOPp->__VinpClk__TOP__NES__DOT____Vcellinp__CPU0__reset) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__NES__DOT____Vcellinp__CPU0__reset))) 
	 | ((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50))))) {
	vlTOPp->_sequent__TOP__430(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x77U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_434.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(434);
    if ((((IData)(vlTOPp->__VinpClk__TOP__NES__DOT____Vcellinp__CPU0__reset) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__NES__DOT____Vcellinp__CPU0__reset))) 
	 | ((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50))))) {
	vlTOPp->_sequent__TOP__436(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x7dU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_436.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_437.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_438.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(438);
    vlTOPp->_combo__TOP__440(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x80U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_441.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(441);
    vlTOPp->_combo__TOP__443(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x83U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(442);
    vlTOPp->_combo__TOP__444(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x84U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(443);
    vlTOPp->_combo__TOP__445(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x85U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_444.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(444);
    vlTOPp->_combo__TOP__446(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x86U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(445);
    vlTOPp->_combo__TOP__447(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x87U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(446);
    vlTOPp->_combo__TOP__448(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x88U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void VNES::__Vmtask__187(bool even_cycle, void* symtab) {
    VNES__Syms* __restrict vlSymsp = (VNES__Syms*)symtab;
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(187);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__187(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x20U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_381.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_285.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_389.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_392.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(282);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__284(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x36U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_410.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_411.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_149.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(149);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__205(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x25U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_394.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_422.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(422);
    if ((((IData)(vlTOPp->__VinpClk__TOP__NES__DOT____Vcellinp__CPU0__reset) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__NES__DOT____Vcellinp__CPU0__reset))) 
	 | ((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50))))) {
	vlTOPp->_sequent__TOP__425(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x72U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void VNES::__Vmtask__189(bool even_cycle, void* symtab) {
    VNES__Syms* __restrict vlSymsp = (VNES__Syms*)symtab;
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(189);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__189(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x21U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_381.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_281.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_290.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_389.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_392.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_288.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(288);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__290(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x3cU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_410.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_411.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_359.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(359);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__361(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x52U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_254.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(254);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__256(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x2bU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_426.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(426);
    if ((((IData)(vlTOPp->__VinpClk__TOP__NES__DOT____Vcellinp__CPU0__reset) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__NES__DOT____Vcellinp__CPU0__reset))) 
	 | ((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50))))) {
	vlTOPp->_sequent__TOP__428(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x75U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_441.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void VNES::__Vmtask__190(bool even_cycle, void* symtab) {
    VNES__Syms* __restrict vlSymsp = (VNES__Syms*)symtab;
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(190);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__190(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x22U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_254.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_381.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_273.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_288.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_290.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_389.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_392.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_281.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(281);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__283(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x35U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_410.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_411.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_291.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(291);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__293(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x3fU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_337.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_336.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(336);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__338(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x45U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_410.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_411.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_361.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(361);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__363(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x53U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_194.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(194);
    vlTOPp->_combo__TOP__207(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x26U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_404.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(404);
    if (((IData)(vlTOPp->__VinpClk__TOP__VGA_CLK) & 
	 (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__VGA_CLK)))) {
	vlTOPp->_sequent__TOP__407(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x66U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_425.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(425);
    if ((((IData)(vlTOPp->__VinpClk__TOP__NES__DOT____Vcellinp__CPU0__reset) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__NES__DOT____Vcellinp__CPU0__reset))) 
	 | ((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50))))) {
	vlTOPp->_sequent__TOP__427(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x74U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_441.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void VNES::__Vmtask__191(bool even_cycle, void* symtab) {
    VNES__Syms* __restrict vlSymsp = (VNES__Syms*)symtab;
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(191);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__191(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x23U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_254.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_381.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_273.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_275.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_277.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_278.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_281.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_336.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_389.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_392.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(286);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__288(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x3aU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_410.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_411.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_301.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(301);
    if (((IData)(vlTOPp->__VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK)))) {
	vlTOPp->_sequent__TOP__303(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_333.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_363.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(363);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__365(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x55U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_424.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(424);
    if ((((IData)(vlTOPp->__VinpClk__TOP__NES__DOT____Vcellinp__CPU0__reset) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__NES__DOT____Vcellinp__CPU0__reset))) 
	 | ((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50))))) {
	vlTOPp->_sequent__TOP__426(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x73U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_444.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void VNES::__Vmtask__192(bool even_cycle, void* symtab) {
    VNES__Syms* __restrict vlSymsp = (VNES__Syms*)symtab;
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(192);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__192(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x24U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_254.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_381.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_278.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_284.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_283.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_280.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_290.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_336.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_389.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_392.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(289);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__291(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x3dU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_410.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_411.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_274.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(274);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__276(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x2eU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_419.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_410.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_362.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(362);
    if (((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50)))) {
	vlTOPp->_sequent__TOP__364(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x54U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_427.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(427);
    if ((((IData)(vlTOPp->__VinpClk__TOP__NES__DOT____Vcellinp__CPU0__reset) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__NES__DOT____Vcellinp__CPU0__reset))) 
	 | ((IData)(vlTOPp->clk_50) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_50))))) {
	vlTOPp->_sequent__TOP__429(vlSymsp);
	vlTOPp->__Vm_traceActivity[0x76U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_441.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}
