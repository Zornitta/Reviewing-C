/* Aula 13 / Atividade 3
 Ler  duas  palavras  e  compará-las.  O  programa  deve  informar  se  as  palavras  são 
iguais.
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char first_word[50];
    char second_word[50];

    printf("\nInsira a primeira palavra: ");
    scanf("%49s", first_word);

    printf("\nInsira a segunda palavra: ");
    scanf("%49s", second_word);

    if (strcmp(first_word, second_word) == 0)
    {
        printf("\nAs palavras sao iguais!");
    }
    else
    {
        printf("\nAs palavras sao diferentes!");
    }

    return 0;
}