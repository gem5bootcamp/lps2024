---
marp: true
paginate: true
theme: gem5
title: Accelerating gem5 simulations
---

<!-- _class: title -->

## Accelerating gem5 simulations

In this section, we will cover how to accelerate gem5 simulations using fast-forwarding and checkpointing.

---

## gem5 is sllooww

(Not our fault: It’s the natural of simulation)
<!-- class: center-image -->

![width:1000](08-accelerating-simulation-img/fig1.drawio.svg)

---

## Fortunately, there are some work arounds

### You don't need to simulate everything perfectly, or at all

<!-- class: center-image -->

![width:800](08-accelerating-simulation-img/fig2.drawio.svg)

---

## Simulations can always be made faster by simulating less

![width:720 bg](08-accelerating-simulation-img/fig3.png)

---

## This isn't always a bad thing... a lot of a simulation is not interesting to us

![width:990 bg](08-accelerating-simulation-img/fig4.png)

---

## Our goal is to just run the region of interest in detailed mode

### how do we get to the ROI fast?

- Using KVM to fast-forward
- Taking and restoring a checkpoint

---

## Fast-forwarding with KVM

- KVM: Kernel-based virtual machine
- Uses hardware virtualization extensions (e.g., nested page tables, vmexit, etc.)
- gem5 uses KVM as the “CPU model”, i.e., the code is actually executing on the host CPU
- It is fast!

### Things to be aware of when using KVM to fast forward

- **the guest ISA (the ISA that is simulating) must matches the host ISA**
- **the m5ops annotation must be address version**

---

## Address version m5ops annotation

The instruction version of the m5ops annotation we did in [03-running-in-gem5](03-running-in-gem5.md) will not work with KVM because the host does not recognize the m5ops instructions.
As shown in that session, the following error message will appear:
```console
illegal instruction (core dumped)
```

In order to use the address version of the m5ops, we need to open `/dev/mem` during the process and setup a "magic" address range for triggering the gem5 operations.

### Note

"magic" address for

X86 is `0XFFFF0000`
arm64 is `0x10010000`

---

## Hands-on Time!

### 01-annotate-this

Materials are under `materials/02-Using-gem5/08-accelerating-simulation/01-annotate-this`.
[01-annotate-this.cpp](../../materials/02-Using-gem5/08-accelerating-simulation/01-annotate-this/01-annotate-this.cpp) is the same workload we used in [03-running-in-gem5](03-running-in-gem5.md), but this time, we need to use the address version of m5ops to annotate it.

We first need to get the functions we need from the m5ops library.
```cpp
// Include the gem5 m5ops header file
#include <gem5/m5ops.h>
//
// Include the gem5 m5_mmap header file
#include <m5_mmap.h>
//
```
---

## 01-annotate-this

Then, we will need to input the "magic" address depending on the ISA.
Note that the default "magic" address is `0xFFFF0000`, which is the X86's "magic" address.
Therefore, if we do not do this step for this example, the address version of m5ops will still work, but it will not work if we are on an Arm machine.
```cpp
// Use the m5op_addr to input the "magic" address
    m5op_addr = 0XFFFF0000;
//
```
Next, we need to open /dev/mem/ and setup the address range for the m5ops.
Note that this step requires the process to have permission to access /dev/mem.
```cpp
// Use the map_m5_mem to map the "magic" address range to /dev/mem
    map_m5_mem();
//
```

---

## 01-annotate-this

Just like we did in [03-running-in-gem5](03-running-in-gem5.md), we want to use `m5_work_begin` and `m5_work_end` to mark the ROI. For address version m5ops, we need to add `_addr` behind the original function name.
Therefore, in here, we need to call `m5_work_begin_addr` and `m5_work_end_addr`.
```cpp
// Use the gem5 m5ops to annotate the start of the ROI
    m5_work_begin_addr(0, 0);
//
    write(1, "This will be output to standard out\n", 36);
// Use the gem5 m5ops to annotate the end of the ROI
    m5_work_end_addr(0, 0);
//
```
Lastly, we need to unmap the address range after everything is done.
```cpp
// Use unmap_m5_mem to unmap the "magic" address range
    unmap_m5_mem();
//

```
---

## 01-annotate-this

For the complier command, beside

1. Include **gem5/m5ops.h** in the workload's source file(s)
2. Add **gem5/include** to the compiler's include search path
3. Add **gem5/util/m5/build/{TARGET_ISA}/out** to the linker search path
4. Link against **libm5.a** with `-lm5`

We also need to

1. Add **gem5/util/m5/src** to the compiler's include search path\
2. Add `-no-pie` to not to make a position independent executable

For our [Makefile](../../materials/02-Using-gem5/08-accelerating-simulation/01-annotate-this/Makefile), we can have the following compiler command:
```Makefile
$(GXX) -o 01-annotate-this 01-annotate-this.cpp -no-pie \
  -I$(GEM5_PATH)/include \
  -L$(GEM5_PATH)/util/m5/build/$(ISA)/out \
  -I$(GEM5_PATH)/util/m5/src -lm5

```

---

## 01-annotate-this

Now, let's try running the compiled workload:
```bash
./01-annotate-this
```
We should now see without any errors
```console
This will be output to standard out
List of Files & Folders:
., 01-annotate-this.cpp, .., Makefile, 01-annotate-this,
```

---

## Hand-on Time!

### Let's use KVM to fast forward to the ROI

1. Setup a switchable processor to switch from the KVM CPU to O3 CPU after reaching
<!-- the example have them fill in the processor -->
2. Setup exit event handler to switch the cpu type when m5 workbegin is encountered
<!-- the example have them fill in the handler -->
<!-- also show them the default handler they might able to use -->
3. Let's boot it up!

<!-- give example here -->

---

## Checkpointing

- Saves the architectural state of the system
- Saves *some* microarchitectural state
- With some limitations, a checkpoint that is taken with one system configuration  can be restore with different system configurations
  - the number of core has to be the same
  - the size of the memory has to be the same
  - the workload and its dependencies (i.e. the disk image) have to be the same

<!-- example error if not the same -->

---

## Hand-on Time!

### Let's take a checkpoint at the beginning of the ROI!

<!--  -->

---

## Conclusion


---

## What if the ROI is large



