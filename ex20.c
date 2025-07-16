#include <stdio.h>

int main() {
    int valor;
    long soma_negativos = 0;

    printf("Digite números inteiros, serão somados apenas os núemros negativos (digite 0 para encerrar):\n");

    while (1) {
        scanf("%d", &valor);

        if (valor == 0) {
            break;
        }

        if (valor < 0) {
            soma_negativos += valor;
        }
    }

    printf("\nO somatório dos números negativos é: %ld\n", soma_negativos);

    return 0;
}