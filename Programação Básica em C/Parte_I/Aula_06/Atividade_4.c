/* Aula 06 / Atividade 4
 Criar  um  algoritmo  que  leia  a  quantidade  de  números  que  se deseja  digitar  para 
que  possa  ser  impresso  o  maior  e  o  menor  número  digitados.  Não  suponha  que 
todos os números lidos serão positivos. 
*/

#include <stdio.h>

int main(void)
{
    int size;
    
    printf("\nInsira quantos numeros deseja ordenar:\n ");
    scanf("%d", &size);

    float numbers[size];
    
    for (int i = 0; i < size; i++)
    {
        printf("\nInsira um numero:\n ");
        scanf("%f", &numbers[i]);
    }

    float maior = numbers[0];
    float menor = numbers[0];

    for (int i = 0; i < size; i++)
    {
        if (numbers[i] > maior) maior = numbers[i];
        if (numbers[i] < menor) menor = numbers[i];
    }

    printf("\nO numero mais alto eh: %.2f", maior);
    printf("\nO numero mais baixo eh: %.2f", menor);

    return 0;
}