/* Aula 09 / Atividade 6
 Elabore  um  algoritmo  que  leia,  some  e  imprima  o  resultado  da  soma  entre  dois 
vetores inteiros de 20 posições. 
*/

#include <stdio.h>
#include <conio.h>

int main(void)
{
    int first_array[20], second_array[20], result_array[20];

    printf("\nPrimeiro iremos inserir os valores da primeira array.\n");
    for(int i = 0; i < 20; i++)
    {
        printf("\nInsira o valor da posicao %d:\n... ", i + 1);
        scanf("%d", &first_array[i]);
    }

    printf("\nAgora iremos inserir os valores da segunda array e soma-los com a primeira.\n");
    for(int i = 0; i < 20; i++)
    {
        printf("\nInsira o valor da posicao %d:\n... ", i + 1);
        scanf("%d", &second_array[i]);
    }

    printf("\nResultados:");
    for (int i = 0; i < 20; i++)
    {
        result_array[i] = first_array[i] + second_array[i];
        printf("\n%d", result_array[i]);
    }
    getch();

    return 0;
}
