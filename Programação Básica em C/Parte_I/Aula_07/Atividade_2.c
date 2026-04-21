/* Aula 07 / Atividade 2
 Escreva um programa que pergunte um número ao usuário e mostre sua tabuada 
completa de 1 a 10.
*/

#include <stdio.h>

int main(void)
{
    int i, number, multi;

    do
    {
        printf("Insira um numero para descobrir sua tabuada de 1 a 10. (Insira 0 para finalizar o programa)\n... ");
        scanf("%d", &number);
        
        if (number == 0)
            break;

        i = 1;
        while (i <=10)
        {
            multi = number * i;
            printf("%d x %d = %d\n", number, i, multi);
            i++;
        }
    } while (number != 0);

    return 0;

}