/* Aula 09 / Atividade 5
 Ler um vetor de 10 posições e trocar o primeiro pelo último e assim por diante.
*/

#include <stdio.h>
#include <conio.h>

int main(void)
{
    int numbers[10], temp;

    for (int i = 0; i < 10; i++)
    {
        printf("\nInsira um valor da posicao %d:\n... ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        temp = numbers[i];
        numbers[i] = numbers[9 - i];
        numbers[9 - i] = temp;
    }

    for(int i = 0; i < 10; i++)
    {
        printf("\n%d", numbers[i]);
    }
    getch();

    return 0;
}