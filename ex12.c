#include <stdio.h>

int main() {
    int n;

    
    for (int i = 1; i <= 20; i++) {
        printf("\n----------------------------------------\n");
        printf("Digite o %dº valor para N: ", i);
        scanf("%d", &n);

        printf("Tabuada de 1 até %d\n", n);

        
        for (int j = 1; j <= n; j++) {
            printf("%d x %d = %d\n", j, n, j * n);
        }
    }

    return 0;
}