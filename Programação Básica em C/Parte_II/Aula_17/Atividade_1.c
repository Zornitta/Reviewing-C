/* Aula 17 / Atividade 1
 Crie uma struct Product com nome e preço, cadastre 3 produtos e liste todos
*/

#include <stdio.h>
#include <string.h>

struct Product{
    char name[50];
    float price;
};

int main(void)
{
    struct Product products[3];
    int size = sizeof(products) / sizeof(products[0]);
    
    //Ler
    for (int i = 0; i < size; i++)
    {
        printf("\n\n-Cadastre o produto %d-", i + 1);
        printf("\nNome:\n... ");
        scanf(" ");
        fgets(products[i].name, 50, stdin);
        /*Fiz os \n no começo dos printfs, caso meus \n fossem no final dos printfs não
        seria necessária essa linha de código de tratamento de string captada pelo fgets.*/
        products[i].name[strcspn(products[i].name, "\n")] = 0;
        printf("\nPreco:\n... ");
        scanf("%f", &products[i].price);
    }
    printf("\n");

    //Listar
    for(int i = 0; i < size; i++)
    {
        printf("\n\nProduto %d", i + 1);
        printf("\nNome: %s", products[i].name);
        printf("\nPreco: %.2f", products[i].price);
    }

    return 0;
}