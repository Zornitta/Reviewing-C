/* Aula 07 / Atividade 1
 Utilizando  o  laço  while,  elabore  um  algoritmo  que  mostre  quais  números  são 
ímpares, quando se é percorrida a lista de 1 a 100.
*/

#include <stdio.h>
#include <conio.h>

int main(void)
{
    int i = 1;

    while (i<100)
    {
        printf("\n%d", i);
        i = i + 2;
    }
    getch();

    return 0;
}