#include <stdio.h>

int main() {
    int n,  a1,  r, termoAtual, soma = 0;

    printf("Digite o número de termos: ");
    scanf("%d", &n);
    printf("Digite o primeiro termo (a1): ");
    scanf("%d", &a1);
    printf("Digite a razão (r): ");
    scanf("%d", &r);

    printf("\nOs %d termos da PA são:\n", n);

    termoAtual = a1;

  
    for (int i = 0; i < n; i++) {
        printf("%d ", termoAtual);
        soma += termoAtual;     
        termoAtual += r;           
    }

    printf("\n\nA soma de todos os termos da PA é: %d\n", soma);

    return 0;
}