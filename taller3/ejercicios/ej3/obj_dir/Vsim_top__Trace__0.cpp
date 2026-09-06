// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vsim_top__Syms.h"


void Vsim_top___024root__trace_chg_0_sub_0(Vsim_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsim_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root__trace_chg_0\n"); );
    // Body
    Vsim_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsim_top___024root*>(voidSelf);
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vsim_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vsim_top___024root__trace_chg_0_sub_0(Vsim_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root__trace_chg_0_sub_0\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.sim_top__DOT__done));
        bufp->chgBit(oldp+1,(vlSelfRef.sim_top__DOT__pass_all));
        bufp->chgCData(oldp+2,(vlSelfRef.sim_top__DOT__tb__DOT__a),4);
        bufp->chgCData(oldp+3,(vlSelfRef.sim_top__DOT__tb__DOT__b),4);
        bufp->chgBit(oldp+4,(vlSelfRef.sim_top__DOT__tb__DOT__cin));
        bufp->chgCData(oldp+5,(vlSelfRef.sim_top__DOT__tb__DOT__expected),5);
        bufp->chgIData(oldp+6,(vlSelfRef.sim_top__DOT__tb__DOT__i),32);
        bufp->chgIData(oldp+7,(vlSelfRef.sim_top__DOT__tb__DOT__nfail),32);
        bufp->chgBit(oldp+8,((1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__a))));
        bufp->chgBit(oldp+9,((1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__b))));
        bufp->chgBit(oldp+10,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__a) 
                                     >> 1U))));
        bufp->chgBit(oldp+11,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__b) 
                                     >> 1U))));
        bufp->chgBit(oldp+12,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__a) 
                                     >> 2U))));
        bufp->chgBit(oldp+13,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__b) 
                                     >> 2U))));
        bufp->chgBit(oldp+14,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__a) 
                                     >> 3U))));
        bufp->chgBit(oldp+15,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__b) 
                                     >> 3U))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity[4U])))) {
        bufp->chgBit(oldp+16,((1U & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                      >> 3U) | ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                  >> 2U) 
                                                 | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__fa2__DOT__s1__DOT__b) 
                                                    & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                                       >> 2U))) 
                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                                   >> 3U))))));
        bufp->chgBit(oldp+17,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__fa1__DOT__s1__DOT__b));
        bufp->chgBit(oldp+18,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__fa2__DOT__s1__DOT__b));
        bufp->chgBit(oldp+19,((1U & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                      >> 2U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__fa2__DOT__s1__DOT__b) 
                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                                   >> 2U))))));
        bufp->chgBit(oldp+20,((1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))));
        bufp->chgBit(oldp+21,((1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))));
        bufp->chgBit(oldp+22,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__fa1__DOT__s1__DOT__b) 
                                     ^ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                        >> 1U)))));
        bufp->chgBit(oldp+23,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                     >> 1U))));
        bufp->chgBit(oldp+24,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                     >> 1U))));
        bufp->chgBit(oldp+25,(((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__fa1__DOT__s1__DOT__b) 
                               & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                  >> 1U))));
        bufp->chgBit(oldp+26,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__fa2__DOT__s1__DOT__b) 
                                     ^ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                        >> 2U)))));
        bufp->chgBit(oldp+27,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                     >> 2U))));
        bufp->chgBit(oldp+28,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                     >> 2U))));
        bufp->chgBit(oldp+29,(((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__fa2__DOT__s1__DOT__b) 
                               & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                  >> 2U))));
        bufp->chgBit(oldp+30,((1U & ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                       >> 2U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__fa2__DOT__s1__DOT__b) 
                                                 & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                                    >> 2U))) 
                                     ^ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                        >> 3U)))));
        bufp->chgBit(oldp+31,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                     >> 3U))));
        bufp->chgBit(oldp+32,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                     >> 3U))));
        bufp->chgBit(oldp+33,((IData)((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                        >> 3U) & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                   >> 2U) 
                                                  | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__fa2__DOT__s1__DOT__b) 
                                                     & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                                        >> 2U)))))));
    }
    bufp->chgBit(oldp+34,(vlSelfRef.sim_top__DOT__clk));
    bufp->chgBit(oldp+35,(vlSelfRef.sim_top__DOT__rst));
    bufp->chgCData(oldp+36,(((((2U & (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                         >> 2U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__fa2__DOT__s1__DOT__b) 
                                                   & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                                      >> 2U))) 
                                       ^ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                          >> 3U)) << 1U)) 
                               | (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__fa2__DOT__s1__DOT__b) 
                                        ^ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                           >> 2U)))) 
                              << 2U) | ((2U & (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__fa1__DOT__s1__DOT__b) 
                                                << 1U) 
                                               ^ (0xfffffffeU 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)))) 
                                        | (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__cin) 
                                                 ^ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)))))),4);
    bufp->chgBit(oldp+37,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__cin) 
                                 ^ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)))));
    bufp->chgBit(oldp+38,(((IData)(vlSelfRef.sim_top__DOT__tb__DOT__cin) 
                           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))));
}

void Vsim_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root__trace_cleanup\n"); );
    // Body
    Vsim_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsim_top___024root*>(voidSelf);
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
