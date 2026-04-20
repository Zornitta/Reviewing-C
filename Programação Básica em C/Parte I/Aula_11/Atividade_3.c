/* Aula 11 / Atividade 3
 Entrar  com  valores  para  a  matriz  A[3][4]. Gerar e imprimir uma matriz B com o triplo da matriz A.
*/

#include <stdio.h>

int main(void)
{
    float matriz[3][4] = {0};

    //Leitura da Matriz
    printf("\nInforme os valores da matriz:\n");    
    for (int i = 0; i < 3; i++)
    {
        for ( int j = 0; j < 4; j++)
        {
            printf("\n[%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);

            matriz[i][j] = matriz[i][j] * 3; 
        }
    }
    
    //Matriz B igual..
    printf("\nA matriz B eh igual a:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%.2f    ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}