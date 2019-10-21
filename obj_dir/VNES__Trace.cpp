// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VNES__Syms.h"


//======================

void VNES::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VNES* t=(VNES*)userthis;
    VNES__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VNES::traceChgThis(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    // Begin mtask footprint  all: 
    VL_SIG(__Vilp,31,0);
    // Body
    {
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
			 [0U] | vlTOPp->__Vm_traceActivity
			 [0x1fU]))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
			 [0U] | vlTOPp->__Vm_traceActivity
			 [0x20U]))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
			 [0U] | vlTOPp->__Vm_traceActivity
			 [0x21U]))) {
	    vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
			 [0U] | vlTOPp->__Vm_traceActivity
			 [0x22U]))) {
	    vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
			 [0U] | vlTOPp->__Vm_traceActivity
			 [0x23U]))) {
	    vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
			 [0U] | vlTOPp->__Vm_traceActivity
			 [0x24U]))) {
	    vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
			 [0U] | vlTOPp->__Vm_traceActivity
			 [0x26U]))) {
	    vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
			 [0U] | vlTOPp->__Vm_traceActivity
			 [0x2bU]))) {
	    vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
			 [0U] | vlTOPp->__Vm_traceActivity
			 [0x30U]))) {
	    vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
			 [0U] | vlTOPp->__Vm_traceActivity
			 [0x46U]))) {
	    vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
			  [0U] | vlTOPp->__Vm_traceActivity
			  [0x4bU]) | vlTOPp->__Vm_traceActivity
			 [0x79U]))) {
	    vlTOPp->traceChgThis__13(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
			 [0U] | vlTOPp->__Vm_traceActivity
			 [0x58U]))) {
	    vlTOPp->traceChgThis__14(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
			 [0U] | vlTOPp->__Vm_traceActivity
			 [0x5eU]))) {
	    vlTOPp->traceChgThis__15(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
			 [0U] | vlTOPp->__Vm_traceActivity
			 [0x63U]))) {
	    vlTOPp->traceChgThis__16(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((((((vlTOPp->__Vm_traceActivity
			     [0U] | vlTOPp->__Vm_traceActivity
			     [0x65U]) | vlTOPp->__Vm_traceActivity
			    [0x66U]) | vlTOPp->__Vm_traceActivity
			   [0x67U]) | vlTOPp->__Vm_traceActivity
			  [0x6cU]) | vlTOPp->__Vm_traceActivity
			 [0x71U]))) {
	    vlTOPp->traceChgThis__17(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
			  [0U] | vlTOPp->__Vm_traceActivity
			  [0x66U]) | vlTOPp->__Vm_traceActivity
			 [0x6eU]))) {
	    vlTOPp->traceChgThis__18(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((((vlTOPp->__Vm_traceActivity
			   [0U] | vlTOPp->__Vm_traceActivity
			   [0x67U]) | vlTOPp->__Vm_traceActivity
			  [0x6cU]) | vlTOPp->__Vm_traceActivity
			 [0x71U]))) {
	    vlTOPp->traceChgThis__19(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
			 [0U] | vlTOPp->__Vm_traceActivity
			 [0x68U]))) {
	    vlTOPp->traceChgThis__20(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
			 [0U] | vlTOPp->__Vm_traceActivity
			 [0x6aU]))) {
	    vlTOPp->traceChgThis__21(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
			 [0U] | vlTOPp->__Vm_traceActivity
			 [0x6cU]))) {
	    vlTOPp->traceChgThis__22(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
			  [0U] | vlTOPp->__Vm_traceActivity
			  [0x6cU]) | vlTOPp->__Vm_traceActivity
			 [0x71U]))) {
	    vlTOPp->traceChgThis__23(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
			 [0U] | vlTOPp->__Vm_traceActivity
			 [0x6dU]))) {
	    vlTOPp->traceChgThis__24(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
			 [0U] | vlTOPp->__Vm_traceActivity
			 [0x6eU]))) {
	    vlTOPp->traceChgThis__25(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
			 [0U] | vlTOPp->__Vm_traceActivity
			 [0x6fU]))) {
	    vlTOPp->traceChgThis__26(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
			 [0U] | vlTOPp->__Vm_traceActivity
			 [0x70U]))) {
	    vlTOPp->traceChgThis__27(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
			 [0U] | vlTOPp->__Vm_traceActivity
			 [0x71U]))) {
	    vlTOPp->traceChgThis__28(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
			 [0U] | vlTOPp->__Vm_traceActivity
			 [0x72U]))) {
	    vlTOPp->traceChgThis__29(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
			 [0U] | vlTOPp->__Vm_traceActivity
			 [0x73U]))) {
	    vlTOPp->traceChgThis__30(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
			  [0U] | vlTOPp->__Vm_traceActivity
			  [0x73U]) | vlTOPp->__Vm_traceActivity
			 [0x85U]))) {
	    vlTOPp->traceChgThis__31(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
			  [0U] | vlTOPp->__Vm_traceActivity
			  [0x73U]) | vlTOPp->__Vm_traceActivity
			 [0x87U]))) {
	    vlTOPp->traceChgThis__32(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
			 [0U] | vlTOPp->__Vm_traceActivity
			 [0x74U]))) {
	    vlTOPp->traceChgThis__33(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((((vlTOPp->__Vm_traceActivity
			   [0U] | vlTOPp->__Vm_traceActivity
			   [0x74U]) | vlTOPp->__Vm_traceActivity
			  [0x75U]) | vlTOPp->__Vm_traceActivity
			 [0x76U]))) {
	    vlTOPp->traceChgThis__34(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
			 [0U] | vlTOPp->__Vm_traceActivity
			 [0x75U]))) {
	    vlTOPp->traceChgThis__35(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
			 [0U] | vlTOPp->__Vm_traceActivity
			 [0x76U]))) {
	    vlTOPp->traceChgThis__36(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
			 [0U] | vlTOPp->__Vm_traceActivity
			 [0x77U]))) {
	    vlTOPp->traceChgThis__37(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
			 [0U] | vlTOPp->__Vm_traceActivity
			 [0x78U]))) {
	    vlTOPp->traceChgThis__38(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
			 [0U] | vlTOPp->__Vm_traceActivity
			 [0x79U]))) {
	    vlTOPp->traceChgThis__39(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
			 [0U] | vlTOPp->__Vm_traceActivity
			 [0x7aU]))) {
	    vlTOPp->traceChgThis__40(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
			 [0U] | vlTOPp->__Vm_traceActivity
			 [0x7bU]))) {
	    vlTOPp->traceChgThis__41(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
			 [0U] | vlTOPp->__Vm_traceActivity
			 [0x7cU]))) {
	    vlTOPp->traceChgThis__42(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
			 [0U] | vlTOPp->__Vm_traceActivity
			 [0x7dU]))) {
	    vlTOPp->traceChgThis__43(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
			 [0U] | vlTOPp->__Vm_traceActivity
			 [0x7eU]))) {
	    vlTOPp->traceChgThis__44(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
			 [0U] | vlTOPp->__Vm_traceActivity
			 [0x7fU]))) {
	    vlTOPp->traceChgThis__45(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
			 [0U] | vlTOPp->__Vm_traceActivity
			 [0x80U]))) {
	    vlTOPp->traceChgThis__46(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
			 [0U] | vlTOPp->__Vm_traceActivity
			 [0x81U]))) {
	    vlTOPp->traceChgThis__47(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
			 [0U] | vlTOPp->__Vm_traceActivity
			 [0x82U]))) {
	    vlTOPp->traceChgThis__48(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
			 [0U] | vlTOPp->__Vm_traceActivity
			 [0x83U]))) {
	    vlTOPp->traceChgThis__49(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
			 [0U] | vlTOPp->__Vm_traceActivity
			 [0x84U]))) {
	    vlTOPp->traceChgThis__50(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
			 [0U] | vlTOPp->__Vm_traceActivity
			 [0x85U]))) {
	    vlTOPp->traceChgThis__51(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
			 [0U] | vlTOPp->__Vm_traceActivity
			 [0x86U]))) {
	    vlTOPp->traceChgThis__52(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
			 [0U] | vlTOPp->__Vm_traceActivity
			 [0x87U]))) {
	    vlTOPp->traceChgThis__53(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
			 [0U] | vlTOPp->__Vm_traceActivity
			 [0x88U]))) {
	    vlTOPp->traceChgThis__54(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
	    vlTOPp->traceChgThis__55(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
	    vlTOPp->traceChgThis__56(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
	    vlTOPp->traceChgThis__57(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[4U])) {
	    vlTOPp->traceChgThis__58(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[5U])) {
	    vlTOPp->traceChgThis__59(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[6U])) {
	    vlTOPp->traceChgThis__60(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[7U])) {
	    vlTOPp->traceChgThis__61(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[8U])) {
	    vlTOPp->traceChgThis__62(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[9U])) {
	    vlTOPp->traceChgThis__63(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xaU])) {
	    vlTOPp->traceChgThis__64(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xbU])) {
	    vlTOPp->traceChgThis__65(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xcU])) {
	    vlTOPp->traceChgThis__66(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xdU])) {
	    vlTOPp->traceChgThis__67(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xeU])) {
	    vlTOPp->traceChgThis__68(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xfU])) {
	    vlTOPp->traceChgThis__69(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x10U])) {
	    vlTOPp->traceChgThis__70(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x11U])) {
	    vlTOPp->traceChgThis__71(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x12U])) {
	    vlTOPp->traceChgThis__72(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x13U])) {
	    vlTOPp->traceChgThis__73(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x14U])) {
	    vlTOPp->traceChgThis__74(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x15U])) {
	    vlTOPp->traceChgThis__75(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x16U])) {
	    vlTOPp->traceChgThis__76(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x17U])) {
	    vlTOPp->traceChgThis__77(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x18U])) {
	    vlTOPp->traceChgThis__78(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x19U])) {
	    vlTOPp->traceChgThis__79(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x1aU])) {
	    vlTOPp->traceChgThis__80(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x1bU])) {
	    vlTOPp->traceChgThis__81(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x1cU])) {
	    vlTOPp->traceChgThis__82(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x1dU])) {
	    vlTOPp->traceChgThis__83(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x1eU])) {
	    vlTOPp->traceChgThis__84(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x25U])) {
	    vlTOPp->traceChgThis__85(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x27U])) {
	    vlTOPp->traceChgThis__86(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x28U])) {
	    vlTOPp->traceChgThis__87(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x29U])) {
	    vlTOPp->traceChgThis__88(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2aU])) {
	    vlTOPp->traceChgThis__89(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2cU])) {
	    vlTOPp->traceChgThis__90(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2dU])) {
	    vlTOPp->traceChgThis__91(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((((vlTOPp->__Vm_traceActivity
			   [0x2dU] | vlTOPp->__Vm_traceActivity
			   [0x2fU]) | vlTOPp->__Vm_traceActivity
			  [0x31U]) | vlTOPp->__Vm_traceActivity
			 [0x32U]))) {
	    vlTOPp->traceChgThis__92(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2eU])) {
	    vlTOPp->traceChgThis__93(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
			  [0x2eU] | vlTOPp->__Vm_traceActivity
			  [0x3fU]) | vlTOPp->__Vm_traceActivity
			 [0x40U]))) {
	    vlTOPp->traceChgThis__94(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2fU])) {
	    vlTOPp->traceChgThis__95(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x31U])) {
	    vlTOPp->traceChgThis__96(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x32U])) {
	    vlTOPp->traceChgThis__97(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
			  [0x32U] | vlTOPp->__Vm_traceActivity
			  [0x3fU]) | vlTOPp->__Vm_traceActivity
			 [0x40U]))) {
	    vlTOPp->traceChgThis__98(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x33U])) {
	    vlTOPp->traceChgThis__99(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x34U])) {
	    vlTOPp->traceChgThis__100(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x35U])) {
	    vlTOPp->traceChgThis__101(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x36U])) {
	    vlTOPp->traceChgThis__102(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x37U])) {
	    vlTOPp->traceChgThis__103(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x38U])) {
	    vlTOPp->traceChgThis__104(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x39U])) {
	    vlTOPp->traceChgThis__105(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x3aU])) {
	    vlTOPp->traceChgThis__106(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x3bU])) {
	    vlTOPp->traceChgThis__107(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x3cU])) {
	    vlTOPp->traceChgThis__108(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x3dU])) {
	    vlTOPp->traceChgThis__109(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x3eU])) {
	    vlTOPp->traceChgThis__110(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x3fU])) {
	    vlTOPp->traceChgThis__111(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x40U])) {
	    vlTOPp->traceChgThis__112(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x41U])) {
	    vlTOPp->traceChgThis__113(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x42U])) {
	    vlTOPp->traceChgThis__114(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x43U])) {
	    vlTOPp->traceChgThis__115(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x44U])) {
	    vlTOPp->traceChgThis__116(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x45U])) {
	    vlTOPp->traceChgThis__117(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x47U])) {
	    vlTOPp->traceChgThis__118(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x48U])) {
	    vlTOPp->traceChgThis__119(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x49U])) {
	    vlTOPp->traceChgThis__120(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x4aU])) {
	    vlTOPp->traceChgThis__121(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x4bU])) {
	    vlTOPp->traceChgThis__122(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x4cU])) {
	    vlTOPp->traceChgThis__123(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x4dU])) {
	    vlTOPp->traceChgThis__124(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x4eU])) {
	    vlTOPp->traceChgThis__125(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x4fU])) {
	    vlTOPp->traceChgThis__126(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x50U])) {
	    vlTOPp->traceChgThis__127(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x51U])) {
	    vlTOPp->traceChgThis__128(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x52U])) {
	    vlTOPp->traceChgThis__129(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x53U])) {
	    vlTOPp->traceChgThis__130(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x54U])) {
	    vlTOPp->traceChgThis__131(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x55U])) {
	    vlTOPp->traceChgThis__132(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x56U])) {
	    vlTOPp->traceChgThis__133(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x57U])) {
	    vlTOPp->traceChgThis__134(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x59U])) {
	    vlTOPp->traceChgThis__135(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x5aU])) {
	    vlTOPp->traceChgThis__136(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x5bU])) {
	    vlTOPp->traceChgThis__137(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x5cU])) {
	    vlTOPp->traceChgThis__138(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x5dU])) {
	    vlTOPp->traceChgThis__139(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x5fU])) {
	    vlTOPp->traceChgThis__140(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x60U])) {
	    vlTOPp->traceChgThis__141(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x61U])) {
	    vlTOPp->traceChgThis__142(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x62U])) {
	    vlTOPp->traceChgThis__143(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x64U])) {
	    vlTOPp->traceChgThis__144(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x65U])) {
	    vlTOPp->traceChgThis__145(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x66U])) {
	    vlTOPp->traceChgThis__146(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x67U])) {
	    vlTOPp->traceChgThis__147(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x69U])) {
	    vlTOPp->traceChgThis__148(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x6bU])) {
	    vlTOPp->traceChgThis__149(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__150(vlSymsp, vcdp, code);
    }
    // Final
    __Vilp = 0U;
    while ((__Vilp <= 0x88U)) {
	vlTOPp->__Vm_traceActivity[__Vilp] = 0U;
	__Vilp = ((IData)(1U) + __Vilp);
    }
}

