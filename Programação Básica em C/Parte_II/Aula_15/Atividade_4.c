/* Aula 15 / Atividade 4
 Crie uma função soma que recebe três ponteiros e armazena o resultado no terceiro — sem retorno
*/

#include <stdio.h>

void sum_ptr(float *a, float *b, float *c)
{
    *c = *a + *b;
}

int main(void)
{
    float x, y, z = 0;

    scanf("%f", &x);
    scanf("%f", &y);

    sum_ptr(&x, &y, &z);

    printf("%.2f", z);

    return 0;
    
}