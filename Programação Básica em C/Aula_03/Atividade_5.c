/* Aula 03 / Atividade 5
 O  índice  de  massa  corpórea  (IMC)  de  uma  pessoa  é  igual  ao  seu  peso  (em 
quilogramas)  dividido  pelo  quadrado  de  sua  altura  (em  metros).  Dados  o  peso  e  a 
altura de uma pessoa, informe o valor de seu IMC.
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(void)
{
    float weight, height, IMC;

    printf("\nGood Morning\nInsert your weight in kilograms:");
    scanf("%f", &weight);
    printf("\nInsert your height in meters:");
    scanf("%f", &height);

    IMC = weight/pow(height,2);
    
    printf("\nYour IMC is equal to: %.2f", IMC);
    getch();

    return 0;
}