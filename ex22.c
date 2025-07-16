#include <stdio.h>

int main() {
    int idade, total_habitantes = 0, maior_idade = -1, menor_idade = -1, mulheres_salario_ate_100 = 0;
    char sexo;
    float salario;
    double soma_salarios = 0.0;


    while (1) {
        printf("\n--- Registro de Novo Habitante ---\n");
        printf("Digite a idade: ");
        scanf("%d", &idade);

        if (idade < 0) {
            printf("\nIdade negativa. Encerrando...\n");
            break;
        }

        printf("Digite o sexo (M para Masculino, F para Feminino): ");
        scanf(" %c", &sexo);

        printf("Digite o salário: R$ ");
        scanf("%f", &salario);

        if (total_habitantes == 0) {
            maior_idade = idade;
            menor_idade = idade;
        }

        total_habitantes++;
        soma_salarios += salario;

        if (idade > maior_idade) {
            maior_idade = idade;
        }
        if (idade < menor_idade) {
            menor_idade = idade;
        }

        if ((sexo == 'F' || sexo == 'f') && salario <= 100.0) {
            mulheres_salario_ate_100++;
        }
    }

    printf("\n========================================\n");
    printf(" Resultados Finais da Pesquisa \n");
    printf("========================================\n");

    if (total_habitantes > 0) {
        printf("a) Média de salário do grupo: R$ %.2f\n", soma_salarios / total_habitantes);
        printf("b) Maior idade do grupo: %d anos\n", maior_idade);
        printf("   Menor idade do grupo: %d anos\n", menor_idade);
        printf("c) Quantidade de mulheres com salário até R$100,00: %d\n", mulheres_salario_ate_100);
    } else {
        printf("Nenhum dado de habitante foi inserido.\n");
    }

    return 0;
}