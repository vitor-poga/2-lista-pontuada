#include <stdio.h>

int main() {
    int valor;
    long long produtorio_pares = 1;
    int encontrou_par = 0;

    printf("Digite números inteiros e positivos (digite 0 para encerrar):\n");

    while (1) {
        scanf("%d", &valor);

        if (valor == 0) {
            break;
        }

        if (valor < 0) {
            printf("Número negativo (%d) ignorado.\n", valor);
            continue;
        }

        if (valor % 2 == 0) {
            produtorio_pares *= valor;
            encontrou_par = 1;
        }
    }

    printf("\n--- RESULTADO ---\n");
    if (encontrou_par) {
        printf("O produtório dos números pares positivos é: %lld\n", produtorio_pares);
    } else {
        printf("Nenhum número par positivo foi inserido.\n");
    }

    return 0;
}