/* Aula 09 / Atividade 3
 Ler um vetor de 10 elementos e mostrar em ordem contrária
*/

#include <stdio.h>
#include <conio.h>

int main(void)
{
    int numbers[10];

    for (int i = 0; i < 10; i++)
    {
        printf("\nInsira o numero %d\n... ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (int i = 9; i >= 0; i--)
    {
        printf("\n%d", numbers[i]);
    }
    getch();

    return 0;
}