void VNES::traceChgThis__2(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+1,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[0]),8);
	vcdp->chgBus(c+2,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[1]),8);
	vcdp->chgBus(c+3,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[2]),8);
	vcdp->chgBus(c+4,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[3]),8);
	vcdp->chgBus(c+5,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[4]),8);
	vcdp->chgBus(c+6,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[5]),8);
	vcdp->chgBus(c+7,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[6]),8);
	vcdp->chgBus(c+8,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[7]),8);
	vcdp->chgBus(c+9,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[8]),8);
	vcdp->chgBus(c+10,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[9]),8);
	vcdp->chgBus(c+11,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[10]),8);
	vcdp->chgBus(c+12,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[11]),8);
	vcdp->chgBus(c+13,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[12]),8);
	vcdp->chgBus(c+14,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[13]),8);
	vcdp->chgBus(c+15,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[14]),8);
	vcdp->chgBus(c+16,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[15]),8);
	vcdp->chgBus(c+17,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[16]),8);
	vcdp->chgBus(c+18,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[17]),8);
	vcdp->chgBus(c+19,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[18]),8);
	vcdp->chgBus(c+20,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[19]),8);
	vcdp->chgBus(c+21,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[20]),8);
	vcdp->chgBus(c+22,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[21]),8);
	vcdp->chgBus(c+23,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[22]),8);
	vcdp->chgBus(c+24,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[23]),8);
	vcdp->chgBus(c+25,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[24]),8);
	vcdp->chgBus(c+26,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[25]),8);
	vcdp->chgBus(c+27,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[26]),8);
	vcdp->chgBus(c+28,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[27]),8);
	vcdp->chgBus(c+29,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[28]),8);
	vcdp->chgBus(c+30,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[29]),8);
	vcdp->chgBus(c+31,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[30]),8);
	vcdp->chgBus(c+32,(vlTOPp->NES__DOT__PPU0__DOT__palette_ram[31]),8);
	vcdp->chgBit(c+33,(vlTOPp->NES__DOT__PPU0__DOT__ppu_read));
    }
}

