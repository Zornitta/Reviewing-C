/* Aula 17 / Atividade 2
 Crie uma função reajuste que recebe um ponteiro de Product e
 um percentual, e aplica o reajuste no preço diretamente na struct
*/

#include <stdio.h>
#include <string.h>

struct Product{
    char name[50];
    float price;
};

void price_adjustment(struct Product *p, float percentage)
{
    p->price *= (1 + percentage / 100);
}


int main(void)
{
    struct Product products[10];
    int size = sizeof(products) / sizeof(products[0]);

    for (int i = 0; i < size; i++)
    {
        printf("\n\n-Cadastro Produto %d", i + 1);
        printf("\nNome:\n... ");
        scanf(" ");
        fgets(products[i].name, 50, stdin);
        products[i].name[strcspn(products[i].name, "\n")] = 0;
        printf("\nPreco:\n... ");
        scanf("%f", &products[i].price);
    }

    for (int i = 0; i < size; i++)
    {
        float percentage = 0;
        printf("\n\nEscolha insira um percentual que deseja reajustar o preco: (100 = 100%% de acrescimo / -10 = 10%% de desconto)\n... ");
        scanf("%f", &percentage);
        if (percentage < -100)
        {
            percentage = -100;
            printf("\nPercentual limitado a -100%%!");
        }
        price_adjustment(&products[i], percentage);
    }

    for (int i = 0; i < size; i++)
    {
        printf("\n\nProduto %d", i + 1);
        printf("\nNome: %s", products[i].name);
        printf("\nPreco: %.2f", products[i].price);
    }

    return 0;
}
