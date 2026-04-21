/* Aula 19 / Atividade 2
 Escreve uma função que recebe um array de inteiros e dois ponteiros
 int *maior e int *menor, e preenche eles com o maior e menor valor do array.
*/

#include <stdio.h>
#include <limits.h>

void extremes_array(int array[5], int *higher, int *lower)
{
    *higher = INT_MIN;
    *lower = INT_MAX;

    for (int i = 0; i < 5; i++)
    {
        if (array[i] < *lower)
        {
            *lower = array[i];
        }
        if(array[i] > *higher)
        {
            *higher = array[i];
        }
    }
}

int main(void)
{
    int array[5];
    int higher, lower;

    for (int i = 0; i < 5; i++)
    {
        printf("\nInsira o valor da posicao %d da array de inteiros:\n... ", i + 1);
        scanf("%d", &array[i]);
    }

    extremes_array(array, &higher, &lower);

    printf("\nMaior numero: %d", higher);
    printf("\nMenor numero: %d", lower);

    return 0;
}