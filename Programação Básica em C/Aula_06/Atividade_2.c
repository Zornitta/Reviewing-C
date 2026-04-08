/* Aula 06 / Atividade 2
 Entrar com um número e informar se ele é divisível por 10, por 5, por 2 ou se não 
é divisível por nenhum destes.
*/

#include <stdio.h>
#include <stdbool.h>

#define EPSILON 1e-9

int main(void)
{
    float number;
    int printed = 0;

    printf("\nInsira um numero:");
    scanf("%f", &number);

    if (number == 0.0f)
    {
        printf("\nO numero eh zero.");
        return 0;
    }

    if( fabs(fmod(number, 2.0)) < EPSILON)
    {
        printf("\nO numero eh divisivel por 2.");
        printed = 1;
    }
    if( fabs(fmod(number, 5.0)) < EPSILON)
    {
        printf("\nO numero eh divisivel por 5.");
        printed = 1;
    }
    if ( fabs(fmod(number, 10.0)) < EPSILON)
    {
        printf("\nO numero eh divisivel por 10.");
        printed = 1;
    }
    if (!printed) {
        printf("\nO numero nao eh divisivel por 2, 5 e 10.");
    }

    return 0;
}
