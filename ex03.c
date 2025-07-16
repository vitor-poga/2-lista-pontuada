#include <stdio.h>

int main(){

    // a) média do salário da população; 
    // b) média do número de filhos; 
    // c) maior salário; 
    // d) percentual de pessoas com salário até R$100,00. 



    int filhosTotal = 0, filhosSoma, contador = 0;
    float salarioTotal = 0, salarioSoma, maiorSalario = 0, mediaFilhos, mediaSalario, salarioAte100;
    


    while (salarioSoma >= 0)
    {   
        printf("--------------------------------------------------------------------------\n");
        printf("Pesquisa da prefeitura, informe por favor o seu salário: R$ ");
        scanf("%f", &salarioSoma);
        printf("Informe o numero de filhos que voce tem: ");
        scanf("%d", &filhosSoma);

        if (salarioSoma >= 0 )
        {
            filhosTotal =+ filhosSoma;
            salarioTotal =+ salarioSoma;

            if (salarioSoma > maiorSalario)
            {
                maiorSalario = salarioSoma;
            }

            if (salarioSoma <= 100)
            {
                salarioAte100++;
            }

            printf("INFORMAÇÕES SALVAS COM SUCESSO!\n");
            printf("--------------------------------------------------------------------------\n");
            contador++;
        }
        
    }

    mediaFilhos = (float)filhosTotal/(float)contador;
    mediaSalario = salarioTotal/(float)contador;
    salarioAte100 = (salarioAte100/contador) * 100;

    printf("============================== RESULTADO DA PESQUISA ==============================\n");
    printf("Numero de pessoas contabilizadas: %d\n", contador);
    printf("Media salarial da populacao: %.2f\n", mediaSalario);
    printf("Media de filhos da populacao: %.2f\n", mediaFilhos);
    printf("Maior salario informado: %.2f\n", maiorSalario);
    printf("Percentual de pessoas com salário até R$100,00: %.0f\%\n", salarioAte100);
    
    return 0;
}