/* Aula 14 / Atividade 4
 Criar um algoritmo que leia dois valores e imprima o maior número, usando uma função 
do tipo void.
*/

#include <stdio.h>

void highest_number(void)
{
    float n1, n2;

    printf("\nInsira o primeiro valor:\n... ");
    scanf("%f", &n1);

    printf("\nInsira o segundo valor:\n... ");
    scanf("%f", &n2);

    if (n1 > n2)
    {
        printf("\nO maior numero eh: %.2f", n1);
    }
    else if (n1 < n2)
    {
        printf("\nO maior numero eh: %.2f", n2);
    }
    else
    {
        printf("\nOs dois numeros sao iguais.");
    }
}

int main(void)
{
    highest_number();

    return 0;
}