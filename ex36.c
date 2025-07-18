#include <stdio.h>

int main() {
    int n, valor, i, j;
    long long fatorial;

    printf("Quantos valores devem ser lidos? ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("\nDigite o %dº valor: ", i);
        scanf("%d", &valor);

        if (valor < 0) {
            printf("Fatorial de %d: Indefinido para negativos\n", valor);
        } else {
            fatorial = 1;
            for (j = 1; j <= valor; j++) {
                fatorial *= j;
            }
            printf("Fatorial de %d: %lld\n", valor, fatorial);
        }
    }

    return 0;
}