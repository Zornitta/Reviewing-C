/* Aula 14 / Atividade 1
 Criar um algoritmo que leia e armazene os elementos de uma matriz M10x10 inteira e 
imprima a soma de todos os elementos das colunas pares. 
*/

#include <stdio.h>


//Função Leitura de matriz
void read_matrix10x10(int matrix[10][10])
{
    printf("\nPreencha a matriz 10x10 inteira:\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("\n[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

//Função Soma
int sum_pair_columns(int matrix[10][10])
{
    int pair_sum = 0;
    for (int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if (j % 2 == 0)
            {
                pair_sum += matrix[i][j];
            }
        }
    }
    
    return pair_sum;
}

int main(void)
{
    int matrix[10][10] = {0};
    read_matrix10x10(matrix);
    int result = sum_pair_columns(matrix);

    printf("\nA soma das colunas pares eh igual a: %d", result);

    return 0;
}