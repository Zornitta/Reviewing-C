/* Aula 04 / Atividade 7
 Faça um algoritmo que leia três números e informe o maior deles. Considere que 
o usuário possa digitar números iguais, trate essa condição.
*/

#include <stdio.h>
#include <conio.h>

void bubble_sort(float arr[], int n)
{
    float temp;
    for (int i = 0; i < n; i++)
        for(int j = 0; j < n - 1 - i; j++)
            if (arr[j] > arr[j + 1]){
                temp        = arr[j];
                arr[j]      = arr[j + 1];
                arr[j + 1]  = temp;
            }
}

int main(void)
{
    float n[] = {0, 0, 0};
    int size = sizeof(n) / sizeof(n[0]);

    printf("\nInsert three numbers separated by Enters:\n");
    for (int i = 0; i < size; i++)
        scanf("%f", &n[i]);
        
    bubble_sort(n, size);

    printf("\nAscending Order:");
    for (int i = 0; i < size; i++)
        printf("\n%.0f", n[i]);
    printf("\n");
    getch();
        
    return 0;
}