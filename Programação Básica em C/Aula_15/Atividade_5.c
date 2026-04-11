/* Aula 15 / Atividade 5
 Ponteiro com vetor — percorra um vetor usando aritmética de ponteiros em vez de índice.
*/

#include <stdio.h>

int main(void)
{
    int vector[6] = {0, 10, 20, 30, 40, 50}; 
    int *ptr = vector;

    for (int i = 0; i < 6 ; i++)
    {
        printf("%d\n", *(ptr + i));
    }

    return 0;
}