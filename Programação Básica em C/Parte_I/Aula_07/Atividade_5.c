/* Aula 07 / Atividade 5
 Escreva um programa que peça um número ‘n’ ao usuário, e que gere um novo ‘n’ 
de acordo com as seguintes regras, usar comando while: 

a)  Se n é par, n=n/2 
b)  Se n é impar n=3*n+1 
c) Imprime n 
d)  O programa deve parar quando n for igual a 1 

*/

#include <stdio.h>

int main(void)
{
    int n;

    printf("Insert a number:\n... ");
    scanf("%d", &n);

    do
    {
        if (n % 2 == 0)
        {
            n = n / 2;
            printf("\n%d", n);
        } else {
            n = 3 * n + 1;
            printf("\n%d", n);
        }
    }
    while (n != 1);

    return 0;
}