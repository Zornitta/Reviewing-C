// Código passado pelo Claude para analíse de resultado

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DISH_NAME_LENGTH 50
#define DISH_DESCRIPTION_LENGTH 120

typedef struct {
    char name[DISH_NAME_LENGTH];
    char description[DISH_DESCRIPTION_LENGTH];
    float price;
} Dish;

// ao invés de Dish Menu[200] global:
Dish *Menu = NULL;
int total_dishes = 0;
int capacity = 0;

int add_dish(Dish **menu, int *size, int *cap, Dish new_dish)
{
    // precisa crescer?
    if (*size == *cap)
    {
        int new_cap = (*cap == 0) ? 2 : (*cap * 2);
        Dish *tmp = realloc(*menu, new_cap * sizeof(Dish));

        if (tmp == NULL)
        {
            printf("Erro: memoria insuficiente!\n");
            return 0;
        }

        *menu = tmp;
        *cap = new_cap;
    }

    (*menu)[*size] = new_dish;
    (*size)++;
    return 1;
}

void free_menu(Dish **menu, int *size, int *cap)
{
    free(*menu);
    *menu = NULL;
    *size = 0;
    *cap = 0;
}

int main(void)
{
    Dish d1 = {"MARGHERITA", "TOMATE E QUEIJO", 35.90};
    Dish d2 = {"PEPERRONI", "MT BOM", 49.90};
    Dish d3 = {"CALABRESA", "CLASSICA", 42.00};

    add_dish(&Menu, &total_dishes, &capacity, d1);
    add_dish(&Menu, &total_dishes, &capacity, d2);
    add_dish(&Menu, &total_dishes, &capacity, d3);

    printf("Pratos cadastrados: %d (capacity: %d)\n", total_dishes, capacity);

    for (int i = 0; i < total_dishes; i++)
        printf("%d. %s - R$%.2f\n", i + 1, Menu[i].name, Menu[i].price);

    free_menu(&Menu, &total_dishes, &capacity);
    return 0;
}