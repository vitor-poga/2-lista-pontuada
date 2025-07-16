#include <stdio.h>

// 6. Em uma eleição presidencial existem quatro candidatos. Os votos são informados através de códigos. Os dadosutilizados para a contagem dos votos obedecem 
// à seguinte codificação:  
// - 1,2,3,4 = voto para os respectivos candidatos; 
// - 5 = voto nulo; 
// - 6 = voto em branco; 
// Elabore um algoritmo que leia o código do candidado em um voto. Calcule e escreva: - total de votos para cada candidato; 
// - total de votos nulos; 
// - total de votos em branco; 
// Como finalizador do conjunto de votos, tem-se o valor 0. 


int main(){

    int opcaoVoto, votosNero = 0, votosJulio = 0, votosAlexandre = 0, votosMarco = 0, votosNulo = 0, votosBranco = 0;

    while (opcaoVoto != 0)
    {

        printf("================================ SISTEMA ELEITORAL ================================\n");
        printf("Selecione uma das opções abaixo para contabilizar seu voto\n");
        printf("1 - Nero\n");
        printf("2 - Julio Cesar\n");
        printf("3 - Alexandre O Grande\n");
        printf("4 - Marco Aurelio\n");
        printf("5 - Voto Nulo\n");
        printf("6 - Voto em branco\n");
        printf("0 - Encerrar programa e computar os votos\n");
        printf("Digite aqui: ");
        scanf("%d", &opcaoVoto);
        printf("===================================================================================\n");

        if (opcaoVoto == 1)
        {
            votosNero++;
            printf("Voto computado!\n");
        } else if (opcaoVoto == 2)
        {
            votosJulio++;
            printf("Voto computado!\n");
        } else if (opcaoVoto == 3)
        {
            votosAlexandre++;
            printf("Voto computado!\n");
        } else if (opcaoVoto == 4)
        {
            votosMarco++;
            printf("Voto computado!\n");
        } else if (opcaoVoto == 5)
        {
            votosNulo++;
            printf("Voto computado!\n");
        } else if (opcaoVoto == 6)
        {
            votosBranco++;
            printf("Voto computado!\n");
        } else if (opcaoVoto == 0)
        {
            printf("Encerrando programa....\n");
            printf("Computando os votos....\n");
            printf("================================ TOTAL DE VOTOS ================================\n");
            printf("Nero: %d\n", votosNero);
            printf("Julio Cesar: %d\n", votosJulio);
            printf("Alexandre o Grande: %d\n", votosAlexandre);
            printf("Marco Aurelio: %d\n", votosMarco);
            printf("Nulo: %d\n", votosNulo);
            printf("Branco: %d\n", votosBranco);
            printf("===================================================================================\n");
            
        } else{
            printf("Opção Inválida\n"); 
        }

        // switch (opcaoVoto)
        // {
        // case 1 :
        //     printf("Nero");
        //     break;
        
        // default:
        //     break;
        // }

    }
    

    return 0;
}