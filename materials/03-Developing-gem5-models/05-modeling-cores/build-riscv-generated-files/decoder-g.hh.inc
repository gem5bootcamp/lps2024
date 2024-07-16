// DO NOT EDIT
// This file was automatically generated from an ISA description:
//   riscv/isa/main.isa

#include "base/bitfield.hh"

#include <functional>
#include <iomanip>
#include <sstream>
#include <string>
#include <tuple>
#include <vector>

/* riscv softfloat library */
#include <internals.h>
#include <softfloat.h>
#include <specialize.h>

#include "arch/riscv/insts/amo.hh"
#include "arch/riscv/insts/bs.hh"
#include "arch/riscv/insts/compressed.hh"
#include "arch/riscv/insts/mem.hh"
#include "arch/riscv/insts/pseudo.hh"
#include "arch/riscv/insts/standard.hh"
#include "arch/riscv/insts/static_inst.hh"
#include "arch/riscv/insts/unknown.hh"
#include "arch/riscv/insts/vector.hh"
#include "arch/riscv/interrupts.hh"
#include "cpu/static_inst.hh"
#include "mem/packet.hh"
#include "mem/request.hh"

