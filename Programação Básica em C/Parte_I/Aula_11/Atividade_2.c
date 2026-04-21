/* Aula 11 / Atividade 2
 Crie  um  algoritmo  que  leia  os  elementos  de  uma  matriz 4x4 e escreva os 
elementos da diagonal principal.
*/

#include <stdio.h>

int main(void)
{
    float matrix[4][4] = {0};
    float main_diagonal[4] = {0};

    //Leitura da matriz
    printf("\nInsira os dados da matriz:\n");
    for(int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("\n[%d][%d]: ", i, j);
            scanf("%f", &matrix[i][j]);

            //Segregação da diagonal principal
            if (i == j)
            {
                main_diagonal[i] = matrix[i][j];
            }
        }
    }

    //Representação da matriz
    printf("\nEssa eh sua matriz:\n\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++) 
        {
            printf("%.2f    ", matrix[i][j]);
        }
        printf("\n");
    }

    //Diagonal Principal resultado
    printf("\nOs elementos da diagonal principal são:\n");
    for(int i = 0; i < 4; i++)
    {
        printf("\n%.2f", main_diagonal[i]);
    }

    return 0;
}