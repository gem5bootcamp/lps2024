#include <gem5/m5ops.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <omp.h>

#define ARRAY_SIZE 1000
#define NUM_ITERATIONS 1000

int main() {
    unsigned long long i, j;
    unsigned long long sum = 0;
    unsigned long long *array = (unsigned long long *)malloc(ARRAY_SIZE * sizeof(unsigned long long));

    for (i = 0; i < ARRAY_SIZE; i++) {
        array[i] = i * i;
    }

    printf("Running with %d threads\n", omp_get_max_threads());

    m5_work_begin(0, 0);
    for (j = 0; j < ARRAY_SIZE; j++) {
        #pragma omp parallel for reduction(+:sum)
        for (i = 0; i < NUM_ITERATIONS; i++) {
            sum += array[j];
        }
    }
    m5_work_end(0, 0);

    printf("Sum: %llu\n", sum);

    free(array);

    return 0;
}
