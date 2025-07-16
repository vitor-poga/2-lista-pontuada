#include <stdio.h>

int main(){

    int n = 1, nTotal = 0, contador = 0;
    float media;

    while (n != 0)
    {
        printf("Digite um número para ser calculado a média, ou digite 0 para encerrar o programa: ");
        scanf("%d", &n);

        if (n%2 == 0 && n != 0)
        {
            contador++;
            nTotal = nTotal + n;

        } else if (n == 0)
        {
            printf("Encerrando programa...\n");
            printf("Calculando a media...\n");
        }
        
    }
    media = nTotal/contador;
    printf("A média dos números digitados é: %.2f\nForam contabilizados apenas numeros pares", media);
    

    return 0;
}