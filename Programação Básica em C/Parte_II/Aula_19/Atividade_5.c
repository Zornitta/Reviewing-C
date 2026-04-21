/* Aula 19 / Atividade 5
 Escreve uma função que recebe um int* apontando pro início de
 um array e o tamanho dele, e imprime cada elemento usando só
 aritmética de ponteiros — sem [] em nenhum momento.
*/

#include <stdio.h>


int print_array(int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\n%d", *(ptr + i));
    }
}

int main(void)
{
    int array[5] = {1,4,6,8,10};
    int size = sizeof(array) / sizeof(array[0]);

    print_array(array, size);

    return 0;
}