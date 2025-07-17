#include <stdio.h>

int main() {
    int codigo_aluno, altura, i;
    int aluno_mais_alto, altura_mais_alto;
    int aluno_mais_baixo, altura_mais_baixo;

    printf("--- Leitura de Altura de 5 Alunos ---\n");

    printf("\n--- Aluno 1 ---\n");
    printf("Número do aluno: ");
    scanf("%d", &codigo_aluno);
    printf("Altura (cm): ");
    scanf("%d", &altura);

    aluno_mais_alto = codigo_aluno;
    altura_mais_alto = altura;
    aluno_mais_baixo = codigo_aluno;
    altura_mais_baixo = altura;

    for (i = 2; i <= 5; i++) {
        printf("\n--- Aluno %d ---\n", i);
        printf("codigo do aluno: ");
        scanf("%d", &codigo_aluno);
        printf("Altura (cm): ");
        scanf("%d", &altura);

        if (altura > altura_mais_alto) {
            altura_mais_alto = altura;
            aluno_mais_alto = codigo_aluno;
        }
        if (altura < altura_mais_baixo) {
            altura_mais_baixo = altura;
            aluno_mais_baixo = codigo_aluno;
        }
    }

    printf("\n--- Resultados ---\n");
    printf("Aluno mais alto: número %d com %d cm\n", aluno_mais_alto, altura_mais_alto);
    printf("Aluno mais baixo: número %d com %d cm\n", aluno_mais_baixo, altura_mais_baixo);

    return 0;
}