/* Aula 19 / Atividade 3
 Escreve uma função conta_vogais(char *s) que recebe uma string
 e retorna quantas vogais ela tem. No main, lê uma string do teclado
 e imprime o resultado.
 Duas regras:
 Considera vogais maiúsculas e minúsculas
 Percorre a string usando aritmética de ponteiros — sem []
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_vowels(char *ptr)
{
    int count = 0;
    char temp;

    while (*ptr != '\0')
    {
        temp = toupper(*ptr);
        if (temp == 'A' || temp == 'E' || temp == 'I' || temp == 'O' || temp == 'U')
        {
            count++;
        }
        ptr++;
    }
    return count;
}

int main(void)
{
    char string[20];

    printf("\nEscreva uma palavra:\n... ");
    fgets(string, 20, stdin);

    printf("\nTotal de vogais: %d", count_vowels(string));

}