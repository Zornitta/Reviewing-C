/* Aula 04 / Atividade 1
 Numa papelaria, até 100 folhas, a cópia custa R$0,25, acima de 100 folhas custa 
R$0,20. Dado o total de cópias, informe o total a ser pago.
*/

#include <stdio.h>
#include <conio.h>

int main(void)
{
    int pages;
    float total_price;

    printf("\nGood Morning Sir!\n How many pages do you want to print?\n...");
    scanf("%d", &pages);

    if(pages > 100)
    {
        total_price = pages*0.20;
        printf("\nThe total price is U$%.2f", total_price);
    } else if(pages > 0 && pages < 100)
    {
        total_price = pages*0.25;
        printf("\nThe total price is U$%.2f", total_price);
    } else {
        printf("\nInvalid Value!");
    }
    getch();

    return 0;
}