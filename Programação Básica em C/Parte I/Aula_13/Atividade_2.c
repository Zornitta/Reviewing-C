/* Aula 13 / Atividade 2
 Escreva um programa que leia uma palavra qualquer e escreva como resultado a 
mesma em ordem inversa. 
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[50];
    int size;

    printf("\nInsira uma palavra para ver sua versao invertida: ");
    scanf("%49s", word);

    size = strlen(word);

    for (int i = 0; i < (size / 2); i++)
    {
            int temp = word[i];
            word[i] = word[size - 1 - i];
            word[size - 1 - i] = temp;
    }

    printf("%s", word);

    return 0;
}