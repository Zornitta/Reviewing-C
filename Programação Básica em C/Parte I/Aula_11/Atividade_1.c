/* Aula 11 / Atividade 1
 Elabore  um  algoritmo  que  leia  duas  matrizes,  A  e  B  do  tipo  (3x3)  e  calcule  em 
uma matriz R sua multiplicação.
*/

#include <stdio.h>
#include <conio.h>

int main(void)
{
    float matrix_A[3][3] = {0};
    float matrix_B[3][3] = {0};
    float matrix_R[3][3] = {0};

    //Matriz A, coleta
    printf("\nPrimeiramente vamos inserir os valores da matrix A:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\nInsira o valor do indice [%d,%d]:\n... ", i, j);
            scanf("%f", &matrix_A[i][j]);
        }
    }

    //Matriz B, coleta
    printf("\n\nAgora iremos inserir os valores da matrix B:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\nInsira o valor do indice [%d,%d]:\n... ", i, j);
            scanf("%f", &matrix_B[i][j]);
        }
    }
    
    //Função da Matriz R
    for(int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                matrix_R[i][j] += ( matrix_A[i][k] * matrix_B[k][j] ); 
            }
        }
    }

    //Matriz R, resultado
    printf("\n\nA matriz R eh igual a:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\n[%d][%d]: %.2f", i, j, matrix_R[i][j]);
        }
    }
    getch();

    return 0;
}