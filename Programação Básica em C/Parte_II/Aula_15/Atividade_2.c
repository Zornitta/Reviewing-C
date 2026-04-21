/* Aula 15 / Atividade 2
 Crie uma função que troque o valor de duas variáveis usando
 ponteiros — sem usar uma terceira variável auxiliar.
*/

#include <stdio.h>

void change(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int x, y;

    scanf("%d", &x);
    scanf("%d", &y);

    printf("\nAntes:\nx = %d\ny = %d\n", x, y);

    int *ptr_x = &x;
    int *ptr_y = &y;

    change(ptr_x, ptr_y);

    printf("\nDepois:\nx = %d\ny = %d\n", x, y);

    return 0;
}