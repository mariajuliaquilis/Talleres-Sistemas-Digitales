// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim_top.h for the primary calling header

#include "Vsim_top__pch.h"

void Vsim_top___024root___timing_ready(Vsim_top___024root* vlSelf);

VL_ATTR_COLD void Vsim_top___024root___eval_static(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval_static\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (2ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (4ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__clk__0 
        = vlSelfRef.sim_top__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__done__0 
        = vlSelfRef.sim_top__DOT__done;
    vlSelfRef.__Vtrigprevexpr_h5b83a2b0__1 = (1U & 
                                              (~ (IData)(vlSelfRef.sim_top__DOT__rst)));
    Vsim_top___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vsim_top___024root___eval_final(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval_final\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsim_top___024root___eval_phase__stl(Vsim_top___024root* vlSelf);

VL_ATTR_COLD void Vsim_top___024root___eval_settle(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval_settle\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vsim_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/workspaces/Talleres_SD/taller2/ejercicios/lib/sim_top.sv", 5, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vsim_top___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vsim_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vsim_top___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vsim_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

VL_ATTR_COLD void Vsim_top___024root___stl_sequent__TOP__0(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___stl_sequent__TOP__0\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_a__DOT__r1__DOT__flip_flop_d__DOT__rst 
        = ((IData)(vlSelfRef.sim_top__DOT__rst) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__rst_extra));
    if (vlSelfRef.sim_top__DOT__tb__DOT__we_b) {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_b__DOT__r4__DOT__flip_flop_d__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__force_in) 
                     >> 3U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_b__DOT__r3__DOT__flip_flop_d__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__force_in) 
                     >> 2U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_b__DOT__r2__DOT__flip_flop_d__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__force_in) 
                     >> 1U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_b__DOT__r1__DOT__flip_flop_d__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__force_in));
    } else {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_b__DOT__r4__DOT__flip_flop_d__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_b__DOT____Vcellout__r4__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_b__DOT__r3__DOT__flip_flop_d__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_b__DOT____Vcellout__r3__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_b__DOT__r2__DOT__flip_flop_d__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_b__DOT____Vcellout__r2__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_b__DOT__r1__DOT__flip_flop_d__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_b__DOT____Vcellout__r1__q));
    }
    if (vlSelfRef.sim_top__DOT__tb__DOT__we_a) {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_a__DOT__r4__DOT__flip_flop_d__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__force_in) 
                     >> 3U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_a__DOT__r3__DOT__flip_flop_d__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__force_in) 
                     >> 2U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_a__DOT__r2__DOT__flip_flop_d__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__force_in) 
                     >> 1U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_a__DOT__r1__DOT__flip_flop_d__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__force_in));
    } else {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_a__DOT__r4__DOT__flip_flop_d__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_a__DOT____Vcellout__r4__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_a__DOT__r3__DOT__flip_flop_d__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_a__DOT____Vcellout__r3__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_a__DOT__r2__DOT__flip_flop_d__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_a__DOT____Vcellout__r2__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_a__DOT__r1__DOT__flip_flop_d__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_a__DOT____Vcellout__r1__q));
    }
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_b__DOT__q 
        = ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_b__DOT____Vcellout__r4__q) 
             << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_b__DOT____Vcellout__r3__q) 
                       << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_b__DOT____Vcellout__r2__q) 
                                   << 1U) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_b__DOT____Vcellout__r1__q)));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_a__DOT__q 
        = ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_a__DOT____Vcellout__r4__q) 
             << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_a__DOT____Vcellout__r3__q) 
                       << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_a__DOT____Vcellout__r2__q) 
                                   << 1U) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_a__DOT____Vcellout__r1__q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_a__DOT__q) 
                                                & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_b__DOT__q));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_a__DOT__q) 
                                                ^ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_b__DOT__q));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_s__DOT__r2__DOT__din 
        = (1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                 ^ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                    >> 1U)));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__s4b__DOT__fa2__DOT__ha1__DOT__b 
        = (1U & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                  >> 1U) | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                            & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                               >> 1U))));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_s__DOT__r3__DOT__din 
        = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__s4b__DOT__fa2__DOT__ha1__DOT__b) 
                 ^ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                    >> 2U)));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_s__DOT__r4__DOT__din 
        = (1U & ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                   >> 2U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__s4b__DOT__fa2__DOT__ha1__DOT__b) 
                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                >> 2U))) ^ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                            >> 3U)));
    if (vlSelfRef.sim_top__DOT__tb__DOT__we_s) {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_s__DOT__r1__DOT__flip_flop_d__DOT__d 
            = (1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_s__DOT__r2__DOT__flip_flop_d__DOT__d 
            = vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_s__DOT__r2__DOT__din;
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_s__DOT__r3__DOT__flip_flop_d__DOT__d 
            = vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_s__DOT__r3__DOT__din;
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_s__DOT__r4__DOT__flip_flop_d__DOT__d 
            = vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_s__DOT__r4__DOT__din;
    } else {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_s__DOT__r1__DOT__flip_flop_d__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_s__DOT____Vcellout__r1__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_s__DOT__r2__DOT__flip_flop_d__DOT__d 
            = vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_s__DOT____Vcellout__r2__q;
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_s__DOT__r3__DOT__flip_flop_d__DOT__d 
            = vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_s__DOT____Vcellout__r3__q;
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_s__DOT__r4__DOT__flip_flop_d__DOT__d 
            = vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_s__DOT____Vcellout__r4__q;
    }
}

