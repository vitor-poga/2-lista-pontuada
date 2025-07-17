#include <stdio.h>

int main() {
    int valor, maior, menor, limite = 500;
    long long soma = 0;
    double media;

    printf("Digite %d valores inteiros e positivos:\n", limite);

    printf("Valor 1: ");
    scanf("%d", &valor);

    maior = valor;
    menor = valor;
    soma = valor;

    for ( int i = 2; i <= limite; i++) {
        printf("Valor %d: ", i);
        scanf("%d", &valor);

        if (valor > maior) {
            maior = valor;
        }
        if (valor < menor) {
            menor = valor;
        }
        soma += valor;
    }

    media = (double)soma / limite;

    printf("\n-- Resultados da Análise --\n");
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Média dos valores lidos: %.2f\n", media);

    return 0;
}