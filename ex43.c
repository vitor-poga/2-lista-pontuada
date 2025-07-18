#include <stdio.h>

int main() {
    int i, j, k, temp;
    int valores[4];

    for (i = 1; i <= 5; i++) {
        printf("\n--- %dº Grupo de 4 Valores ---\n", i);
        printf("Digite os 4 valores: ");
        scanf("%d %d %d %d", &valores[0], &valores[1], &valores[2], &valores[3]);

        printf("Ordem lida: %d, %d, %d, %d\n", valores[0], valores[1], valores[2], valores[3]);

        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3 - j; k++) {
                if (valores[k] < valores[k + 1]) {
                    temp = valores[k];
                    valores[k] = valores[k + 1];
                    valores[k + 1] = temp;
                }
            }
        }

        printf("Ordem decrescente: %d, %d, %d, %d\n", valores[0], valores[1], valores[2], valores[3]);
    }

    return 0;
}