/* Aula 13 / Atividade 4
 Escreva um programa que leia duas strings e as coloque na tela. Imprima também 
a segunda letra de cada string.
*/

#include <stdio.h>

int main(void)
{
    char word1[50], word2[50];

    printf("\nInsira a primeira palavra: ");
    scanf("%49s", word1);

    printf("\nInsira a segunda palavra: ");
    scanf("%49s", word2);

    if (word1[1] == 0 && word2[1] == 0)
    {
        printf("\nAs palavras inseridas foram:\n %s e %s (--X--)", word1, word2);
    }
    else if (word1[1] == 0 && word2[1] != 0)
    {
        printf("\nAs palavras inseridas foram:\n %s e %s (--, %c)", word1, word2, word2[1]);
    }
    else if (word1[1] != 0 && word2[1] == 0)
    {
        printf("\nAs palavras inseridas foram:\n %s e %s (%c, --)", word1, word2, word1[1]);
    }
    else 
    {
        printf("\nAs palavras inseridas foram:\n %s e %s (%c, %c)", word1, word2, word1[1], word2[1]);
    }

    return 0;
}