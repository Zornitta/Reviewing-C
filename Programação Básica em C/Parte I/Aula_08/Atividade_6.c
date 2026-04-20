/* Aula 08 / Atividade 6
 Criar um algoritmo que leia uma sequencia de números terminada por 0 e imprima 
o número que for múltiplo de sua posição na sequência. Exemplo: 
Valores lidos   3     7    8   16 
Posição         1     2    3   4 
Impressão       3     16   
*/

#include <stdio.h>

int main(void)
{
    int number = 1, position = 1;
    int numbers[50];
    int counter = 0;

    while (number != 0)
    {
        printf("\nInsira um numero (0 executa a funcao):\n... ");
        scanf("%d", &number);

        if (number == 0){
            break;
        }

        if (number % position == 0)
        {
            numbers[counter] = number;
            counter++;
        }
        position++; 
    }

    for (int i = 0; i < counter; i++)
    {
        printf("\nNumber: %d", numbers[i]);
    }

    return 0;
}

