/* Aula 06 / Atividade 5
 Criar um algoritmo que calcule o fatorial de um número informado pelo usuário. 
*/

#include <stdio.h>

#define ERRO_0 printf("\nERRO: Numero invalido!");

int main(void)
{
    int number;
    unsigned long long total = 1;

    printf("\nInsira um numero para calcular seu fatorial:\n... ");
    scanf("%d", &number);

    if (number < 1 || number > 19){
        ERRO_0;
        return 0;
    }

    for (int i = number; i >= 1 ; i--)
    {   
        total *= i;  
    }
    
    printf("\nO resultado eh: %d", total);

    return 0;
}