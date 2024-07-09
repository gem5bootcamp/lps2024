---
marp: true
paginate: true
theme: gem5
title: Running Things on gem5
author: "Maryam Babaie"
editor: "Jason Lowe-Power"
---

<!-- _class: title -->

## Running Things on gem5

---

## OOO Action Item

- Launch codespaces and run the following commands:
`cd gem5`
`scons build/X86/gem5.debug -j14`

---

## What we will cover

- Intro to syscall emulation mode
- The gem5-bridge utility and library
- Cross compiling
- Traffic generator

---

## Intro to Syscall Emulation Mode

---

## Previously on gem5: how to build & use

- Building with Scons:

`scons build/{ISA}/gem5.{variant} -j (cpus)`

- Once compiled, gem5 can then be run using:

`build/{ISA}/gem5.{variant} [gem5 options] {simulation script} [script options]`

- example:
'build/X86/gem5.fast --outdir=simple_out configs/learning_gem5/part1/simple.py --l1i_size=32kB​'

---

## What is Syscall Emulation?​

- Syscall Emulation (SE) mode does not model all the devices in a system.​
  - It focuses on simulating the CPU and memory system.​

- SE mode is much easier to configure.​

- However, SE only emulates Linux system calls, and only models user-mode code.​

---

## When to use/avoid Syscall Emulation?​

- If you do not need to model the OS, and you want extra performance,​ then you should use SE mode.

- However, if you need high fidelity modeling of the system, or if OS interactions like page table walks are important, then you should use FS mode.​

---

## The m5 Utility
<!-- Is m5 called gem5-bridge now? -->

---

## The m5 Utility API​

- “m5ops” are the special opcodes that can be used in m5 to issue special instructions.​
  - Usage: checkpointing, exiting simulation, etc.​

- The m5 utility is the API providing these functionalities/options.​

- Options include:​
  - exit (delay): Stop the simulation in delay nanoseconds.​
  - resetstats (delay, period): Reset simulation statistics in delay nanoseconds; repeat this every period nanoseconds.​
  - dumpstats (delay , period): Save simulation statistics to a file in delay nanoseconds; repeat this every period nanoseconds.​
  - dumpresetstats (delay ,period): same as dumpstats; resetstats;​
- Full list of options can be found here.​

---

## How to use the m5 utility?​

- It is best to insert the option(s) directly in the source code of the application.​

- m5ops.h header file has prototypes for all the functionalities/options must be included.​

- The application should be linked with the appropriate m5 & libm5.a files.​
  - m5: The command line utility
  - libm5.a: C library for the utility

---

## Building m5 and libm5

- The m5 utility is in “gem5/util/m5/” directory.​

- To build m5 and libm5.a, run the following command in the gem5/util/m5/ directory.​

`scons build/{TARGET_ISA}/out/m5​`

- Target ISA must be in lower case:​
  - x86​
  - arm
  - thumb
  - sparc
  - arm64
  - Riscv

- This will generate libm5.a and m5 binaries in the util/m5/build/{TARGET_ISA}/out/ directory.​

---

## Building m5 and libm5 (cont.)

- Note: if you are using a x86 system for other ISAs, you need to have the cross-compiler​
- Cross-compiler for each target ISA:​
  - arm : arm-linux-gnueabihf-gcc​
  - thumb : arm-linux-gnueabihf-gcc​
  - sparc : sparc64-linux-gnu-gcc​
  - arm64 : aarch64-linux-gnu-gcc​
  - riscv : riscv64-linux-gnu-gcc​

- See util/m5/README.md for more details

---

## Linking m5 to C/C++ code​

- After building the m5 and libm5.a as described, link them to your code:​

  1. Include gem5/m5ops.h in your source file(s).​

  2. Add gem5/include to your compiler’s include search path.​

  3. Add gem5/util/m5/build/{TARGET_ISA}/out to the linker search path.​

  4. Link against libm5.a.​

---

## Example 1: print in std out​

### Commands

<style scoped>
pre {
    width:45rem;
    margin:0
}
#code-block {
    display:flex;
    flex-direction:row
}
</style>


<div id=code-block>

```c++
#include <unistd.h>
#include "gem5/m5ops.h"

int main()
{
    m5_reset_stats(0, 0);
    write(1, "This will be output to standard out\n", 36);
    m5_exit(0);
    return 0;
}
```
<!-- The original has empty lines between each line in main.
Removed to save space in slides -->
<div>
<p>- Example 1 code: ​materials/using-gem5/03-running/example1/se_example.cpp</p>
<p>- Config file:​ materials/using-gem5/03-running/simple.py</p>
</div>

</div>

- Compile the code:​ `gcc materials/using-gem5/03-running/example1/se_example.cpp -o exampleBin​`
- Run workload: `./exampleBin​`
- Run gem5: `gem5-x86 materials/using-gem5/03-running/simple.py​`

---

## Example 1​

```c++
#include <unistd.h>
#include "gem5/m5ops.h"     //Include gem5/m5ops.h​

int main()
{
    m5_reset_stats(0, 0);   //Adding m5 util option​
    write(1, "This will be output to standard out\n", 36);
    m5_exit(0);             // Adding m5 util option​
    return 0;
}
```

---

## Example 1: building x86 m5 utility​

- `cd gem5/util/m5​`
- `scons build/x86/out/m5​`

---

## Example 1​

<style scoped>
#block{
    display:flex;
    flex-direction:row;
    font-size:1.4rem
}
.inner{
    flex:1
}
</style>
<div id=block>

<div class=inner>

```bash
gcc materials/using-gem5/03-running/example1/se_example.cpp -o exampleBin​

-I gem5/include/ ​

-lm5 ​

-Lgem5/util/m5/build/x86/out​

```

</div>

<div class=inner>

```bash


- Add gem5/include to your compilers include search path.

- Link against libm5.a.​

- Add gem5/util/m5/build/{TARGET_ISA}/out to the linker search path.​
```

</div>
</div>
