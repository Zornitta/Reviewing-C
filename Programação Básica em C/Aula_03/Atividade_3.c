/* Aula 03 / Atividade 3
 Dadas as medidas de uma sala em metros (comprimento e largura), informe a sua 
área em metros quadrados.
*/

#include <stdio.h>
#include <conio.h>

int main(void)
{
    float length, width, room_size;

    printf("\nGood Morning!\nInsert the length in meters of your room:");
    scanf("%f", &length);
    printf("\nNow insert your room's width in meters:");
    scanf("%f", &width);

    room_size = length*width;

    printf("\nYour room size is: %.2f square meters!", room_size);
    getch();

    return 0;
}