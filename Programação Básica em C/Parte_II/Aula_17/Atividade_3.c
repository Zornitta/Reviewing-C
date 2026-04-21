/* Aula 17 / Atividade 3
 Percorrer o vetor de produtos com aritmética de ponteiros e aplicar o reajuste em todos
*/

#include <stdio.h>
#include <string.h>


struct Product{
    char name[50];
    float price;
};


void full_adjustment(struct Product *p, int size, float percentage)
{
    for (int i = 0; i < size; i++)
    {
        (p + i)->price *= (1 + percentage / 100);
    }
}

int main(void)
{
    struct Product products[15];
    int size = sizeof(products) / sizeof(products[0]);
    float percentage = 0;

    for (int i = 0; i < size; i++)
    {
        printf("\n\n-Cadastro Produto %d-", i + 1);
        printf("\nNome:\n...");
        scanf(" ");
        fgets(products[i].name, 50, stdin);
        products[i].name[strcspn(products[i].name, "\n")] = 0;
        printf("\nPrice:\n...");
        scanf("%f", &products[i].price);
    }

    printf("\n\nInsira um valor que deseja reajustar o preço de todos os produtos: (100 = 100%% de acrescimo / -10 = 10%% de desconto)\n... ");
    scanf("%f", &percentage);
    if (percentage < -100)
    {
        percentage = -100;
    }
    full_adjustment(products, size, percentage);

    for (int i = 0; i < size; i++)
    {
        printf("\n\nNome: %s", products[i].name);
        printf("\nPrice: R$%.2f", products[i].price);
    }

    return 0;
}