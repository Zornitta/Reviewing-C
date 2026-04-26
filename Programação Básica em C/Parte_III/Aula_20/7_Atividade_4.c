// Aula 20 / Atividade 4

#include <stdio.h>

void allocate_buffer(int *buffer, int *size, int *capacity)
{
    if (*buffer == NULL)
    {
        printf("\nMemoria Insuficiente!");
        return;
    }

    if (*size == *capacity)
    {
        *capacity = *capacity * 2;
    }

    
}

int main(void)
{
    int *buffer = malloc(2 * sizeof(int));
    int size = 0;
    int capacity = 2;

    allocate_buffer(buffer, size, capacity);
    free(buffer);

    return 0;
}