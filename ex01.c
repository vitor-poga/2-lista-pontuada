#include <stdio.h>

int main(){

    int a, contador = 0;

    for (int i = 0; i < 5; i++)
    {
        
        printf("Digite aqui um numero: ");
        scanf("%d", &a);

        if (a < 0)
        {
            contador++;
        }

    }
    
    printf("Foram digitados %d numeros negativos", contador);

    return 0 ;
}