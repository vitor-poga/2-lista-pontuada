#include <stdio.h>
/*
5. Construir um algoritmo que calcule a média aritmética de vários valores inteiros positivos, lidos externamente.
 O final da leitura acontecerá quando for lido um valor negativo
*/

int main (){
    int numeroInformado, numeroTotal = 0, contador = 0;
    float media;

    while (numeroInformado > 0)
    {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &numeroInformado);
        if (numeroInformado > 0)
        {
            
            numeroTotal = numeroTotal + numeroInformado;
            contador++;

        }
        
    }
    
    media = numeroTotal/contador;
    printf("A média aritmética dos números informados é %.1f", media );
    
    return 0;
}