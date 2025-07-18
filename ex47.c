#include <stdio.h>

int main() {
    int i;
    char nome_cliente[100];
    double valor_compras, bonus;

    printf("--- Cálculo de Bônus para 150 Clientes ---\n");

    for (i = 1; i <= 150; i++) {
        printf("\n--- Cliente %d ---\n", i);
        printf("Nome do cliente (sem espaços): ");
        scanf("%99s", nome_cliente);
        printf("Valor das compras no ano passado: R$ ");
        scanf("%lf", &valor_compras);

        if (valor_compras < 500000.0) {
            bonus = valor_compras * 0.10;
        } else {
            bonus = valor_compras * 0.15;
        }

        printf("-> Cliente: %s | Bônus Especial: R$ %.2f\n", nome_cliente, bonus);
    }

    return 0;
}