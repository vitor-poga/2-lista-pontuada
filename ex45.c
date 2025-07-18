#include <stdio.h>

int main() {
    int sexo, idade, i;
    float altura;
    double soma_idade_grupo = 0.0, soma_altura_mulheres = 0.0, soma_idade_homens = 0.0;
    int contador_mulheres = 0, contador_homens = 0, contador_idade_18_35 = 0;

    printf("--- Leitura de Dados de 1000 Habitantes ---\n");

    for (i = 1; i <= 1000; i++) {
        printf("\n--- Habitante %d ---\n", i);
        printf("Sexo (0-Feminino, 1-Masculino): ");
        scanf("%d", &sexo);
        printf("Idade: ");
        scanf("%d", &idade);
        printf("Altura (m): ");
        scanf("%f", &altura);

        soma_idade_grupo += idade;

        if (idade >= 18 && idade <= 35) {
            contador_idade_18_35++;
        }

        if (sexo == 0) {
            soma_altura_mulheres += altura;
            contador_mulheres++;
        } else if (sexo == 1) {
            soma_idade_homens += idade;
            contador_homens++;
        }
    }

    printf("\n--- Resultados da Pesquisa ---\n");

    if (contador_mulheres + contador_homens > 0) {
        printf("a) Média da idade do grupo: %.2f anos\n", soma_idade_grupo / 1000.0);

        if (contador_mulheres > 0) {
            printf("b) Média da altura das mulheres: %.2f m\n", soma_altura_mulheres / contador_mulheres);
        } else {
            printf("b) Nenhuma mulher foi registrada.\n");
        }

        if (contador_homens > 0) {
            printf("c) Média da idade dos homens: %.2f anos\n", soma_idade_homens / contador_homens);
        } else {
            printf("c) Nenhum homem foi registrado.\n");
        }

        printf("d) Percentual de pessoas com idade entre 18 e 35 anos: %.2f%%\n", ((double)contador_idade_18_35 / 1000.0) * 100.0);
    } else {
        printf("Nenhum dado de habitante foi inserido.\n");
    }

    return 0;
}