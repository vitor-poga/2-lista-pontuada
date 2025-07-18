#include <stdio.h>

int main() {
    double inicio, fim;
    double ponto1, ponto2;
    double amplitude_total, amplitude_terco;

    printf("--- Divisão de Intervalo em 3 Partes ---\n");
    printf("Digite o valor de início do intervalo: ");
    scanf("%lf", &inicio);
    printf("Digite o valor de fim do intervalo: ");
    scanf("%lf", &fim);

    if (inicio >= fim) {
        printf("Erro: O início do intervalo deve ser menor que o fim.\n");
        return 1;
    }

    amplitude_total = fim - inicio;
    amplitude_terco = amplitude_total / 3.0;

    ponto1 = inicio + amplitude_terco;
    ponto2 = inicio + 2 * amplitude_terco;

    printf("\nO intervalo [%.2f, %.2f] dividido em 3 partes é:\n", inicio, fim);
    printf("Parte 1: [%.2f, %.2f]\n", inicio, ponto1);
    printf("Parte 2: [%.2f, %.2f]\n", ponto1, ponto2);
    printf("Parte 3: [%.2f, %.2f]\n", ponto2, fim);

    return 0;
}