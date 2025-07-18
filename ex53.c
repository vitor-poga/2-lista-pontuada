#include <stdio.h>
#include <math.h>

int main() {
    int primos_encontrados = 0;
    int numero_atual = 1;
    int i, e_primo;

    printf("Os 20 primeiros números primos são:\n");

    while (primos_encontrados < 20) {
        e_primo = 1;
        if (numero_atual <= 1) {
            e_primo = 0;
        } else {
            for (i = 2; i * i <= numero_atual; i++) {
                if (numero_atual % i == 0) {
                    e_primo = 0;
                    break;
                }
            }
        }

        if (e_primo) {
            printf("%d ", numero_atual);
            primos_encontrados++;
        }
        numero_atual++;
    }
    printf("\n");

    return 0;
}