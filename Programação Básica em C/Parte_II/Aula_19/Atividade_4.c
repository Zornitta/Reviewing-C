/* Aula 19 / Atividade 4
 Escreve uma função inverte(char *s) que inverte uma string no lugar, sem criar outra string.
*/

#include <stdio.h>
#include <string.h>

void invert_string(char *ptr)
{
    char *start = ptr;
    char *end = ptr;

    while (*end != '\0')
        end++;
    end--;

    while (start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
    
}

int main(void)
{
    char string[15];

    printf("\nEscreva uma palavra:\n... ");
    fgets(string, 15, stdin);

    invert_string(string);

    printf("\n\n%s", string);

    return 0;
}