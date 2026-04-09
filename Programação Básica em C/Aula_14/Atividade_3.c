/* Aula 14 / Atividade 3
 Criar um algoritmo que possa entrar com três números e, para cada um, imprimir o 
dobro.
*/

#include <stdio.h>

void double_three_numbers(float numbers[3])
{
    for (int i = 0; i < 3; i++)
    {
        printf("\n%.2f", numbers[i] * 2);
    }
}

int main(void)
{
    float numbers[3];

    for (int i = 0; i < 3; i++)
    {
        printf("\nInsira o valor do numero %d:\n... ", i + 1);
        scanf("%f", &numbers[i]);
    }

    double_three_numbers(numbers);

    return 0;
}