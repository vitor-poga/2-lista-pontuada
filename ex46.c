#include <stdio.h>

int main() {
    int idade, i, maior_idade = 0, qtd_mulheres_especificas = 0;
    char sexo, olhos, cabelos;

    printf("--- Leitura de Dados de 500 Pessoas ---\n");

    for (i = 1; i <= 500; i++) {
        printf("\n--- Pessoa %d ---\n", i);
        printf("Idade: ");
        scanf("%d", &idade);
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);
        printf("Cor dos olhos (A-azuis, V-verdes, C-castanhos): ");
        scanf(" %c", &olhos);
        printf("Cor dos cabelos (L-louros, C-castanhos, P-pretos): ");
        scanf(" %c", &cabelos);

        if (i == 1) {
            maior_idade = idade;
        } else {
            if (idade > maior_idade) {
                maior_idade = idade;
            }
        }

        if ((sexo == 'F' || sexo == 'f') &&
            (idade >= 18 && idade <= 35) &&
            (olhos == 'V' || olhos == 'v') &&
            (cabelos == 'L' || cabelos == 'l'))
        {
            qtd_mulheres_especificas++;
        }
    }

    printf("\n--- Resultados da Pesquisa ---\n");
    printf("Maior idade do grupo: %d\n", maior_idade);
    printf("Quantidade de indivíduos do sexo feminino, com idade entre 18 e 35, olhos verdes e cabelos louros: %d\n", qtd_mulheres_especificas);

    return 0;
}