void VNES::traceChgThis__3(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+34,(vlTOPp->NES__DOT__CPU0__DOT__NMI_edge));
    }
}

void VNES::traceChgThis__4(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+35,(vlTOPp->NES__DOT__CPU0__DOT__I));
    }
}

void VNES::traceChgThis__5(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+36,(vlTOPp->NES__DOT__CPU0__DOT__Z));
    }
}

void VNES::traceChgThis__6(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+37,(vlTOPp->NES__DOT__CPU0__DOT__N));
    }
}

void VNES::traceChgThis__7(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+38,(vlTOPp->NES__DOT__CPU0__DOT__V));
    }
}

void VNES::traceChgThis__8(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+39,(vlTOPp->NES__DOT__CPU0__DOT__C));
    }
}

void VNES::traceChgThis__9(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+40,(vlTOPp->NES__DOT____Vcellinp__CPU0__reset));
    }
}

void VNES::traceChgThis__10(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+41,(vlTOPp->NES__DOT__CPU0__DOT__cond_true));
    }
}

void VNES::traceChgThis__11(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+42,(vlTOPp->NES__DOT__CPU0__DOT__NMI_1));
    }
}

void VNES::traceChgThis__12(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+43,(vlTOPp->NES__DOT__CPU0__DOT__D));
    }
}

