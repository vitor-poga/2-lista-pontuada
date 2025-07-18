#include <stdio.h>

int main() {
    int n, m, i, j;
    long long somatorio, fatorial;

    printf("Quantos valores de M devem ser lidos? ");
    scanf("%d", &n);

    printf("\n--- Tabela de Resultados ---\n");

    for (i = 1; i <= n; i++) {
        printf("Digite o %dº valor para M: ", i);
        scanf("%d", &m);

        if (m < 0) {
            printf("M deve ser um valor inteiro e positivo.\n");
            continue;
        }

        somatorio = 0;
        fatorial = 1;

        for (j = 1; j <= m; j++) {
            somatorio += j;
            fatorial *= j;
        }

        printf("Valor M: %d | Somatório de 1 a M: %lld | Fatorial de M: %lld\n", m, somatorio, fatorial);
    }

    return 0;
}