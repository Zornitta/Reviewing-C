/* Aula 14 / Atividade 5
 Criar uma função que verifique se um número é primo. 
*/

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int number)
{
    if (number < 2) return false;

    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
            return false;
    }
    return true;
}

int main(void)
{
    int n;

    printf("\nInsira o numero:\n... ");
    scanf("%d", &n);

    if (isPrime(n))
        printf("\nO numero eh primo!");
    else
        printf("\nO numero nao eh primo!");

    return 0;
}