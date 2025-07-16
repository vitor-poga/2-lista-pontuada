#include <stdio.h>

int main(){

    int n;
    float E = 1, fatoracao = 1;

    printf("Digite aqui um numero inteiro positivo: ");
    scanf("%d", &n);
    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {

            fatoracao = fatoracao * i;

            E = E + (1/fatoracao);
            
        }
        
        printf("Seu valor E e: %f", E);

    } else {
        printf("Digite um valor valido");
    }
    

    

    return 0;
}
