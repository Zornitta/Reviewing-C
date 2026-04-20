/* Aula 08 / Atividade 3
 Entrar  com  um  número  da  conta  e  o  saldo  de  várias  pessoas.  Imprimir  todas  as 
contas, os respectivos saldos e uma das mensagens: positivo ou negativo. Ao final, 
o  percentual  de  pessoas  com  saldo  negativo.  O  algoritmo  acaba  quando  se  digita 
um número negativo para a conta
*/

#include <stdio.h>

int main(void)
{
    int accounts[50];
    float balance[50];
    int negative_count = 0;
    int total = 0;
    float percentage;

    int temp = 1;

    do
    {

        printf("\nDeseja criar uma conta? Insira um numero de 6 digitos para ela: (Numeros negativos executam o relatorio).\n... ");
        scanf("%d", &temp);

        if (temp > 9999 || temp < 1000)
        {
            break;
        }
        else
        {
            accounts[total] = temp;
        }

        printf("\nInsira seu saldo:\n... ");
        scanf("%f", &balance[total]);

        if (balance[total] < 0)
        {
            negative_count ++;
        }

        total ++;
    }
    while (1);

    for (int i = 0; i < total; i++)
    {
        printf("\nConta: %d", accounts[i]);
        printf("\nSaldo: R$%.2f", balance[i]);
        if (balance[i] < 0)
        {
            printf("\nSaldo Negativo.\n");
        }
        else 
        {
            printf("\nSaldo Positivo.\n");
        }
    }

    if (total > 0){
    percentage = ((float)negative_count / (float)total) * 100;
    }
    else {
        percentage = 0;
    }
    printf("\n\nPorcentagem de contas com saldo negativo: %.2f%%", percentage);

    return 0;

}