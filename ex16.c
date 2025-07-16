#include <stdio.h>
#include <math.h>

int main() {
    int linhas_impressas = 0;
    double valor;
    double quadrado, cubo, raiz;

    while (1) {

        if (linhas_impressas % 20 == 0) {
            printf("=========================================================\n");
            printf("|  VALOR   |   QUADRADO   |      CUBO      |  RAIZ Q.   |\n");
            printf("=========================================================\n");
        }
        printf("-> ");
        scanf("%lf", &valor);

        if (valor < 0) {
            linhas_impressas++;
            break;
        }

        quadrado = valor * valor;
        cubo = pow(valor, 3);

        printf("| %.2f | %.2f | %.2f | ", valor, quadrado, cubo);

        if (valor >= 0) {
            raiz = sqrt(valor);
            printf("%.4f |\n", raiz);
        } else {
            printf("Não possui raiz quadrada |\n");
        }
        linhas_impressas++;

    }

    return 0;
}