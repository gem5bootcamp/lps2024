CC=gcc
GEM5_PATH=/workspaces/2024/gem5

all: simple_workload

simple_workload: simple_workload.c
	$(CC) -o simple_workload simple_workload.c \
	-static -fopenmp \
	-I$(GEM5_PATH)/include \
	-L$(GEM5_PATH)/util/m5/build/x86/out \
	-lm5

clean:
	rm -f simple_workload

