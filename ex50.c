#include <stdio.h>

int main() {
    int x, y, i;
    long long resultado = 1;

    printf("Digite o valor da base (X): ");
    scanf("%d", &x);
    printf("Digite o valor do expoente (Y): ");
    scanf("%d", &y);

    if (y < 0) {
        printf("O expoente deve ser um valor positivo ou zero.\n");
    } else {
        for (i = 1; i <= y; i++) {
            resultado *= x;
        }
        printf("%d elevado a %d é: %lld\n", x, y, resultado);
    }

    return 0;
}