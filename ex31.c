#include <stdio.h>

int main() {
    int valor, i;
    int dentro_intervalo = 0;
    int fora_intervalo = 0;

    printf("Digite 10 valores:\n");

    for (i = 1; i <= 10; i++) {
        printf("Valor %d: ", i);
        scanf("%d", &valor);

        if (valor >= 10 && valor <= 20) {
            dentro_intervalo++;
        } else {
            fora_intervalo++;
        }
    }

    printf("\nResultados:\n");
    printf("Valores dentro do intervalo [10, 20]: %d\n", dentro_intervalo);
    printf("Valores fora do intervalo: %d\n", fora_intervalo);

    return 0;
}