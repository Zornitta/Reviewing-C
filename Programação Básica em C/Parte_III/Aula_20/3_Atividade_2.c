/* Aula 19 / Atividade 2
 Função que aloca um Dish dinamicamente, preenche os três campos com qualquer valor, imprime e libera.
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct{
    char name[50];
    char description[100];
    float price;
} Dish;

void allocate_dish(void)
{
    Dish *new = malloc(sizeof(Dish));

    if (new == NULL)
    {
        printf("ERRO: Memoria Insuficiente!\n");
        return;
    }

    strcpy(new->name, "PEPERRONI");
    strcpy(new->description, "MT BOM");
    new->price = 120;

    printf("Nome: %s\n", new->name);
    printf("Descricao: %s\n", new->description);
    printf("Preco: %.2f\n", new->price);

    //LIBEREI AQUI, MAS SÓ PORQUÊ NÃO TEM ARRAY DE DISH COMO MENU PARA ARMAZENA-LA
    free(new);  
}

int main(void)
{
    allocate_dish();

    return 0;
}