void VNES::traceChgThis__13(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+44,(((IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__address)
			     ? 0x72U : (IData)(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__data))),8);
    }
}

void VNES::traceChgThis__14(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+45,(vlTOPp->NES__DOT__CPU0__DOT__P),8);
    }
}

void VNES::traceChgThis__15(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+46,(vlTOPp->NES__DOT__data_out),8);
    }
}

void VNES::traceChgThis__16(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+47,(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__reset));
    }
}

void VNES::traceChgThis__17(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+48,(((IData)(vlTOPp->NES__DOT__PPU0__DOT__vblank)
			     ? (IData)(vlTOPp->NES__DOT__PPU0__DOT__ppu_reg_r_address)
			     : (((0x101U < (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)) 
				 & (0x140U > (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)))
				 ? (IData)(vlTOPp->NES__DOT__PPU0__DOT__sprite_address)
				 : ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__mem_fetch)
				     ? (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__ppu_r_addr_q)
				     : (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__palette_mem_address))))),16);
    }
}

void VNES::traceChgThis__18(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+49,((1U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__vblank)
				   ? (IData)(vlTOPp->NES__DOT__RWE)
				   : 0U))));
    }
}

void VNES::traceChgThis__19(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+50,((((0x101U < (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)) 
			     & (0x140U > (IData)(vlTOPp->NES__DOT__PPU0__DOT__DrawX)))
			     ? (IData)(vlTOPp->NES__DOT__PPU0__DOT__sprite_address)
			     : ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__mem_fetch)
				 ? (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__ppu_r_addr_q)
				 : (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__palette_mem_address)))),16);
    }
}

void VNES::traceChgThis__20(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+51,(vlTOPp->NES__DOT__Ready));
    }
}

void VNES::traceChgThis__21(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+52,(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__next_state),5);
    }
}

void VNES::traceChgThis__22(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+53,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__mem_fetch));
    }
}

void VNES::traceChgThis__23(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+54,(((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__mem_fetch)
			     ? (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__ppu_r_addr_q)
			     : (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__palette_mem_address))),16);
    }
}

void VNES::traceChgThis__24(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+55,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__ALE));
    }
}

