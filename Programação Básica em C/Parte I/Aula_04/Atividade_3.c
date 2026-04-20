/* Aula 04 / Atividade 3
 Dada  a  idade  de  um  nadador,  informe  a  sua  categoria:  infantil  (até  10  anos), 
juvenil (até 17 anos) ou sênior (acima de 17 anos)
*/

#include <stdio.h>
#include <conio.h>

int main(void)
{
    int age;

    printf("\nInsert your age:\n...");
    scanf("%d", &age);
    
    if (age <= 0)
    {
        printf("\nInvalid age. Newborns and spirits can't enter the pool.");
    }
    else if (age <= 10)
    {
        printf("\nYour category is Infant!");
    }
    else if (age <= 17)
    {
        printf("\nYour category is Juvenil!");
    }
    else if (age < 120)
    {
        printf("\nYour category is Senior!");
    }
    else
    {
        printf("\nSee your daughter Sir, you made enough, keep it cool.");
    }
    getch();
    
    return 0;

}