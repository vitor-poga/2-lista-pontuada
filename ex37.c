#include <stdio.h>
#include <math.h>

int main() {
    int i;
    double x, termo;

    printf("Digite o valor de X: ");
    scanf("%lf", &x);

    if (x == 0) {
        printf("Erro: X não pode ser zero.\n");
        return 1;
    }

    printf("\nOs 20 primeiros termos da série 1/(X^i):\n");

    for (i = 1; i <= 20; i++) {
        termo = 1.0 / pow(x, i);
        printf("Termo %d: %e\n", i, termo);
    }

    return 0;
}