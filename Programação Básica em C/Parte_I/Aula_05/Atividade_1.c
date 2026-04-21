/* Aula 05 / Atividade 1
 Crie um algoritmo que imprima todos os números pares do intervalo 1-10. 
*/

#include <stdio.h>
#include <conio.h>

int main(void)
{
    for (int i = 1; i <= 10; i++)
    {
        if ((i % 2) == 0){
            printf("\nO numero %d eh par.", i);
        } else {
            printf("\nO numero %d nao eh par.", i);
        }
    }
    getch();

    return 0;
}