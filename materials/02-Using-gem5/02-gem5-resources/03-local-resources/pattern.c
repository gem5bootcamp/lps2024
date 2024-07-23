#include <stdio.h>

int main() {
    printf("Hello, gem5!\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
