/* Aula 07 / Atividade 3
 Ache o primeiro número, entre 1 e 1 milhão que é divisível por 11, por 13 e por 17 
dê o resto da divisão nulo.
*/

#include <stdio.h>

int main(void)
{
    int i = 1;
    
    while(i <= 1000000)
    {
        if (i % 11 == 0 && i % 13 == 0 && i % 17 == 0){
            printf("%d\n", i);
            break;
        }
        i++;
    }

    return 0;
}