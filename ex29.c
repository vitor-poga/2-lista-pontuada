#include <stdio.h>

int main() {
    int i, contador = 0;
    long soma = 0;
    double media;

    for (i = 13; i <= 73; i++) {
        soma += i;
        contador++;
    }

    media = (double)soma / contador;

    printf("A média aritmética dos números entre 13 e 73 é: %.2f\n", media);

    return 0;
}