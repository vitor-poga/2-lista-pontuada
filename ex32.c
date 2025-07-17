#include <stdio.h>

int main() {
    int a, b, i, j;

    for (i = 1; i <= 5; i++) {
        printf("Digite o valor de A: ");
        scanf("%d", &a);
        printf("Digite o valor de B: ");
        scanf("%d", &b);

        if (a < 1 || b < 1 || a >= b) {
            printf("Entrada inválida. A e B devem ser positivos e A deve ser menor que B.\n");
            continue;
        }

        printf("Números pares entre %d e %d: ", a, b);
        for (j = a; j <= b; j++) {
            if (j % 2 == 0) {
                printf("%d ", j);
            }
        }
        printf("\n");
    }

    return 0;
}