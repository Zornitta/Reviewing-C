/* Aula 13 / Atividade 5
 Faça um programa que leia o nome de 5 pessoas e mostre os nomes 
armazenados. Utilize vetores. 
*/

#include <stdio.h>

int main(void)
{
    char names[5][50];

    //Leitura dos nomes
    printf("\nInsira os nomes das pessoas:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%49s", names[i]);
    }

    //Entrega os nomes
    for (int i = 0; i < 5; i++)
    {
        printf("\n%s", names[i]);
    }

    return 0;
}