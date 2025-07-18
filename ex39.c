#include <stdio.h>

int main() {
    int perfeitos_encontrados = 0;
    long numero_atual = 1;
    long soma_divisores, i;

    printf("Os 5 primeiros números perfeitos são:\n");

    while (perfeitos_encontrados < 5) {
        soma_divisores = 0;

        for (i = 1; i <= numero_atual / 2; i++) {
            if (numero_atual % i == 0) {
                soma_divisores += i;
            }
        }

        if (soma_divisores == numero_atual && numero_atual != 0) {
            printf("%ld\n", numero_atual);
            perfeitos_encontrados++;
        }

        numero_atual++;
    }

    return 0;
}