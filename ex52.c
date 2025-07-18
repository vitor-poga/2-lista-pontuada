#include <stdio.h>

unsigned long long fatorial(int n) {
    unsigned long long fat = 1;
    int i;

    if (n < 0) {
        return 0;
    }
    for (i = 1; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

int main() {
    int n, p;
    unsigned long long arranjo, combinacao;
    unsigned long long fact_n, fact_p, fact_n_p;

    printf("Cálculo de Arranjo e Combinação A(n,p) e C(n,p)\n");
    printf("Digite o valor de N (total de elementos): ");
    scanf("%d", &n);
    printf("Digite o valor de p (elementos por subconjunto): ");
    scanf("%d", &p);

    if (n < 0 || p < 0 || p > n) {
        printf("Erro: N e p devem ser não-negativos, e N deve ser maior ou igual a p.\n");
        return 1;
    }

    fact_n = fatorial(n);
    fact_p = fatorial(p);
    fact_n_p = fatorial(n - p);

    if (fact_n_p == 0) {
        printf("Erro no cálculo do fatorial (denominador zero).\n");
        return 1;
    }

    arranjo = fact_n / fact_n_p;
    
    if (fact_p == 0 || fact_n_p == 0){
        printf("Erro no cálculo do fatorial (denominador zero).\n");
        return 1;
    }

    combinacao = fact_n / (fact_p * fact_n_p);

    printf("\nResultados:\n");
    printf("Arranjo de %d, %d a %d: %llu\n", n, p, p, arranjo);
    printf("Combinação de %d, %d a %d: %llu\n", n, p, p, combinacao);

    return 0;
}