#include <stdio.h>

int main() {
    int n;
    long long h;

    printf("Digite o número de termos (n) para a soma H: ");
    scanf("%d", &n);

    if (n > 0) {
        h = (long long)n * 10;
        printf("O resultado de H é: %lld\n", h);
    } else {
        printf("O valor de n deve ser positivo.\n");
    }

    return 0;
}