void VNES::traceChgThis__25(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+56,(vlTOPp->NES__DOT__RWE));
    }
}

void VNES::traceChgThis__26(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+57,(vlTOPp->NES__DOT__CPU0__DOT__write_register));
    }
}

void VNES::traceChgThis__27(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+58,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap[0]),2);
	vcdp->chgBus(c+59,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap[1]),2);
	vcdp->chgBus(c+60,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap[2]),2);
	vcdp->chgBus(c+61,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap[3]),2);
	vcdp->chgBus(c+62,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap[4]),2);
	vcdp->chgBus(c+63,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap[5]),2);
	vcdp->chgBus(c+64,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap[6]),2);
	vcdp->chgBus(c+65,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap[7]),2);
	vcdp->chgBus(c+66,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__bitmap_index),3);
	vcdp->chgBus(c+67,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__current_px),2);
    }
}

void VNES::traceChgThis__28(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+68,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__nt_address),16);
	vcdp->chgBus(c+69,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__ppu_r_addr_q),16);
	vcdp->chgBus(c+70,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__at_address),16);
    }
}

void VNES::traceChgThis__29(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+71,(vlTOPp->NES__DOT__CPU0__DOT__PC_inc));
    }
}

void VNES::traceChgThis__30(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+72,(vlTOPp->NES__DOT__CPU0__DOT____Vcellinp__ALU__BCD));
    }
}

void VNES::traceChgThis__31(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+73,(((IData)(vlTOPp->NES__DOT__CPU0__DOT____Vcellinp__ALU__BCD) 
			    & (5U <= (7U & ((IData)(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_l) 
					    >> 1U))))));
    }
}

void VNES::traceChgThis__32(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+74,(((IData)(vlTOPp->NES__DOT__CPU0__DOT____Vcellinp__ALU__BCD) 
			    & (5U <= (7U & ((IData)(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_h) 
					    >> 1U))))));
    }
}

void VNES::traceChgThis__33(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+75,(vlTOPp->NES__DOT__CPU0__DOT__alu_shift_right));
    }
}

void VNES::traceChgThis__34(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+76,((1U & (((IData)(vlTOPp->NES__DOT__CPU0__DOT__alu_shift_right) 
				   | (3U == (3U & ((IData)(vlTOPp->NES__DOT__CPU0__DOT__alu_op) 
						   >> 2U))))
				   ? 0U : (IData)(vlTOPp->NES__DOT__CPU0__DOT__CI)))));
    }
}

void VNES::traceChgThis__35(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+77,(vlTOPp->NES__DOT__CPU0__DOT__CI));
    }
}

void VNES::traceChgThis__36(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+78,(vlTOPp->NES__DOT__CPU0__DOT__alu_op),4);
    }
}

void VNES::traceChgThis__37(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+79,(vlTOPp->NES__DOT__CPU0__DOT__regsel),2);
    }
}

void VNES::traceChgThis__38(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+80,(vlTOPp->NES__DOT__CPU0__DOT__DIMUX),8);
    }
}

void VNES::traceChgThis__39(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+81,(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__data),8);
    }
}

void VNES::traceChgThis__40(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+82,(vlTOPp->NES__DOT__CPU0__DOT__IR),8);
    }
}

void VNES::traceChgThis__41(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+83,(vlTOPp->NES__DOT__CPU0__DOT__PC_temp),16);
    }
}

void VNES::traceChgThis__42(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+84,(vlTOPp->NES__DOT__CPU0__DOT__BI),8);
    }
}

void VNES::traceChgThis__43(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+85,(vlTOPp->NES__DOT__CPU0__DOT__regfile),8);
    }
}

void VNES::traceChgThis__44(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+86,(vlTOPp->NES__DOT__data_in_cpu),8);
    }
}

void VNES::traceChgThis__45(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+87,(vlTOPp->NES__DOT__address_cpu),16);
    }
}

void VNES::traceChgThis__46(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+88,(vlTOPp->NES__DOT__CPU0__DOT__AI),8);
    }
}

void VNES::traceChgThis__47(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+89,(vlTOPp->NES__DOT__address),16);
    }
}

void VNES::traceChgThis__48(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+90,(vlTOPp->NES__DOT__data_in),8);
    }
}

void VNES::traceChgThis__49(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+91,(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_logic),9);
    }
}

void VNES::traceChgThis__50(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+92,(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_BI),8);
    }
}

void VNES::traceChgThis__51(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+93,(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_l),5);
    }
}

void VNES::traceChgThis__52(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+94,(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_HC));
    }
}

void VNES::traceChgThis__53(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+95,(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp_h),5);
    }
}

void VNES::traceChgThis__54(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+96,(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__temp),9);
    }
}

void VNES::traceChgThis__55(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+97,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__ppu_r_addr_d),16);
    }
}

void VNES::traceChgThis__56(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+98,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__nametable_byte_curr),8);
    }
}

void VNES::traceChgThis__57(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+99,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__attribute_data_curr),8);
	vcdp->chgBus(c+100,((3U & (IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__attribute_data_curr))),2);
	vcdp->chgBus(c+101,((3U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__attribute_data_curr) 
				   >> 4U))),2);
	vcdp->chgBus(c+102,((3U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__attribute_data_curr) 
				   >> 2U))),2);
	vcdp->chgBus(c+103,((3U & ((IData)(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__attribute_data_curr) 
				   >> 6U))),2);
    }
}

