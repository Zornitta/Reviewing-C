/* Aula 08 / Atividade 5
 Em uma eleição presidencial existem quatro candidatos. Os votos são informados 
por código. Os dados utilizados para a escrutinagem obedecem à seguinte 
codificação: 
• 1, 2, 3, 4 = voto para os respectivos candidatos; 
• 5 = voto nulo; 
• 6 = voto em branco. 
Elabore um algoritmo que calcule e escreva: 
• O total de votos para cada candidato e seu percentual sobre o total; 
• O total de votos nulos e seu percentual sobre o total; 
• O total de votos brancos e seu percentual sobre o total; 
Como finalizador do conjunto de votos tem-se o valor 0.
*/

#include <stdio.h>

int main(void)
{
    int votes[6] = {0};
    int total = 0, vote = 1;
    float percentages[6];

    while (vote != 0){
    printf("\nEscolha seu candidato:\n\n1. Sargao da Acadia\n2. Kublai Khan\n3. Nero\n4. Pol Pot\n5. Voto Nulo\n6. Voto em Branco\n0. (Finalizar Votacao)\n\n... ");
    scanf("%d", &vote);

        switch (vote)
        {
        case 1:
        votes[0] ++;
        printf("\nVoto no Sargao da Acadia registrado!");
        break;

        case 2:
        votes[1] ++;
        printf("\nVoto no Kublai Khan registrado!");
        break;

        case 3:
        votes[2] ++;
        printf("\nVoto no Nero registrado!");
        break;

        case 4:
        votes[3] ++;
        printf("\nVoto no Pol Pot registrado!");
        break;

        case 5:
        votes[4] ++;
        printf("\nVoto Nulo registrado!");
        break;

        case 6:
        votes[5] ++;
        printf("\nVoto em Branco registrado!");
        break;

        case 0:
        break;

        default:
        printf("\nOpcao Invalido!");

        }
    }

    for (int i = 0; i < 6; i++){
        total += votes[i];
    }

    for (int i = 0; i < 6 ;i++)
    {
        percentages[i] = ((float)votes[i] / (float)total) * 100;
    }

    printf("\nTotal de votos:   %d", total);
    printf("\n\n%.2f%% - Sargao da Acadia recebeu: %d votos.", percentages[0] ,votes[0]);
    printf("\n%.2f%% - Kublai Khan recebeu: %d votos.", percentages[1] ,votes[1]);
    printf("\n%.2f%% - Nero recebeu: %d votos.", percentages[2],votes[2]);
    printf("\n%.2f%% - Pol Pot recebeu: %d votos.", percentages[3],votes[3]);
    printf("\n%.2f%% - Votos Nulos:  %d votos.", percentages[4],votes[4]);  
    printf("\n%.2f%% - Votos em Branco:  %d votos.\n", percentages[5],votes[5]);

    return 0;
}