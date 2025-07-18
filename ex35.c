#include <stdio.h>

int main() {
    int sexo, i, contador_mulheres = 0;
    float altura, maior_altura, menor_altura;
    double soma_altura_turma = 0.0, soma_altura_mulheres = 0.0;

    printf("--- Leitura de dados de 50 pessoas ---\n");

    printf("\n--- Pessoa 1 ---\n");
    printf("Altura (m): ");
    scanf("%f", &altura);
    printf("Sexo (1-Masculino, 2-Feminino): ");
    scanf("%d", &sexo);

    maior_altura = altura;
    menor_altura = altura;
    soma_altura_turma = altura;

    if (sexo == 2) {
        soma_altura_mulheres = altura;
        contador_mulheres = 1;
    }

    for (i = 2; i <= 50; i++) {
        printf("\n--- Pessoa %d ---\n", i);
        printf("Altura (m): ");
        scanf("%f", &altura);
        printf("Sexo (1-Masculino, 2-Feminino): ");
        scanf("%d", &sexo);

        if (altura > maior_altura) {
            maior_altura = altura;
        }
        if (altura < menor_altura) {
            menor_altura = altura;
        }

        soma_altura_turma += altura;

        if (sexo == 2) {
            soma_altura_mulheres += altura;
            contador_mulheres++;
        }
    }

    printf("\n--- Resultados da Pesquisa ---\n");
    printf(" Maior altura da turma: %.2f m\n", maior_altura);
    printf(" Menor altura da turma: %.2f m\n", menor_altura);

    if (contador_mulheres > 0) {
        printf(" Média da altura das mulheres: %.2f m\n", soma_altura_mulheres / contador_mulheres);
    } else {
        printf(" Média da altura das mulheres: Nenhuma mulher foi registrada.\n");
    }

    printf(" Média da altura da turma: %.2f m\n", soma_altura_turma / 50.0);

    return 0;
}