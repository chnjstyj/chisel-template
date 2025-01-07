// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VRAM_32X8_H_
#define VERILATED_VRAM_32X8_H_  // guard

#include "verilated.h"

class Vram_32x8__Syms;
class Vram_32x8___024root;

// This class is the main interface to the Verilated model
class Vram_32x8 VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vram_32x8__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clock,0,0);
    VL_IN8(&reset,0,0);
    VL_IN8(&io_read_0_ready,0,0);
    VL_OUT8(&io_read_0_valid,0,0);
    VL_OUT8(&io_read_0_bits,7,0);
    VL_IN8(&io_read_1_ready,0,0);
    VL_OUT8(&io_read_1_valid,0,0);
    VL_OUT8(&io_read_1_bits,7,0);
    VL_IN8(&io_read_2_ready,0,0);
    VL_OUT8(&io_read_2_valid,0,0);
    VL_OUT8(&io_read_2_bits,7,0);
    VL_IN8(&io_read_3_ready,0,0);
    VL_OUT8(&io_read_3_valid,0,0);
    VL_OUT8(&io_read_3_bits,7,0);
    VL_IN8(&io_write_0,7,0);
    VL_IN8(&io_write_1,7,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vram_32x8___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vram_32x8(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vram_32x8(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vram_32x8();
  private:
    VL_UNCOPYABLE(Vram_32x8);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
