/* Aula 14 / Atividade 6
 Criar uma função que receba um número inteiro como parâmetro e retorne 1 se sua 
raiz quadrada é exata e 0 em caso contrário.
*/

#include <stdio.h>
#include <math.h>

int exact_root(int n)
{
    if (n < 0) return 0;
    int root = (int)sqrt(n);
    return root * root == n;
}

int main(void)
{
    int number;

    printf("\nInsert number:\n... ");
    scanf("%d", &number);

    if (exact_root(number))
    {
        printf("\nYour square root is exact!");
    }
    else
    {
        printf("\nYour square root is not exact!");
    }

    return 0;
}