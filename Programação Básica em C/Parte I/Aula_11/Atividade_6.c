/* Aula 11 / Atividade 6
 Implementar  um  algoritmo  para  multiplicar  uma  matriz  3x3  por  um  valor  N  e 
apresentar como resultado a nova matriz. 
*/

#include <stdio.h>

int main(void)
{
    float matrix[3][3] = {0};
    float multiplier;

    //Leitura da Matriz
    printf("\nInsira os valores da matriz:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\n[%d][%d]: ", i, j);
            scanf("%f", &matrix[i][j]);
        }
    }

    printf("\nInsira agora o numero pelo qual deseja multiplicar a matriz:\n");
    scanf("%f", &multiplier);

    //Representação da matriz:
    printf("\nSua matriz:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%.2f    ", matrix[i][j]);
        }
        printf("\n");
    }

    //Representação do multiplicador
    printf("\nMultiplicada por %.4f", multiplier);

    //Função
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrix[i][j] = matrix[i][j] * multiplier;
        }
    }

    //Representação pós-multiplicação
    printf("\n\nMatriz resultado:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%.2f    ", matrix[i][j]);
        }
        printf("\n");
    }    
    printf("\n");

    return 0;
}