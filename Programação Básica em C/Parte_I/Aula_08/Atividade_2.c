/* Aula 08 / Atividade 2
 Entrar com a idade de várias pessoas e imprimir: 
• Total de pessoas com menos de 21 anos. 
• Total de pessoas com mais de 50 anos.
*/

#include <stdio.h>

int main(void)
{
    int age;
    int count_young = 0;
    int count_old = 0;

    do
    {
        
        printf("Insira a idade de uma pessoa. (Insira 0 para executar a funcao).\n ");
        scanf("%d", &age);

        if (age < 21 && age > 0)
        {
            count_young ++;
        }
        else if (age > 50)
        {
            count_old ++;
        }
    }
    while (age != 0);

    printf("\nPessoas com menos de 21 anos:     %d", count_young);
    printf("\nPessoas com mais de 50 anos:      %d", count_old);

    return 0;    
}