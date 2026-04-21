/* Aula 08 / Atividade 1
 Ler vários números e informar quantos números entre 100 e 200 foram digitados. 
Quando o valor 0 for lido, o algoritmo deverá cessar sua execução.
*/

#include <stdio.h>

int main(void)
{
    int numbers[1000];
    int count = 0;
    int number;
    
    printf("Insira os numeros. (Caso deseje encerrar, insira 0)\n ");
    
    do
    {
        scanf("%d", &number);
        if (number >= 100 && number <=200 )
        {
            numbers[count] = number;
            count++;
        }
    }
    while (number != 0);

    for (int i = 0; i < count; i++)
    {
        printf("\n%d\n ", numbers[i]);
    }

    printf("\nNumero de numeros mostrados: %d", count);

    return 0;
    
}