#include <stdio.h>

int main() {
    int codigoAluno;
    float n1, n2, n3, media;
    float maiorNota, notaRestante1, notaRestante2;

    while (1) {
        printf("\nDigite o código do aluno (ou um número negativo para encerrar): ");
        scanf("%d", &codigoAluno);

        if (codigoAluno < 0) {
            printf("Encerrando o programa.\n");
            break;
        }

        printf("Digite a primeira nota: ");
        scanf("%f", &n1);
        printf("Digite a segunda nota: ");
        scanf("%f", &n2);
        printf("Digite a terceira nota: ");
        scanf("%f", &n3);

        if (n1 >= n2 && n1 >= n3) {
            maiorNota = n1;
            notaRestante2 = n3;
        } else if (n2 >= n1 && n2 >= n3) {
            maiorNota = n2;
            notaRestante1 = n1;
            notaRestante2 = n3;
        } else {
            maiorNota = n3;
            notaRestante1 = n1;
            notaRestante2 = n2;
        }


        media = (maiorNota * 4 + notaRestante1 * 3 + notaRestante2 * 3) / (4 + 3 + 3);

        printf("\nCódigo: %d\n", codigoAluno);
        printf("Notas: %.1f, %.1f, %.1f\n", n1, n2, n3);
        printf("Média: %.2f\n", media);

        if (media >= 5) {
            printf("Situação: APROVADO\n");
        } else {
            printf("Situação: REPROVADO\n");
        }
        printf("------------------------\n");
    }

    return 0;
}