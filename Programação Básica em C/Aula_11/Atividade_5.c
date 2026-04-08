/* Aula 11 / Atividade 5
 Faça  um  algoritmo  que  leia  duas  matrizes  inteiras  de  ordem  4  e  verifique  se  a 
soma dos elementos das diagonais principais são iguais.
*/

#include <stdio.h>

int main(void)
{
    int matrix_A[4][4] = {0}, matrix_B[4][4] = {0};
    int sum_diagonal_A = 0, sum_diagonal_B = 0;

    //Leitura matriz A
    printf("\nInsira a matriz A:");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("\n[%d][%d]: ", i, j);
            scanf("%d", &matrix_A[i][j]);

            //Soma Diagonal A
            if (i == j){
                sum_diagonal_A += matrix_A[i][j];
            }
        }
    }

    //Leitura matriz B
    printf("\n\nInsira a matriz B:");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("\n[%d][%d]: ", i, j);
            scanf("%d", &matrix_B[i][j]);
            
            //Soma Diagonal B
            if (i == j){
                sum_diagonal_B += matrix_B[i][j];
            }
        }
    }

    //Representação matriz A
    printf("\n\nSua matriz A:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d    ", matrix_A[i][j]);
        }
        printf("\n");
    }

    //Represetação matriz B
    printf("\n\nSua matriz B:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d    ", matrix_B[i][j]);
        }
        printf("\n");
    }

    //Comparação das matrizes
    if (sum_diagonal_A == sum_diagonal_B)
    {
        printf("\n\n\nA soma da diagonal principal da matriz A EH IGUAL a soma da diagonal principal da matriz B!");
    }
    else
    {
        printf("\n\n\nA soma da diagonal principal da matriz A NAO EH IGUAL a soma da diagonal principal da matriz B!");
    } 

    return 0;
}