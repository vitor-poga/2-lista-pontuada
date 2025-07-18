#include <stdio.h>

int main() {
    int i;
    float n1, n2, n3, media_ponderada;
    double soma_medias_turma = 0.0, media_geral;

    printf("--- Leitura de Notas de 50 Alunos ---\n");

    for (i = 1; i <= 50; i++) {
        printf("\n--- Aluno %d ---\n", i);
        printf("Digite a nota 1: ");
        scanf("%f", &n1);
        printf("Digite a nota 2: ");
        scanf("%f", &n2);
        printf("Digite a nota 3: ");
        scanf("%f", &n3);

        media_ponderada = (n1 * 2 + n2 * 4 + n3 * 3) / 10.0;
        soma_medias_turma += media_ponderada;

        printf("Média do aluno: %.2f - ", media_ponderada);

        if (media_ponderada >= 7.0) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
    }

    media_geral = soma_medias_turma / 50.0;

    printf("\n--- Média Geral da Turma ---\n");
    printf("A média geral da turma é: %.2f\n", media_geral);

    return 0;
}