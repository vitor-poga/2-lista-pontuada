#include <stdio.h>

/*
7. Escreva um algoritmo que calcule a média aritmética das 3 notas dos alunos de uma classe.
 O algoritmo deverá ler,além das notas, o código do aluno e deverá ser encerrado quando o código for igual a zero. 
*/

int main(){

    int codigoAluno;
    float n1, n2, n3, media;

    while (codigoAluno != 0)
    {
        printf("Primeiramente informe o código do aluno que voce quer calcular a média, digite 0 caso você queira encerrar o programa: ");
        scanf("%d", &codigoAluno);
        if (codigoAluno > 0 )
        {
            printf("Digite a primeira nota do aluno %d: ", codigoAluno);
            scanf("%f", &n1);
            printf("Digite a segunda nota do aluno %d: ", codigoAluno);
            scanf("%f", &n2);
            printf("Digite a terceira nota do aluno %d: ", codigoAluno);
            scanf("%f", &n3);
            if (n1 >= 0 && n2 >= 0 && n3 >= 0 )
            {
                media = (n1 + n2 + n3)/3;

                printf("A média do aluno %d é: %.2f \n",codigoAluno,media);
                printf("===================================================================================\n");
            } else
            {
                printf("Nota invalida, impossivel calcular a media do aluno\n");
                printf("===================================================================================\n");

            }
        } else if (codigoAluno == 0)
        {
            printf("Encerrando programa...\n");
            
            } else
        {
            printf("Código Inválido\n"); 
            printf("===================================================================================\n");

        }
        
        
        
    }
    


    return 0;
}