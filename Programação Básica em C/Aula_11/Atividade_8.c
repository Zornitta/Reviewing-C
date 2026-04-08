/* Aula 11 / Atividade 8
 Criar um algoritmo que leia os elementos de uma matriz 5x5 e escreva somente 
os elementos acima da diagonal principa.
*/

#include <stdio.h>

int main(void)
{
    float matrix[5][5] = {0};

    //Leitura matriz
    printf("\nInsira os valores da matriz:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("\n[%d][%d]: ", i, j);
            scanf("%f", &matrix[i][j]);
        }
    }

    //Representação da matriz
    printf("\n\nSua matriz inserida eh essa:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%.2f    ", matrix[i][j]);
        }
        printf("\n");
    }

    //Retorno valores da diagonal acima
    printf("\nValores acima da diagonal:");
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            printf("%.2f    ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}