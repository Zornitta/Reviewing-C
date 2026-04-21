/* Aula 05 / Atividade 4
 Dados um capital, uma taxa de juros mensal e um período em meses, informe o 
montante ao final de cada mês.
*/

// Minhas ressalvas: fiz para ele só operar com juros simples.

#include <stdio.h>
#include <conio.h>

int main(void)
{
    float capital, interest_rate, interest, total;
    int months;

    printf("\nInsira o capital inicial:\n...");
    scanf("%f", &capital);
    printf("\nInsira a taxa de juros anual:\n...");
    scanf("%f", &interest_rate);
    printf("\nInsira quantos meses o capital ficara empregado:\n...");
    scanf("%d", &months);

    total = capital;
    interest = capital * (interest_rate / 100 / 12);

    for (int i = 0; i < months; i++)
    {
        total += interest;
        printf("\nMontante mes %i:  %.2f", i + 1, total);
        getch();
    }
    getch();

    return 0;
}