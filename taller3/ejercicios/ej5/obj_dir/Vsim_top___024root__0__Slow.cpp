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
            VL_FATAL_MT("/workspaces/Talleres_SD/taller3/ejercicios/lib/sim_top.sv", 4, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
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
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_3__DOT__q 
        = ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_3__DOT____Vcellout__b3__q) 
             << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_3__DOT____Vcellout__b2__q) 
                       << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_3__DOT____Vcellout__b1__q) 
                                   << 1U) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_3__DOT____Vcellout__b0__q)));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_2__DOT__q 
        = ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_2__DOT____Vcellout__b3__q) 
             << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_2__DOT____Vcellout__b2__q) 
                       << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_2__DOT____Vcellout__b1__q) 
                                   << 1U) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_2__DOT____Vcellout__b0__q)));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_1__DOT__q 
        = ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_1__DOT____Vcellout__b3__q) 
             << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_1__DOT____Vcellout__b2__q) 
                       << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_1__DOT____Vcellout__b1__q) 
                                   << 1U) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_1__DOT____Vcellout__b0__q)));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT__q 
        = ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT____Vcellout__b3__q) 
             << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT____Vcellout__b2__q) 
                       << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT____Vcellout__b1__q) 
                                   << 1U) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT____Vcellout__b0__q)));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r_4b__DOT__fs1__DOT__r1__DOT__b 
        = ((~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_A__DOT____Vcellout__b0__q)) 
           & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_B__DOT____Vcellout__b0__q));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_B__DOT__q 
        = ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_B__DOT____Vcellout__b3__q) 
             << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_B__DOT____Vcellout__b2__q) 
                       << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_B__DOT____Vcellout__b1__q) 
                                   << 1U) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_B__DOT____Vcellout__b0__q)));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_A__DOT__q 
        = ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_A__DOT____Vcellout__b3__q) 
             << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_A__DOT____Vcellout__b2__q) 
                       << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_A__DOT____Vcellout__b1__q) 
                                   << 1U) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_A__DOT____Vcellout__b0__q)));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_B__DOT__din 
        = ((0U == (IData)(vlSelfRef.sim_top__DOT__tb__DOT__src_b))
            ? (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT__q)
            : ((1U == (IData)(vlSelfRef.sim_top__DOT__tb__DOT__src_b))
                ? (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_1__DOT__q)
                : ((2U == (IData)(vlSelfRef.sim_top__DOT__tb__DOT__src_b))
                    ? (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_2__DOT__q)
                    : (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_3__DOT__q))));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_A__DOT__din 
        = ((0U == (IData)(vlSelfRef.sim_top__DOT__tb__DOT__src_a))
            ? (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT__q)
            : ((1U == (IData)(vlSelfRef.sim_top__DOT__tb__DOT__src_a))
                ? (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_1__DOT__q)
                : ((2U == (IData)(vlSelfRef.sim_top__DOT__tb__DOT__src_a))
                    ? (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_2__DOT__q)
                    : (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_3__DOT__q))));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__comp_and_4b__DOT__result 
        = ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_A__DOT__q) 
           & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_B__DOT__q));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_A__DOT__q) 
                                                ^ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_B__DOT__q));
    if (vlSelfRef.sim_top__DOT__tb__DOT__load_op_b) {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_B__DOT__b3__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_B__DOT__din) 
                     >> 3U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_B__DOT__b2__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_B__DOT__din) 
                     >> 2U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_B__DOT__b1__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_B__DOT__din) 
                     >> 1U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_B__DOT__b0__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_B__DOT__din));
    } else {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_B__DOT__b3__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_B__DOT____Vcellout__b3__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_B__DOT__b2__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_B__DOT____Vcellout__b2__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_B__DOT__b1__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_B__DOT____Vcellout__b1__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_B__DOT__b0__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_B__DOT____Vcellout__b0__q));
    }
    if (vlSelfRef.sim_top__DOT__tb__DOT__load_op_a) {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_A__DOT__b3__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_A__DOT__din) 
                     >> 3U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_A__DOT__b2__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_A__DOT__din) 
                     >> 2U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_A__DOT__b1__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_A__DOT__din) 
                     >> 1U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_A__DOT__b0__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_A__DOT__din));
    } else {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_A__DOT__b3__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_A__DOT____Vcellout__b3__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_A__DOT__b2__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_A__DOT____Vcellout__b2__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_A__DOT__b1__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_A__DOT____Vcellout__b1__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_A__DOT__b0__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_A__DOT____Vcellout__b0__q));
    }
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__s_4b__DOT__fa2__DOT__s1__DOT__b 
        = (1U & (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__comp_and_4b__DOT__result) 
                  >> 1U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__comp_and_4b__DOT__result) 
                            & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                               >> 1U))));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r_4b__DOT__fs2__DOT__r1__DOT__b 
        = (((~ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                >> 1U)) & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r_4b__DOT__fs1__DOT__r1__DOT__b)) 
           | ((~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_A__DOT____Vcellout__b1__q)) 
              & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_B__DOT____Vcellout__b1__q)));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT__din 
        = ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__force_en)
            ? (IData)(vlSelfRef.sim_top__DOT__tb__DOT__force_in)
            : ((0U == (IData)(vlSelfRef.sim_top__DOT__tb__DOT__op))
                ? (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__comp_and_4b__DOT__result)
                : ((1U == (IData)(vlSelfRef.sim_top__DOT__tb__DOT__op))
                    ? ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_A__DOT__q) 
                       | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_B__DOT__q))
                    : ((((2U == (IData)(vlSelfRef.sim_top__DOT__tb__DOT__op))
                          ? ((4U & (((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__comp_and_4b__DOT__result) 
                                       >> 2U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__s_4b__DOT__fa2__DOT__s1__DOT__b) 
                                                 & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                    >> 2U))) 
                                     ^ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                        >> 3U)) << 2U)) 
                             | ((2U & (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__s_4b__DOT__fa2__DOT__s1__DOT__b) 
                                        << 1U) ^ (0x7ffffffeU 
                                                  & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                     >> 1U)))) 
                                | (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__comp_and_4b__DOT__result) 
                                         ^ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                            >> 1U)))))
                          : ((4U & (((((~ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                           >> 2U)) 
                                       & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r_4b__DOT__fs2__DOT__r1__DOT__b)) 
                                      | ((~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_A__DOT____Vcellout__b2__q)) 
                                         & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__cargo_op_B__DOT____Vcellout__b2__q))) 
                                     ^ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                        >> 3U)) << 2U)) 
                             | ((2U & (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r_4b__DOT__fs2__DOT__r1__DOT__b) 
                                        << 1U) ^ (0x7ffffffeU 
                                                  & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                     >> 1U)))) 
                                | (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r_4b__DOT__fs1__DOT__r1__DOT__b) 
                                         ^ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                            >> 1U)))))) 
                        << 1U) | (1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))))));
    if (vlSelfRef.sim_top__DOT__tb__DOT__we3) {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_3__DOT__b3__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT__din) 
                     >> 3U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_3__DOT__b2__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT__din) 
                     >> 2U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_3__DOT__b1__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT__din) 
                     >> 1U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_3__DOT__b0__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT__din));
    } else {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_3__DOT__b3__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_3__DOT____Vcellout__b3__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_3__DOT__b2__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_3__DOT____Vcellout__b2__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_3__DOT__b1__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_3__DOT____Vcellout__b1__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_3__DOT__b0__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_3__DOT____Vcellout__b0__q));
    }
    if (vlSelfRef.sim_top__DOT__tb__DOT__we2) {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_2__DOT__b3__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT__din) 
                     >> 3U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_2__DOT__b2__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT__din) 
                     >> 2U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_2__DOT__b1__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT__din) 
                     >> 1U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_2__DOT__b0__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT__din));
    } else {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_2__DOT__b3__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_2__DOT____Vcellout__b3__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_2__DOT__b2__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_2__DOT____Vcellout__b2__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_2__DOT__b1__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_2__DOT____Vcellout__b1__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_2__DOT__b0__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_2__DOT____Vcellout__b0__q));
    }
    if (vlSelfRef.sim_top__DOT__tb__DOT__we1) {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_1__DOT__b3__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT__din) 
                     >> 3U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_1__DOT__b2__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT__din) 
                     >> 2U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_1__DOT__b1__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT__din) 
                     >> 1U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_1__DOT__b0__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT__din));
    } else {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_1__DOT__b3__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_1__DOT____Vcellout__b3__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_1__DOT__b2__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_1__DOT____Vcellout__b2__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_1__DOT__b1__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_1__DOT____Vcellout__b1__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_1__DOT__b0__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_1__DOT____Vcellout__b0__q));
    }
    if (vlSelfRef.sim_top__DOT__tb__DOT__we0) {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT__b3__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT__din) 
                     >> 3U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT__b2__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT__din) 
                     >> 2U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT__b1__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT__din) 
                     >> 1U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT__b0__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT__din));
    } else {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT__b3__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT____Vcellout__b3__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT__b2__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT____Vcellout__b2__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT__b1__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT____Vcellout__b1__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT__b0__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT____Vcellout__b0__q));
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
                    vlSelfRef.__Vm_traceActivity[4U] = 1U;
                    vlSelfRef.__Vm_traceActivity[5U] = 1U;
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
    vlSelf->sim_top__DOT__tb__DOT__force_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11825736345054608814ull);
    vlSelf->sim_top__DOT__tb__DOT__we0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6694083616346457009ull);
    vlSelf->sim_top__DOT__tb__DOT__we1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18000738162312929594ull);
    vlSelf->sim_top__DOT__tb__DOT__we2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3040683914065009311ull);
    vlSelf->sim_top__DOT__tb__DOT__we3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 82640113596366877ull);
    vlSelf->sim_top__DOT__tb__DOT__load_op_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15016561342497989392ull);
    vlSelf->sim_top__DOT__tb__DOT__load_op_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8270684038552559718ull);
    vlSelf->sim_top__DOT__tb__DOT__src_a = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 941689211681791435ull);
    vlSelf->sim_top__DOT__tb__DOT__src_b = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5194931667482497760ull);
    vlSelf->sim_top__DOT__tb__DOT__op = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8635571930154692363ull);
    vlSelf->sim_top__DOT__tb__DOT__nfail = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3770900744349794232ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r_4b__DOT__fs2__DOT__r1__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11711515355690990005ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r_4b__DOT__fs1__DOT__r1__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16488448422882844633ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__s_4b__DOT__fa2__DOT__s1__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10471271765413580236ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_3__DOT__q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8723721789312663507ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_3__DOT____Vcellout__b0__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_3__DOT____Vcellout__b1__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_3__DOT____Vcellout__b2__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_3__DOT____Vcellout__b3__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_3__DOT__b3__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6447620408472299266ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_3__DOT__b2__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1532452909360450882ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_3__DOT__b1__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14085955699912696622ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_3__DOT__b0__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4325533192779552177ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_2__DOT__q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14396229590355944857ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_2__DOT____Vcellout__b0__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_2__DOT____Vcellout__b1__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_2__DOT____Vcellout__b2__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_2__DOT____Vcellout__b3__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_2__DOT__b3__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16879276828680205349ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_2__DOT__b2__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16454598010816504025ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_2__DOT__b1__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10413007257178683686ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_2__DOT__b0__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5367857200828013514ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_1__DOT__q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 152186647206247956ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_1__DOT____Vcellout__b0__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_1__DOT____Vcellout__b1__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_1__DOT____Vcellout__b2__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_1__DOT____Vcellout__b3__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_1__DOT__b3__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14432536414954781861ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_1__DOT__b2__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14687677256050958338ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_1__DOT__b1__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6376619222562658821ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_1__DOT__b0__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13395761184063172898ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT__din = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15546013028463291771ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT__q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16723761463602346600ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT____Vcellout__b0__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT____Vcellout__b1__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT____Vcellout__b2__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT____Vcellout__b3__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT__b3__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12270203393115802237ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT__b2__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1206335692627298082ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT__b1__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15424352975195523835ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__r4b_0__DOT__b0__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16865741685383179027ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__cargo_op_B__DOT__din = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6976099111286160009ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__cargo_op_B__DOT__q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15110398217332060512ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__cargo_op_B__DOT____Vcellout__b0__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__cargo_op_B__DOT____Vcellout__b1__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__cargo_op_B__DOT____Vcellout__b2__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__cargo_op_B__DOT____Vcellout__b3__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__cargo_op_B__DOT__b3__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17266204147596323373ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__cargo_op_B__DOT__b2__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4835824744185054505ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__cargo_op_B__DOT__b1__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7373699730076632653ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__cargo_op_B__DOT__b0__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13306061784528286365ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__cargo_op_A__DOT__din = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12868337633267946221ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__cargo_op_A__DOT__q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8571697913890831386ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__cargo_op_A__DOT____Vcellout__b0__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__cargo_op_A__DOT____Vcellout__b1__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__cargo_op_A__DOT____Vcellout__b2__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__cargo_op_A__DOT____Vcellout__b3__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__cargo_op_A__DOT__b3__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17587354398377708155ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__cargo_op_A__DOT__b2__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5446776946148325194ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__cargo_op_A__DOT__b1__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13124921397988160978ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__cargo_op_A__DOT__b0__DOT__u_ff__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6498791186286961232ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__comp_and_4b__DOT__result = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8050486940919264364ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = 0;
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
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