void VNES::traceChgThis__58(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+104,(vlTOPp->NES__DOT__PPU0__DOT__PPUDATA),8);
    }
}

void VNES::traceChgThis__59(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+105,(vlTOPp->NES__DOT__PPU0__DOT__BLUE_bg),8);
    }
}

void VNES::traceChgThis__60(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+106,(vlTOPp->NES__DOT__PPU0__DOT__RED_bg),8);
    }
}

void VNES::traceChgThis__61(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+107,(vlTOPp->NES__DOT__PPU0__DOT__GREEN_bg),8);
    }
}

void VNES::traceChgThis__62(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+108,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__attribute_data_next),8);
    }
}

void VNES::traceChgThis__63(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+109,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__nametable_byte_next),8);
    }
}

void VNES::traceChgThis__64(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+110,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__loopy_x),3);
    }
}

void VNES::traceChgThis__65(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+111,(vlTOPp->NES__DOT__data_out_mem),8);
    }
}

void VNES::traceChgThis__66(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+112,(vlTOPp->NES__DOT__ppu_rwe));
    }
}

void VNES::traceChgThis__67(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+113,(vlTOPp->NES__DOT__CPU0__DOT__cond_code),3);
    }
}

void VNES::traceChgThis__68(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+114,(vlTOPp->NES__DOT__CPU0__DOT__res));
    }
}

void VNES::traceChgThis__69(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+115,(vlTOPp->NES__DOT__pc),16);
	vcdp->chgBus(c+116,((0xffU & ((IData)(vlTOPp->NES__DOT__pc) 
				      >> 8U))),8);
	vcdp->chgBus(c+117,((0xffU & (IData)(vlTOPp->NES__DOT__pc))),8);
    }
}

void VNES::traceChgThis__70(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+118,(vlTOPp->NES__DOT__CPU0__DOT__IRHOLD_valid));
    }
}

void VNES::traceChgThis__71(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+119,(vlTOPp->NES__DOT__CPU0__DOT__brk));
    }
}

void VNES::traceChgThis__72(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+120,(vlTOPp->NES__DOT__CPU0__DOT__php));
    }
}

void VNES::traceChgThis__73(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+121,(vlTOPp->NES__DOT__CPU0__DOT__ABL),8);
    }
}

void VNES::traceChgThis__74(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+122,(vlTOPp->NES__DOT__CPU0__DOT__ABH),8);
    }
}

void VNES::traceChgThis__75(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+123,(vlTOPp->NES__DOT__CPU0__DOT__shift_right));
    }
}

void VNES::traceChgThis__76(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+124,(vlTOPp->NES__DOT__CPU0__DOT__inc));
    }
}

void VNES::traceChgThis__77(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+125,(vlTOPp->NES__DOT__CPU0__DOT__rotate));
    }
}

void VNES::traceChgThis__78(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+126,(vlTOPp->NES__DOT__CPU0__DOT__op),4);
    }
}

void VNES::traceChgThis__79(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+127,(vlTOPp->NES__DOT__CPU0__DOT__load_only));
    }
}

void VNES::traceChgThis__80(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+128,(vlTOPp->NES__DOT__CPU0__DOT__DIHOLD),8);
    }
}

void VNES::traceChgThis__81(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+129,(vlTOPp->NES__DOT__CPU0__DOT__dst_reg),2);
    }
}

void VNES::traceChgThis__82(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+130,(vlTOPp->NES__DOT__CPU0__DOT__src_reg),2);
    }
}

void VNES::traceChgThis__83(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+131,(vlTOPp->NES__DOT__CPU0__DOT__index_y));
    }
}

void VNES::traceChgThis__84(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+132,(vlTOPp->NES__DOT__CPU0__DOT__IRHOLD),8);
    }
}

void VNES::traceChgThis__85(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+133,(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__clk_divide),10);
	vcdp->chgBit(c+134,(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__clk_50k));
	vcdp->chgBus(c+135,(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CLK_DIV),32);
    }
}

void VNES::traceChgThis__86(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+136,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__ppu_address_latch));
    }
}

void VNES::traceChgThis__87(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+137,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyT_Next));
    }
}

void VNES::traceChgThis__88(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+138,(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__mI2C_CTRL_CLK));
    }
}

void VNES::traceChgThis__89(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+139,(vlTOPp->NES__DOT__CPU0__DOT__AXYS[0]),8);
	vcdp->chgBus(c+140,(vlTOPp->NES__DOT__CPU0__DOT__AXYS[1]),8);
	vcdp->chgBus(c+141,(vlTOPp->NES__DOT__CPU0__DOT__AXYS[2]),8);
	vcdp->chgBus(c+142,(vlTOPp->NES__DOT__CPU0__DOT__AXYS[3]),8);
	vcdp->chgBus(c+143,(vlTOPp->NES__DOT__CPU0__DOT__AXYS
			    [0U]),8);
	vcdp->chgBus(c+144,(vlTOPp->NES__DOT__CPU0__DOT__AXYS
			    [2U]),8);
	vcdp->chgBus(c+145,(vlTOPp->NES__DOT__CPU0__DOT__AXYS
			    [3U]),8);
	vcdp->chgBus(c+146,(vlTOPp->NES__DOT__CPU0__DOT__AXYS
			    [1U]),8);
    }
}

