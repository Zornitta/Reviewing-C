/* Aula 15 / Atividade 3
 Crie uma função dobrar que dobra o valor original de uma variável usando ponteiro — sem retorno (void).
*/

#include <stdio.h>

void double_float(float *a)
{    
    *a *= 2;   
}

int main(void)
{
    float x;

    scanf("%f", &x);

    double_float(&x);

    printf("\n%.2f", x);

    return 0;
}