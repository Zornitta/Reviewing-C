/* Aula 19 / Atividade 1
 Escreve uma função swap(int *a, int *b) que troca o valor de duas variáveis. Chama ela no main e imprime antes e depois.
*/

#include <stdio.h>


void swap_function(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int num1, num2;

    printf("\nInsira o valor da primeira variavel inteira:\n... ");
    scanf("%d", &num1);
    printf("\nInsira o valor da segunda variavel inteira:\n... ");
    scanf("%d", &num2);

    swap_function(&num1, &num2);
    
    printf("\nValor da primeira variavel inteira: %d", num1);
    printf("\nValor da segunda variavel inteira: %d", num2);

    return 0;
}