void VNES::traceChgThis__90(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+147,(vlTOPp->NES__DOT__PPU0__DOT__mem_data_in),8);
    }
}

void VNES::traceChgThis__91(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+148,(vlTOPp->NES__DOT__CPU0__DOT__AN));
    }
}

void VNES::traceChgThis__92(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+149,(((((IData)(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__AI7) 
			       ^ (IData)(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__BI7)) 
			      ^ (IData)(vlTOPp->NES__DOT__CPU0__DOT__CO)) 
			     ^ (IData)(vlTOPp->NES__DOT__CPU0__DOT__AN))));
    }
}

void VNES::traceChgThis__93(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+150,(vlTOPp->NES__DOT__CPU0__DOT__HC));
    }
}

void VNES::traceChgThis__94(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+151,(((IData)(vlTOPp->NES__DOT__CPU0__DOT__adj_bcd)
			      ? ((IData)(vlTOPp->NES__DOT__CPU0__DOT__adc_bcd)
				  ? ((IData)(vlTOPp->NES__DOT__CPU0__DOT__HC)
				      ? 6U : 0U) : 
				 ((IData)(vlTOPp->NES__DOT__CPU0__DOT__HC)
				   ? 0U : 0xaU)) : 0U)),4);
    }
}

void VNES::traceChgThis__95(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+152,(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__BI7));
    }
}

void VNES::traceChgThis__96(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+153,(vlTOPp->NES__DOT__CPU0__DOT__ALU__DOT__AI7));
    }
}

void VNES::traceChgThis__97(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+154,(vlTOPp->NES__DOT__CPU0__DOT__CO));
    }
}

void VNES::traceChgThis__98(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+155,(((IData)(vlTOPp->NES__DOT__CPU0__DOT__adj_bcd)
			      ? ((IData)(vlTOPp->NES__DOT__CPU0__DOT__adc_bcd)
				  ? ((IData)(vlTOPp->NES__DOT__CPU0__DOT__CO)
				      ? 6U : 0U) : 
				 ((IData)(vlTOPp->NES__DOT__CPU0__DOT__CO)
				   ? 0U : 0xaU)) : 0U)),4);
    }
}

void VNES::traceChgThis__99(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+156,(vlTOPp->NES__DOT__CPU0__DOT__backwards));
    }
}

void VNES::traceChgThis__100(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+157,(vlTOPp->NES__DOT__CPU0__DOT__write_back));
    }
}

void VNES::traceChgThis__101(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+158,(vlTOPp->NES__DOT__CPU0__DOT__bit_ins));
    }
}

void VNES::traceChgThis__102(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+159,(vlTOPp->NES__DOT__CPU0__DOT__cli));
    }
}

void VNES::traceChgThis__103(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+160,(vlTOPp->NES__DOT__CPU0__DOT__sec));
    }
}

void VNES::traceChgThis__104(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+161,(vlTOPp->NES__DOT__CPU0__DOT__clc));
    }
}

void VNES::traceChgThis__105(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+162,(vlTOPp->NES__DOT__CPU0__DOT__sei));
    }
}

void VNES::traceChgThis__106(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+163,(vlTOPp->NES__DOT__CPU0__DOT__clv));
    }
}

void VNES::traceChgThis__107(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+164,(vlTOPp->NES__DOT__CPU0__DOT__store));
    }
}

void VNES::traceChgThis__108(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+165,(vlTOPp->NES__DOT__CPU0__DOT__load_reg));
    }
}

void VNES::traceChgThis__109(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+166,(vlTOPp->NES__DOT__CPU0__DOT__shift));
    }
}

void VNES::traceChgThis__110(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+167,(vlTOPp->NES__DOT__CPU0__DOT__compare));
    }
}

void VNES::traceChgThis__111(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+168,(vlTOPp->NES__DOT__CPU0__DOT__adj_bcd));
    }
}

void VNES::traceChgThis__112(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+169,(vlTOPp->NES__DOT__CPU0__DOT__adc_bcd));
    }
}

void VNES::traceChgThis__113(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+170,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_0_curr),8);
    }
}

void VNES::traceChgThis__114(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+171,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_1_curr),8);
    }
}

void VNES::traceChgThis__115(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+172,(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__fail));
	vcdp->chgBit(c+173,(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__ack));
    }
}

void VNES::traceChgThis__116(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+174,(vlTOPp->NES__DOT__data_out_ppu),8);
	vcdp->chgBus(c+175,(vlTOPp->NES__DOT__PPU0__DOT__ppu_w_address),16);
    }
}

void VNES::traceChgThis__117(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+176,(vlTOPp->NES__DOT__CPU0__DOT__adc_sbc));
    }
}

void VNES::traceChgThis__118(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+177,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__loopy_latch));
    }
}

void VNES::traceChgThis__119(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+178,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_1_next),8);
    }
}

void VNES::traceChgThis__120(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+179,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__pattern_byte_0_next),8);
    }
}

void VNES::traceChgThis__121(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+180,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyT),15);
    }
}

void VNES::traceChgThis__122(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+181,(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__address));
    }
}

