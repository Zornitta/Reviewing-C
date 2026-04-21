/* Aula 03 / Atividade 1
 Dado um número real, informe qual o seu dobro.
*/

#include <stdio.h>
#include <conio.h>

int main(void)
{
    float x, r;

    printf("Bem vindo ao D0brador de NumeR0 2.7.91.0!\n\nPor favor, insira um numero:");
    scanf("%f", &x);

    r =x*2;

    printf("O dobro do seu numero eh %.2f", r);
    getch();

    return 0;
}