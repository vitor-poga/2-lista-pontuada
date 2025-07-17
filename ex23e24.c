#include <stdio.h>

int main() {
    int idade, maior_idade = 0, qtd_mulheres_especificas = 0, total_habitantes = 0;
    char sexo, olhos, cabelos;

  
    while (1) {
        printf("\n--- Registro de Novo Habitante ---\n");
        printf("Digite a idade (-1 para encerrar): ");
        scanf("%d", &idade);

        if (idade == -1) {
            printf("\nIdade -1 detectada. Encerrando a coleta de dados...\n");
            break;
        }

        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);

        printf("Cor dos olhos (A-azuis, V-verdes, C-castanhos): ");
        scanf(" %c", &olhos);

        printf("Cor dos cabelos (L-louros, C-castanhos, P-pretos): ");
        scanf(" %c", &cabelos);

        total_habitantes++;

        if (idade > maior_idade) {
            maior_idade = idade;
        }

        if ((sexo == 'F' || sexo == 'f') &&
            (idade >= 18 && idade <= 35) &&
            (olhos == 'V' || olhos == 'v') &&
            (cabelos == 'L' || cabelos == 'l'))
        {
            qtd_mulheres_especificas++;
        }
    }

    printf("\n========================================\n");
    printf("--- Resultados Finais da Pesquisa ---\n");
    printf("========================================\n");

    if (total_habitantes > 0) {
        printf("Maior idade dos habitantes: %d\n", maior_idade);
        printf("Quantidade de indivíduos do sexo feminino cuja idade está entre 18 e 35 anos, com olhos verdes e cabelos louros: %d\n", qtd_mulheres_especificas);
    } else {
        printf("Nenhum dado de habitante foi inserido.\n");
    }

    return 0;
}