/* Aula 04 / Atividade 2
 Numa  fábrica,  uma  máquina  precisa  de  manutenção  sempre  que  o  número  de 
peças defeituosas supera 10% da produção. Dados o total de peças produzidas e o 
total de peças defeituosas, informe se a máquina precisa de manutenção.
*/

#include <stdio.h>
#include <conio.h>

int main(void)
{
    int total_parts, broken_parts;
    float broken_percentage;

    printf("\nInsert the total of parts produced today:\n...");
    scanf("%d", &total_parts);
    
    printf("\nNow print the total of broken parts produced today:\n...");
    scanf("%d", &broken_parts);

    broken_percentage = ((float)broken_parts / total_parts) * 100;
    
    if (total_parts <= 0 || broken_parts < 0)
    {
        printf("\nInvalid values!");
    } else if (broken_parts > total_parts*0.1)
    {
        printf("\nThe machine needs repair. It's producing %.2f%% of broken parts!", broken_percentage);
    }
    else {

        printf("\nEverything is ok!\nThe machine is producing only %.2f%% of broken parts.", broken_percentage);

    }
    getch();

    return 0;
}