#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fatorial = 1;

    printf("Digite um número para calcular o seu fatorial: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Fatorial não é definido para números negativos.\n");
    } else {
        for (i = 1; i <= n; i++) {
            fatorial *= i;
        }
        printf("O fatorial de %d é: %llu\n", n, fatorial);
    }

    return 0;
}