#include <stdio.h>

int main() {
    int m;

    while (1) {
        printf("\nDigite um valor para M (inteiro e positivo, ou <= 0 para sair): ");
        scanf("%d", &m);

        if (m <= 0) {
            printf("Encerrando o programa.\n");
            break;
        }

        if (m % 2 == 0) {
            int contador_divisores = 0;
            for (int i = 1; i <= m; i++) {
                if (m % i == 0) {
                    contador_divisores++;
                }
            }
            printf("O número %d é PAR e possui %d divisores.\n", m, contador_divisores);
        }
        else {
            if (m < 10) {
                long long fatorial = 1;
                for (int i = 1; i <= m; i++) {
                    fatorial *= i;
                }
                printf("O número %d é ÍMPAR e MENOR que 10. Seu fatorial é: %lld\n", m, fatorial);
            }
            else {
                long long soma = 0;
                for (int i = 1; i <= m; i++) {
                    soma += i;
                }
                printf("O número %d é ÍMPAR e MAIOR OU IGUAL a 10. A soma de 1 até %d é: %lld\n", m, m, soma);
            }
        }
    }

    return 0;
}