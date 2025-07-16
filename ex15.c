#include <stdio.h>

int main() {
    int valor;
    int intervalo1 = 0; // intervalo 0 - 25
    int intervalo2 = 0; // intervalo 26 - 50
    int intervalo3 = 0; // intervalo 51 - 75
    int intervalo4 = 0; // intervalo 76 - 100

    printf("Digite números inteiros (um negativo para encerrar):\n");

    while (1) {
        scanf("%d", &valor);


        if (valor < 0) {
            break;
        }


        if (valor >= 0 && valor <= 25) {
            intervalo1++;
        } else if (valor >= 26 && valor <= 50) {
            intervalo2++;
        } else if (valor >= 51 && valor <= 75) {
            intervalo3++;
        } else if (valor >= 76 && valor <= 100) {
            intervalo4++;
        }

    }

    printf("\n RESULTADO DA CONTAGEM \n");
    printf("Valores no intervalo 0 - 25:   %d\n", intervalo1);
    printf("Valores no intervalo 26 - 50:  %d\n", intervalo2);
    printf("Valores no intervalo 51 - 75:  %d\n", intervalo3);
    printf("Valores no intervalo 76 - 100: %d\n", intervalo4);

    return 0;
}