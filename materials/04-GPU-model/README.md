## Note on running GPU FS

You need not use docker to run simulations in GPU FS mode. We will be simulating AMD's latest GPU, MI200, in FS mode

#If you haven't built m5ops yet, then

```sh
cd /workspaces/2024/gem5/util/m5
```
```sh
scons build/x86/out/m5
```

#To compile square for MI200

```sh
cd /workspaces/2024/gem5-resources/src/gpu/square
```
```sh
cp /workspaces/2024/materials/isca24/04-GPU-model/Makefile ./
```
```sh
make
```

#To run square in FS mode

```sh
cd /workspaces/2024
```
```sh
/usr/local/bin/gem5-vega gem5/configs/example/gpufs/mi200.py --kernel ./vmlinux-gpu-ml-isca --disk-image ./x86-ubuntu-gpu-ml-isca --app ./gem5-resources/src/gpu/square/bin/square --no-kvm-perf
```

#To create a checkpoint (assuming m5_checkpoint_addr() is already included in the application), we need to recompile square so that it creates a checkpoint

```sh
cp materials/2024/04-GPU-model/square-cpt/square.cpp gem5-resources/src/gpu/square/
```
```sh
cp materials/2024/04-GPU-model/mi300.py gem5/configs/example/gpufs/
```
```sh
cd gem5-resources/src/gpu/square
```
```sh
make clean && make
```

# To create checkpoint

```sh
cd /workspaces/2024
```
```sh
/usr/local/bin/gem5-vega gem5/configs/example/gpufs/mi200.py --kernel ./vmlinux-gpu-ml-isca --disk-image ./x86-ubuntu-gpu-ml-isca --app ./gem5-resources/src/gpu/square/bin/square --no-kvm-perf --checkpoint-dir ./gpuckpt
```

# To restore
```sh
/usr/local/bin/gem5-vega gem5/configs/example/gpufs/mi200.py --kernel ./vmlinux-gpu-ml-isca --disk-image ./x86-ubuntu-gpu-ml-isca --app ./gem5-resources/src/gpu/square/bin/square --no-kvm-perf --restore-dir ./gpuckpt
```

# PyTorch example
```sh
cd /workspaces/2024/
git clone https://github.com/abmerop/gem5-pytorch
/usr/local/bin/gem5-vega gem5/configs/example/gpufs/mi200.py --disk-image ./x86-ubuntu-gpu-ml-isca --kernel ./vmlinux-gpu-ml-isca --no-kvm-perf --app gem5-pytorch/pytorch_test.py
```
# util in gem5 -- for PyTorch example
```sh
cd gem5/util/term
make
```
# open new terminal
```sh
cd /workspaces/2024/gem5/
./util/term/m5term 7000
```
# run MNIST
```sh
/usr/local/bin/gem5-vega gem5/configs/example/gpufs/mi200.py --disk-image ./x86-ubuntu-gpu-ml-isca --kernel ./vmlinux-gpu-ml-isca --no-kvm-perf --app gem5-pytorch/MNIST/test_1batch/pytorch_qs_mnist.py
```

# NanoGPT
# adding files to disk image
```sh
mkdir mnt
mount -o loop,offset=$((2048*512)) ./x86-ubuntu-gpu-ml-isca mnt
cp -r gem5-pytorch/nanoGPT/nanoGPT-ff/ mnt/root/
umount mnt
/usr/local/bin/gem5-vega -d tutorial_nanogpt --debug-flags=GPUCommandProc gem5/configs/example/gpufs/mi200.py --disk-image ./x86-ubuntu-gpu-ml-isca --kernel ./vmlinux-gpu-ml-isca --app gem5-pytorch/nanoGPT/train-ff.sh --skip-until-gpu-kernel=8 --exit-after-gpu-kernel=9 --no-kvm-perf
```
