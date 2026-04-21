/* Aula 09 / Atividade 4
 Ler um vetor de 10 elementos que mostra primeiro os números pares e depois os 
números ímpares.
*/

#include <stdio.h>
#include <conio.h>

int main(void)
{
    int numbers[10], pares[10], impares[10];

    for (int i = 0; i < 10; i++)
    {
        printf("\nInsira um valor para o numero %d:\n... ", i + 1);
        scanf("%d", &numbers[i]);

    }

    for (int i = 0; i < 10; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            printf("\n%d", numbers[i]);
        }
    } 
    
    for (int i = 0; i < 10; i++)
    {
        if (numbers[i] % 2 != 0)
        {
            printf("\n%d", numbers[i]);
        }
    }
    getch();

    return 0;
}