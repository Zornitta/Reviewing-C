    /* Aula 11 / Atividade 4
    Fazer um algoritmo que leia uma matriz 5x5 com números inteiros, após troque 
    os elementos desta até obter a sua transposta (exemplo matriz m x n ficaria n x 
    m) e escreva a matriz obtida.
    */

#include <stdio.h>

int main(void)
{
    float matrix[5][5] = {0};

    //Leitura matriz
    printf("\nInsira os valores da matriz:\n");
    for (int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
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

    //Transposição da matriz
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            float temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    //Representação da matriz pós-função
    printf("\n\nMatriz apos a transposicao:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%.2f    ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    
    return 0;
}