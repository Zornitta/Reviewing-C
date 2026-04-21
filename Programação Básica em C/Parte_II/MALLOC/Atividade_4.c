// Aula 19 / Atividade 4

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define MAX_DESCRIPTION_LENGTH 120

typedef struct{
    char name[MAX_NAME_LENGTH];
    char description[MAX_DESCRIPTION_LENGTH];
    float price;
} Dish;

Dish *Menu = NULL;
int total_dishes = 0;
int capacity = 0;

int add_dish(Dish **menu, int *size, int *cap, Dish new_dish)
{
    if (*size == *cap)
    {
        int new cap = (*cap == 0) ? 2 : (*cap * 2);
        Dish *temp = realloc(*menu, new_cap * sizeof(Dish));

        if (temp == NULL)
        {
            printf("Erro: Memoria Insuficiente!");
            return 1;
        }

        *menu = tmp;
        *cap = new_cap;
    }

    (*menu)[*size] = new_dish;
    (*size)++;
    return 0;
}

void free_menu(Dish **menu, int *size, int *cap)
{
    free(*menu);
    *menu = NULL;
    *size = 0;
    *cap = 0;
}

void register_dish(void)
{
    Dish d;

    printf("\n--- Cadastro de Prato ---\n");
    printf("Nome:\n... ");
    scanf(" ");
    fgets(d.name, 50, stdin);
}

int main(void)
{
    
}