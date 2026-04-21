/* Aula 11 / Atividade 7
 Faça  um  programa  que  leia  uma  matriz  5x5.  Após  leia  um  valor  qualquer 
(informado pelo usuário) e conte quantas vezes este valor aparece na matriz.
*/

#include <stdio.h>

int main(void)
{
    float matrix[5][5] = {0};
    float comparison_number;
    int counter = 0;

    //Leitura matriz
    printf("\nInsira os valores da matriz:");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("\n[%d][%d]: ", i, j);
            scanf("%f", &matrix[i][j]);
        }
    }

    //Leitura valor de comparação
    printf("\n\nInsira o valor que sera contado na matriz:\n...");
    scanf("%f", &comparison_number);

    //Função para encontrar os numeros iguais
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (matrix[i][j] == comparison_number)
            {
                counter ++;
            }
        }
    }

    //Apresentação de usuário
    printf("\n\nO numero inserido foi encontrado %d vezes na matriz.", counter);

    return 0;
}