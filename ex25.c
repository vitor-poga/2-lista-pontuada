#include <stdio.h>

int main() {
    int codigo, contador_produtos = 0;
    double preco_custo, preco_novo, soma_custo = 0.0, soma_novo = 0.0;

    printf("Cálculo de Aumento de Preços\n");

    while (1) {
        printf("\n--- Novo Produto ---\n");
        printf("Digite o código do produto: ");
        scanf("%d", &codigo);

        if (codigo < 0) {
            printf("\nCódigo negativo detectado. Encerrando a entrada de dados...\n");
            break;
        }

        printf("Digite o preço de custo: R$ ");
        scanf("%lf", &preco_custo);

        preco_novo = preco_custo * 1.20;

        printf("-> Produto Código %d | Preço Novo: R$ %.2f\n", codigo, preco_novo);

        contador_produtos++;
        soma_custo += preco_custo;
        soma_novo += preco_novo;
    }

    printf("\n========================================\n");
    printf("--- Relatório Final ---\n");
    printf("========================================\n");

    if (contador_produtos > 0) {
        printf("Total de produtos processados: %d\n", contador_produtos);
        printf("Média dos preços sem aumento: R$ %.2f\n", soma_custo / contador_produtos);
        printf("Média dos preços com aumento: R$ %.2f\n", soma_novo / contador_produtos);
    } else {
        printf("Nenhum produto foi processado.\n");
    }

    return 0;
}