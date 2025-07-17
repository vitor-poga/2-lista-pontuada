#include <stdio.h>

int main() {
    int n, i;
    double s = 0.0, termo;

    printf("Digite um valor para N (inteiro e positivo): ");
    scanf("%d", &n);

    if (n > 0) {
        printf("\n-- Termos Gerados --\n");

        for (i = 1; i <= n; i++) {
            termo = 1.0 / i;
            printf("1/%d = %f\n", i, termo);
            s += termo;
        }

        printf("\n-- Valor Final de S --\n");
        printf("S = %f\n", s);
        
    } else {
        printf("O valor de N deve ser positivo.\n");
    }

    return 0;
}