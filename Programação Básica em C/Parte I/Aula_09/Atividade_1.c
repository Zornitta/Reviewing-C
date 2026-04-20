/* Aula 09 / Atividade 1
 Faça um algoritmo que leia 10 elementos e mostre o maior elemento.
*/

#include <stdio.h>
#include <conio.h>

//Biblioteca que adiciona o INT_MIN e INT_MAX que são os limites de tamanho que o int pode guardar, sendo eles -2.147.483.648 e 2.147.483.648.
#include <limits.h>

int main(void)
{
    int numbers[10], major_number = INT_MIN;

    for (int i = 0; i < 10; i++)
    {
        printf("\nInsira o valor do numero %d:\n... ", i + 1);
        scanf("%d", &numbers[i]);

        if (numbers[i] > major_number)
        {
            major_number = numbers[i];
        }
    }

    printf("\nO maior numero inserido foi: %d", major_number);
    getch();

    return 0;
}