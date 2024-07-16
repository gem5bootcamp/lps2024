// DO NOT EDIT
// This file was automatically generated from an ISA description:
//   riscv/isa/main.isa


#include <cfenv>
#include <cmath>
#include <limits>
#include <string>

/* riscv softfloat library */
#include <internals.h>
#include <softfloat.h>
#include <specialize.h>

#include "arch/riscv/decoder.hh"
#include "arch/riscv/faults.hh"
#include "arch/riscv/mmu.hh"
#include "arch/riscv/regs/float.hh"
#include "base/cprintf.hh"
#include "base/loader/symtab.hh"
#include "cpu/thread_context.hh"
#include "mem/packet.hh"
#include "mem/request.hh"
#include "sim/full_system.hh"

namespace gem5::RiscvISAInst
{
using namespace RiscvISA;
} // namespace gem5::RiscvISAInst
