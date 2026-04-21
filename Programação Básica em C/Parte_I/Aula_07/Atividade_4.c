/* Aula 07 / Atividade 4
 Construa  um  algoritmo  que  indique  quantos  dias  tem  em  um  mês.  Saiba  que  os 
meses  4,  6,  9  e  11  é  subtraído  1  dia  (pois  possuem  30  dias).  O  mês  2  devem  ser 
subtraídos 2 dias. Os demais meses possuem 31 dias.
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    int month;

    printf("Insert the number of the month to discover how many days it has.");
    scanf("%d", &month);

    if (month == 2)
    {
        printf("The month has 28 days.\n ");
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        printf("The month has 30 days.\n ");
    }
    else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        printf("The month has 31 days.\n ");
    } 
    else {
        printf("Invalid month!");
    }
    
    return 0;
}