/* Aula 09 / Atividade 2
 Faça um algoritmo que leia 10 elementos e mostre o menor elemento e a posição 
em que ele foi encontrado.
*/

#include <stdio.h>
#include <conio.h>

#include <limits.h>

int main(void)
{
    int numbers[10], position;
    int lowest_number = INT_MAX;
    
    for (int i = 0; i < 10; i++)
    {
        printf("\nInsira o valor do numero %d:\n... ", i + 1);
        scanf("%d", &numbers[i]);

        if (numbers[i] < lowest_number)
        {
            lowest_number = numbers[i];
            position = i;
        }
    }

    printf("\nO menor numero inserido foi %d na posicao %d de 10.", lowest_number, position + 1);
    getch();

    return 0;
}