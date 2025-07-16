#include <stdio.h>

int main() {
    int valor, totalValores = 0, positivos = 0, negativos = 0;
    double soma = 0, media, percentualPositivos, percentualNegativos;

    printf("Digite os valores (digite 0 para encerrar e ver os resultados):\n");

    while (1) {
        scanf("%d", &valor);

        if (valor == 0) {
            break;
        }

        soma += valor;
        totalValores++;

        if (valor > 0) {
            positivos++;
        } else {
            negativos++;
        }
    }

    printf("\n--- RESULTADOS ---\n");
    if (totalValores > 0) {
        media = soma / totalValores;
        percentualPositivos = ((double)positivos / totalValores) * 100.0;
        percentualNegativos = ((double)negativos / totalValores) * 100.0;

        printf("Média aritmética: %.2f\n", media);
        printf("Quantidade de valores positivos: %d\n", positivos);
        printf("Quantidade de valores negativos: %d\n", negativos);
        printf("Percentual de valores positivos: %.2f%%\n", percentualPositivos);
        printf("Percentual de valores negativos: %.2f%%\n", percentualNegativos);
    } else {
        printf("Nenhum valor foi inserido.\n");
    }

    return 0;
}