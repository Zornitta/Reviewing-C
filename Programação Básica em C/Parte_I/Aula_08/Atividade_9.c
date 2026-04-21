/* Aula 08 / Atividade 9
 Um  determinado  material  radioativo  perde  metade  de  sua  massa  a  cada  50 
segundos.  Dada  a  massa  inicial,  em  gramas,  fazer  um  algoritmo  que  determine  o 
tempo necessário para que essa massa se torne menor do que 0,5 gramas. Escreva 
a massa inicial, a massa final e o tempo calculado em horas, minutos e segundos. 
*/

#include <stdio.h>

int main(void)
{
    float init_mass, final_mass;
    int time = 0;
    int hours = 0;
    int minutes = 0;
    int seconds = 0;

    printf("\nInsira a massa inicial do material radioativo em gramas:\n...");
    scanf("%f", &init_mass);

    if (init_mass <= 0.5)
    {
        printf ("\nValor invalido!");

        return 1;
    }
    else 
    {
       final_mass = init_mass;
       while (final_mass > 0.5)
       {
        final_mass /= 2;
        time += 50;
       }
    }

    hours    = time / 3600;
    minutes  = (time % 3600) / 60;
    seconds = time % 60;

    printf("\n\nA massa inicial de %.2f levaria %d horas, %d minutos e %d segundos para que ela se tornar %.2f.", init_mass, hours, minutes, seconds, final_mass);
    
    return 0;
}