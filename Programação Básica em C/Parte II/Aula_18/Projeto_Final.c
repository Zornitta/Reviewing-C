// Projeto Final - Lucas Zornitta

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

#define RESTAURANT_NAME "Pizzaria do Turco"
#define MAX_DISHES 200
#define MAX_REQUEST_ORDER 20
#define ORDER_NUMBER 0
#define DISH_NAME_LENGTH 50
#define DISH_DESCRIPTION_LENGTH 120

typedef struct {
    char name[DISH_NAME_LENGTH];
    char description[DISH_DESCRIPTION_LENGTH];
    float price;
} Dish;

typedef struct {
    int quantity;
    Dish items[MAX_REQUEST_ORDER];
} Order;

Dish Menu[MAX_DISHES];
Order Item[MAX_REQUEST_ORDER];
int total_dishes = 0;


void standardized_scanf(char *dest, char def[20])
{
    if (def == "DISH_NAME_LENGTH"){
        scanf(" ");
        fgets(dest, DISH_NAME_LENGTH, stdin);
        dest[strcspn(dest, "\n")] = 0;
        for (int i = 0; dest[i] != '\0'; i++)
        {
            dest[i] = toupper(dest[i]);
        }
    }
    else if (def == "DISH_DESCRIPTION_LENGTH") {
        scanf(" ");
        fgets(dest, DISH_DESCRIPTION_LENGTH, stdin);
        dest[strcspn(dest, "\n")] = 0;
        for (int i = 0; dest[i] != '\0'; i++)
        {
            dest[i] = toupper(dest[i]);
        }
    }
    else 
    {
        return;
    }
}

void register_dish(Dish *p)
{
    int amount;
    if (total_dishes >= MAX_DISHES)
    {
        printf("Numero maximo de pedidos cadastrados alcancado!\n");
        return;
    }
    printf("\nQuantos pratos deseja cadastrar?\n... ");
    scanf("%d", &amount);
    getchar();

    if (amount <= 0 || (amount + total_dishes) > MAX_DISHES )
    {
        printf("Quantidade invalida ou excede o limite de pratos!\n");
        return;
    }

    for (int i = 0; i < amount; i++)
    {
        int exist = 0;
        //Ponteiro auxiliar para o prato ATUAL
        Dish *current = &p[total_dishes];

        //Nome do prato
        printf("\nInsira o nome do prato %d:\n... ", i + 1);
        standardized_scanf(current->name, "DISH_NAME_LENGTH");
        
        for (int k = 0; k < total_dishes; k++)
        {
            if (strcmp(p[k].name, current->name) == 0)
            {
                exist = 1;
                break;
            }
        }

        if (exist) {
            printf("Error: O prato %s ja esta cadastrado!\n", current->name);
            printf("Por favor, tente um nome diferente\n");
            
            i--;
            continue;
        }

        //Descrição
        printf("\nInsira agora a descricao do prato %d:\n... ", i + 1);
        standardized_scanf(current->description, "DISH_DESCRIPTION_LENGTH");

        //Preço
        printf("\nInsira o valor do prato %d:\n...", i + 1);
        scanf("%f", &current->price);
        getchar();

        if (current->price < 0)
        {
            printf("\nValor negativo invalido. Valor = R$ 0,00.");
            current->price = 0;
        }
        total_dishes++;
    }
    printf("\nForam cadastrados %d pratos corretamente!\nExistem %d pratos cadastrados no sistema.\n", amount, total_dishes);
    return;
}


void remove_dish(Dish *p)
{
    char remove_name[DISH_NAME_LENGTH];
    int found = 0;

    printf("\nInsira o nome do prato que deseja apagar:\n... ");
    standardized_scanf(remove_name, "DISH_NAME_LENGTH");

    for (int i = 0; i < total_dishes; i++)
    {
        if (strcmp(p[i].name, remove_name) == 0)
        {
            found = 1;
            
            for (int j = i; j < total_dishes - 1; j++)
            {
                p[j] = p[j + 1];
            }

            total_dishes--;
            printf("\nPrato %s removido com sucesso!\n", remove_name);
            break;
        }
    }
}


void search_dish(Dish *p)
{
    char comparison_name[DISH_NAME_LENGTH];
    int found = 0;

    printf("\nInsira o nome do prato que deseja encontra:\n... ");
    standardized_scanf(comparison_name, "DISH_NAME_LENGTH");

    for (int i = 0; i < total_dishes; i++)
    {
        if (strcmp(p[i].name, comparison_name) == 0)
        {
            printf("\nItem Encontrado!");
            printf("\n-----------");
            printf("\nNome: %s", p[i].name);
            printf("\nDescricao: %s", p[i].description);
            printf("\nPrice: %.2f", p[i].price);
            found ++;
            break;
        }
    }
    
    if (!found){
        printf("\nNenhum prato cadastrado como %s!\n", comparison_name);
    }
    return;
}


void list_dishes(Dish *p)
{
    for (int i = 0; i < total_dishes; i++)
    {
        printf("\n-Prato %d \n", i + 1);
        printf("\nNome: %s", (p + i)->name);
        printf("\nDescricao: %s", (p + i)->description);
        printf("\nPreco: R$%.2f", (p + i)->price);
        printf("\n-------------");
    }
    printf("\nExistem cadastrados %d pratos.\n", total_dishes);
    return;
}


void order_dish(Dish *p, Order *r)
{
    char request_name[DISH_NAME_LENGTH];
    int found = 0;
    int option = 1;

    do {
        printf("\nQual o nome do prato que deseja?\n... ");
        standardized_scanf(request_name, "DISH_NAME_LENGTH");

        for (int i = 0; i < total_dishes; i++) {
            if (strcmp(p[i].name, request_name) == 0) {
                // Adiciona o prato ao pedido
                r->items[r->quantity] = p[i];
                r->quantity++;
                printf("Prato '%s' adicionado ao pedido!\n", p[i].name);
                found = 1;
                break;
            }
        }

        if (!found) {
            printf("\nErro: Prato não encontrado no cardapio!");
        }

        printf("\nDeseja adicionar outro prato ao pedido?\n1- Sim\n0-Nao\n... ");
        scanf("%d", &option);
        getchar();
        

    } while (option && r->quantity < MAX_REQUEST_ORDER);
}


int main(void)
{
    int choice;

    printf("Bom dia! Tudo bem? Seja bem vindo a %s!\n", RESTAURANT_NAME);
    do {
        printf("O que deseja?\n");
        printf("1 - Cadastrar um prato\n");
        printf("2 - Remover um prato\n");
        printf("3 - Pesquisar um prato\n");
        printf("4 - Listar os pratos\n");
        printf("5 - Pedir um prato\n");
        printf("0 - Finalizar programa\n\n... ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 0:
                break;
            
            case 1:
                register_dish(Menu);
                break;
            case 2:
                remove_dish(Menu);
                break;
            case 3:
                search_dish(Menu);
                break;
            case 4:
                list_dishes(Menu);
                break;
            case 5:
                order_dish(Menu, &Item[0]);
                break;
            default:
                printf("Numero inserido invalido!\n");
                break;
        }
    }
    while (choice != 0);

    return 0;
}