#include <stdio.h>
#include <string.h>

int main() {
    int codigo_cidade, num_veiculos, num_acidentes, i;
    char estado[3];
    double indice_acidentes;

    double maior_indice, menor_indice;
    int cidade_maior_indice, cidade_menor_indice;

    double soma_veiculos_total = 0.0;
    double soma_acidentes_rs = 0.0;
    int contador_cidades_rs = 0;

    printf("--- Leitura de Dados de 200 Cidades ---\n");

    for (i = 1; i <= 200; i++) {
        printf("\n--- Cidade %d ---\n", i);
        printf("Código da cidade: ");
        scanf("%d", &codigo_cidade);
        printf("Estado (ex: RS, SC, SP): ");
        scanf("%s", estado);
        printf("Número de veículos de passeio: ");
        scanf("%d", &num_veiculos);
        printf("Número de acidentes com vítimas: ");
        scanf("%d", &num_acidentes);

        soma_veiculos_total += num_veiculos;

        if (num_veiculos > 0) {
            indice_acidentes = (double)num_acidentes / num_veiculos;
        } else {
            indice_acidentes = 0;
        }

        if (i == 1) {
            maior_indice = indice_acidentes;
            cidade_maior_indice = codigo_cidade;
            menor_indice = indice_acidentes;
            cidade_menor_indice = codigo_cidade;
        } else {
            if (indice_acidentes > maior_indice) {
                maior_indice = indice_acidentes;
                cidade_maior_indice = codigo_cidade;
            }
            if (indice_acidentes < menor_indice) {
                menor_indice = indice_acidentes;
                cidade_menor_indice = codigo_cidade;
            }
        }

        if (strcmp(estado, "RS") == 0) {
            soma_acidentes_rs += num_acidentes;
            contador_cidades_rs++;
        }
    }

    printf("\n--- Resultados Estatísticos ---\n");
    printf("a) Maior índice de acidentes: %.4f (Cidade: %d)\n", maior_indice, cidade_maior_indice);
    printf("   Menor índice de acidentes: %.4f (Cidade: %d)\n", menor_indice, cidade_menor_indice);
    printf("b) Média de veículos nas cidades brasileiras: %.2f\n", soma_veiculos_total / 200.0);

    if (contador_cidades_rs > 0) {
        printf("c) Média de acidentes com vítimas no RS: %.2f\n", soma_acidentes_rs / contador_cidades_rs);
    } else {
        printf("c) Nenhuma cidade do RS foi registrada.\n");
    }

    return 0;
}