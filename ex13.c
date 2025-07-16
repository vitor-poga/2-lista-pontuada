#include <stdio.h>

int main() {
    int n, valor;
    long long int fatorial;

    printf("Quantos números você deseja calcular o fatorial? ");
    scanf("%d", &n);

    printf("\nTabela de Valor e Fatorial\n");
   
    for (int i = 1; i <= n; i++) {
        printf("\nDigite o %dº valor: ", i);
        scanf("%d", &valor);

        fatorial = 1;

        if (valor < 0) {
            printf("Valor: %d | Fatorial: Nao existe para negativos\n", valor);
        } else {

            for (int j = 1; j <= valor; j++) {
                fatorial = fatorial * j;
            }
            printf("Valor: %d | Fatorial: %lld\n", valor, fatorial);
        }
    }

    return 0;
}