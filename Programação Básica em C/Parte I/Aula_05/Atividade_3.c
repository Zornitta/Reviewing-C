/* Aula 05 / Atividade 3
 Dadas  às  idades  dos  pacientes  de  uma  clínica,  informe  a  idade  daquele  mais 
idoso. Considere que todas as idades são distintas e que o número de pacientes é 
informado pelo usuário, no momento da execução do programa. 
*/

#include <stdio.h>
#include <conio.h>

void bubble_sort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] < arr[j + 1]){
                temp    =   arr[j];
                arr[j]  =   arr[j + 1];
                arr[j + 1]  = temp;
            }
        }
    }
}

int main(void)
{
    int ages[4];
    int size = sizeof(ages) / sizeof(ages[0]);

    for (int i = 0; i < size; i++)
    {
        printf("\nInsira a idade do paciente %d:\n...", i + 1);
        scanf("%d", &ages[i]);
    }
    bubble_sort(ages, size);

    printf("\nO paciente mais idoso eh %d\n", ages[0]);
    getch();

    return 0;
}