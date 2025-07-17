#include <stdio.h>

int main() {
    int n, i, j;

    for (i = 1; i <= 20; i++) {
        printf("\n--- Leitura %d de 20 ---\n", i);
        printf("Digite um valor para N: ");
        scanf("%d", &n);

        printf("\nTabuada de %d:\n", n);
        for (j = 1; j <= n; j++) {
            printf("%d x %d = %d\n", j, n, j * n);
        }
    }

    return 0;
}