void VNES::traceChgThis__123(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+182,(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__byte_num_local),3);
    }
}

void VNES::traceChgThis__124(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+183,(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__counter),4);
    }
}

void VNES::traceChgThis__125(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+184,(vlTOPp->NES__DOT__PPU0__DOT__DrawY),10);
    }
}

void VNES::traceChgThis__126(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+185,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__LoopyV),15);
    }
}

void VNES::traceChgThis__127(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+186,(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__done));
    }
}

void VNES::traceChgThis__128(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+187,(vlTOPp->NES__DOT__PPU0__DOT__PPUADDR),16);
    }
}

void VNES::traceChgThis__129(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+188,(vlTOPp->NES__DOT__PPUSCROLL),16);
    }
}

void VNES::traceChgThis__130(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+189,(vlTOPp->NES__DOT__PPU0__DOT__PPUSTATUS),8);
    }
}

void VNES::traceChgThis__131(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+190,(vlTOPp->NES__DOT__PPU0__DOT__PPU_SCROLL_FLAG));
    }
}

void VNES::traceChgThis__132(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+191,(vlTOPp->NES__DOT__PPU0__DOT__PPU_ADDR_FLAG));
    }
}

void VNES::traceChgThis__133(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+192,(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__I2C_0__DOT__state),5);
    }
}

void VNES::traceChgThis__134(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+193,(vlTOPp->NES__DOT__PPU0__DOT__BG0__DOT__ppu_increment));
    }
}

void VNES::traceChgThis__135(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+194,(vlTOPp->NES__DOT__PPU0__DOT__OAMADDR),8);
    }
}

void VNES::traceChgThis__136(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+195,(vlTOPp->NES__DOT__PPU0__DOT__PPUMASK),8);
    }
}

void VNES::traceChgThis__137(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+196,(vlTOPp->NES__DOT__PPU0__DOT__PPUCTRL),8);
    }
}

void VNES::traceChgThis__138(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+197,(vlTOPp->NES__DOT__PPU0__DOT__OAMDATA),8);
    }
}

void VNES::traceChgThis__139(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+198,(vlTOPp->NES__DOT__PPU0__DOT__mem_data_out),8);
    }
}

void VNES::traceChgThis__140(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+199,(vlTOPp->NES__DOT__CPU0__DOT__ADD),8);
	vcdp->chgBit(c+200,((1U & (~ (IData)((0U != (IData)(vlTOPp->NES__DOT__CPU0__DOT__ADD)))))));
    }
}

void VNES::traceChgThis__141(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+201,(vlTOPp->NES__DOT__CPU0__DOT__cld));
    }
}

void VNES::traceChgThis__142(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+202,(vlTOPp->NES__DOT__CPU0__DOT__sed));
    }
}

void VNES::traceChgThis__143(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+203,(vlTOPp->NES__DOT__CPU0__DOT__plp));
    }
}

void VNES::traceChgThis__144(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+204,(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__byte_lut_next),8);
    }
}

void VNES::traceChgThis__145(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+205,(vlTOPp->NES__DOT__PPU0__DOT__ppu_reg_r_address),16);
    }
}

void VNES::traceChgThis__146(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+206,(vlTOPp->NES__DOT__PPU0__DOT__vblank));
    }
}

void VNES::traceChgThis__147(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+207,(vlTOPp->NES__DOT__PPU0__DOT__DrawX),10);
    }
}

void VNES::traceChgThis__148(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+208,(vlTOPp->NES__DOT__CPU0__DOT__state),6);
    }
}

void VNES::traceChgThis__149(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+209,(vlTOPp->NES__DOT__PPU0__DOT__HD_0__DOT__byte_lut),8);
    }
}

void VNES::traceChgThis__150(VNES__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNES* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+210,(vlTOPp->clk_50));
	vcdp->chgBit(c+211,(vlTOPp->ready_in));
	vcdp->chgBit(c+212,(vlTOPp->reset_al));
	vcdp->chgBit(c+213,(vlTOPp->nmi_interrupt));
	vcdp->chgBus(c+214,(vlTOPp->RED),8);
	vcdp->chgBus(c+215,(vlTOPp->GREEN),8);
	vcdp->chgBus(c+216,(vlTOPp->BLUE),8);
	vcdp->chgBit(c+217,(vlTOPp->VGA_CLK));
	vcdp->chgBit(c+218,(vlTOPp->VGA_HS));
	vcdp->chgBit(c+219,(vlTOPp->VGA_VS));
	vcdp->chgBit(c+220,(vlTOPp->VGA_BLANK_N));
	vcdp->chgBit(c+221,(vlTOPp->VGA_SYNC_N));
	vcdp->chgBit(c+222,(vlTOPp->vga_reset));
	vcdp->chgBus(c+223,(vlTOPp->multiplier),8);
	vcdp->chgBus(c+224,(vlTOPp->multiplier_two),8);
	vcdp->chgBit(c+225,(vlTOPp->nt_bit));
	vcdp->chgBit(c+226,(vlTOPp->scl));
	vcdp->chgBit(c+227,(vlTOPp->sda));
	vcdp->chgBit(c+228,(vlTOPp->Draw_enable));
	vcdp->chgBit(c+229,((1U & (~ (IData)(vlTOPp->reset_al)))));
    }
}