VL_ATTR_COLD bool Vsim_top___024root___eval_phase__stl(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval_phase__stl\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsim_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vsim_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vsim_top___024root___stl_sequent__TOP__0(vlSelf);
                {
                    // Inlined CFunc: __Vm_traceActivitySetAll
                    vlSelfRef.__Vm_traceActivity[0U] = 1U;
                    vlSelfRef.__Vm_traceActivity[1U] = 1U;
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.__Vm_traceActivity[3U] = 1U;
                }
            }
        }
    }
    return (__VstlExecute);
}

bool Vsim_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vsim_top___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge sim_top.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( sim_top.done)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( (~ sim_top.rst))\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(negedge sim_top.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsim_top___024root___ctor_var_reset(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___ctor_var_reset\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->sim_top__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3530725056373553288ull);
    vlSelf->sim_top__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11400418036824371223ull);
    vlSelf->sim_top__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3402611505963488124ull);
    vlSelf->sim_top__DOT__pass_all = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 753177774469670543ull);
    vlSelf->sim_top__DOT__tb__DOT__force_in = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17808076716579637202ull);
    vlSelf->sim_top__DOT__tb__DOT__we_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3755008886758109040ull);
    vlSelf->sim_top__DOT__tb__DOT__we_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1676694928210767383ull);
    vlSelf->sim_top__DOT__tb__DOT__we_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11887227507511761411ull);
    vlSelf->sim_top__DOT__tb__DOT__rst_extra = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8651839580731846872ull);
    vlSelf->sim_top__DOT__tb__DOT__nfail = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3770900744349794232ull);
    vlSelf->sim_top__DOT__tb__DOT__npass = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4804682576698571265ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__s4b__DOT__fa2__DOT__ha1__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14094622262586481457ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_s__DOT____Vcellout__r1__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_s__DOT____Vcellout__r2__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_s__DOT____Vcellout__r3__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_s__DOT____Vcellout__r4__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_s__DOT__r4__DOT__din = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10549288496152320534ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_s__DOT__r4__DOT__flip_flop_d__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8006027334823041884ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_s__DOT__r3__DOT__din = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16156240360664643758ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_s__DOT__r3__DOT__flip_flop_d__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13831777949799630084ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_s__DOT__r2__DOT__din = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4306288552639744369ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_s__DOT__r2__DOT__flip_flop_d__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 715877244638029139ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_s__DOT__r1__DOT__flip_flop_d__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6874386557464899368ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_b__DOT__q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18036181532616850218ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_b__DOT____Vcellout__r1__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_b__DOT____Vcellout__r2__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_b__DOT____Vcellout__r3__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_b__DOT____Vcellout__r4__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_b__DOT__r4__DOT__flip_flop_d__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4015621215067917202ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_b__DOT__r3__DOT__flip_flop_d__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1410963679357430240ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_b__DOT__r2__DOT__flip_flop_d__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10869447313958108251ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_b__DOT__r1__DOT__flip_flop_d__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3738177023741785039ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_a__DOT__q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11963099256416346082ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_a__DOT____Vcellout__r1__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_a__DOT____Vcellout__r2__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_a__DOT____Vcellout__r3__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_a__DOT____Vcellout__r4__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_a__DOT__r4__DOT__flip_flop_d__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13810668868000033352ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_a__DOT__r3__DOT__flip_flop_d__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14961082315521852502ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_a__DOT__r2__DOT__flip_flop_d__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6097837464110746491ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_a__DOT__r1__DOT__flip_flop_d__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3801434460154814882ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_a__DOT__r1__DOT__flip_flop_d__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8838974629925243618ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__sim_top__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__sim_top__DOT__done__0 = 0;
    vlSelf->__Vtrigprevexpr_h5b83a2b0__1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
