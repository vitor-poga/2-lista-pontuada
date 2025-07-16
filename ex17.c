#include <stdio.h>

int main() {
    int m, n;
    long long soma;

    while (1) {
        printf("\nDigite um par de valores positivos (m n)\nOnde n é a quantidade de números que vão ser somados a partir de um número m\nExemplo: 2 3 . ( 0 ou um numero negativo para encerrar):\n");
        scanf("%d %d", &m, &n);

        if (m <= 0 || n <= 0) {
            printf("Encerrando o programa.\n");
            break;
        }

        soma = 0;

        for (int i = 0; i < n; i++) {
            soma += (m + i);
        }

        printf("A soma dos %d inteiros consecutivos a partir de %d é: %lld\n", n, m, soma);
    }

    return 0;
}