#include <stdio.h>

int main() {
    int i;

    printf("Números ímpares entre 100 e 200:\n");

    for (i = 101; i < 200; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}   