/* Aula 03 / Atividade 2
 Dado o total de vendas de um vendedor, calcule a sua comissão. Suponha que a 
comissão do vendedor seja de 10% do total de vendas.
*/

#include <stdio.h>
#include <conio.h>

int main(void)
{
    float total_sells, commission;

    printf("\nGood Morning!\nInsert the total of sellings of the seller in U$:");
    scanf("%f", &total_sells);

    commission = total_sells*0.1;

    printf("\nHis commission is U$: %.2f!", commission);
    getch();

    return 0;
}