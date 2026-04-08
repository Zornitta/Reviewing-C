/* Aula 13 / Atividade 1
 Escreva um algoritmo que leia uma palavra qualquer e conte o número de vogais.
*/

#include <stdio.h>

//Permite o uso do to_upper para padronizar a string e a verificação se vogais não ter que se repetir com as em minusculo
#include <ctype.h>

//Permite a manipulação de strings
#include <string.h>

int main(void)
{
    char word[50];
    int vogal_number = 0;

    printf("\nInsira uma palavra: ");
    scanf("%99s", word);


    for (int i = 0; word[i] != 0; i++)
    {
        word[i] = toupper((unsigned char)word[i]);
        if (word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U')
        {
            vogal_number ++;
        }
    }

    printf("\nA palavra tem %d vogais.", vogal_number);

    return 0;
}