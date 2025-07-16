#include <stdio.h>

int main() {
    int valor;
    int maior, menor;

    printf("Digite o 1º valor: ");
    scanf("%d", &valor);

    maior = valor;
    menor = valor;

    for (int i = 2; i <= 50; i++) {
        printf("Digite o %dº valor: ", i);
        scanf("%d", &valor);

        if (valor > maior) {
            maior = valor;
        }

        if (valor < menor) {
            menor = valor;
        }
    }

    printf("\n----------------------------------------\n");
    printf("O maior valor digitado foi: %d\n", maior);
    printf("O menor valor digitado foi: %d\n", menor);

    return 0;
}