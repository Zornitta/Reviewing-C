/* Aula 03 / Atividade 4.
 Dada uma distância percorrida (em quilômetros), bem como o total de 
combustível gasto (em litros), informe o consumo médio do veículo.
*/

#include <stdio.h>
#include <conio.h>

int main(void)
{
    float distance, wasted_fuel, average_consumption;

    printf("\nGood Morning!\nInsert the traveled distance in kilometers:");
    scanf("%f", &distance);
    printf("\nInsert how many liters of fuel were wasted in the traveled distance:");
    scanf("%f", &wasted_fuel);

    average_consumption = wasted_fuel/distance;

    printf("\nYour vehicle average fuel consumption is: %.2f liters per kilometer!", average_consumption);
    getch();
    
    return 0;

}