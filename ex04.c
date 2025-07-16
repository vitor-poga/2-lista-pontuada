#include <stdio.h>

int main(){

    int contador = 0;
    float alturaChico = 1.50, alturaZe = 1.10, crescimentoChico = 0.02, crescimentoZe = 0.03;

    while (alturaZe < alturaChico)
    {
        alturaChico = alturaChico + crescimentoChico;
        alturaZe = alturaZe + crescimentoZe;
        contador++;
    }
    printf("============================================================\n");
    printf("Para Zé ser maior que Chico levarão %d anos\n", contador);
    printf("A altura de Zé será: %.2f metros\n", alturaZe);
    printf("A altura de Chico será: %.2f metros\n", alturaChico);
    printf("============================================================\n");



    return 0;
}