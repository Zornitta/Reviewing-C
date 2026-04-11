/* Aula 15 / Atividade 1
 Declare dois inteiros com valores à sua escolha e imprima:

O valor de cada um
O endereço de cada um com %p

*/

#include <stdio.h>

int main(void)
{
    int x, y;

    scanf("%d", &x);
    scanf("%d", &y);

    printf("\n%d, %p", x, &x);
    printf("\n%d, %p", y, &y);

    return 0;
}