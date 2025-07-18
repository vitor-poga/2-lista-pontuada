#include <stdio.h>

int main() {
    int matricula, i, nota_int;
    float nota_final;
    char conceito;

    printf("--- Lançamento de Conceitos para 75 Alunos ---\n");

    for (i = 1; i <= 75; i++) {
        printf("\n--- Aluno %d ---\n", i);
        printf("Número de matrícula: ");
        scanf("%d", &matricula);
        printf("Nota numérica final (0.0 a 10.0): ");
        scanf("%f", &nota_final);

        if (nota_final < 0.0 || nota_final > 10.0) {
            conceito = 'I'; // Conceito Inválido
        } else {
            nota_int = (int)nota_final;
            switch (nota_int) {
                case 10:
                case 9:
                    conceito = 'A';
                    break;
                case 8:
                case 7:
                    conceito = 'B';
                    break;
                case 6:
                case 5:
                    conceito = 'C';
                    break;
                default:
                    conceito = 'D';
                    break;
            }
        }
        printf("-> Matrícula: %d | Nota: %.1f | Conceito: %c\n", matricula, nota_final, conceito);
    }

    return 0;
}