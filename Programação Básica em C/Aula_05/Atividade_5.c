/* Aula 05 / Atividade 5
 Criar um algoritmo que entre com cinco números e imprimir o quadrado de cada 
número. 
*/

#include <stdio.h>
#include <conio.h>

int main(void)
{
    float result, numbers[5];

    for (int i = 0; i < 5; i++)
    {
        printf("\nInsira um numero:\n...");
        scanf("%f", &numbers[i]);
    }

    printf("\nO quadrado dos numeros eh:");
    for (int i =0; i < 5; i++)
    {
        result = 0;
        result = numbers[i] * numbers[i];
        printf("\n%.2f", result);
    }
    getch();

    return 0;
}