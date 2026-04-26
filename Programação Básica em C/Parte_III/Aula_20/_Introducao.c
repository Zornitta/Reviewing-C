
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct {
    char name[50];
    float grade;
} Student;

int main(void)
{
    int *ptr = malloc( 2 * sizeof(int));
    Student *original_ptr = malloc( 2 * sizeof(Student));
    Student *ptr_s = original_ptr;

    if (ptr_s == NULL || ptr == NULL)
    {
        return 1;
    }

    printf("\nInteiro:");
    for (int i = 0; i < 2; i++)
    {
        printf("\n%p", ptr);
        ptr++;
    }
    printf("\n\nStudent:");

    for (int i = 0; i < 2; i++)
    {
        printf("\n%p", ptr_s);
        ptr_s++;
    }

    size_t *header = (size_t*)original_ptr - 1;

    printf("\n\n--- Analise dos Metadados ---\n");
    printf("Endereco do cabecalho (original - 1 unidade): %p\n", (void*)header);
    printf("Distancia em bytes: %ld\n", (long)((uint8_t*)original_ptr - (uint8_t*)header));
    printf("Valor no cabecalho (Chunk Size): %zu\n", *header);

    free(ptr);
    free(ptr_s);
    free(original_ptr);

    return 0;
}

/*
Cabeçalho = 8852972 

Student 1 = 8852976
Student 2 = 8853032

diferença = 56 byte entre Students
diferença cabeçalho malloc e primeiro student = 4 byte

Student {
  char name[50]; = 50 byte
  float grade;   = 4 byte
} = faltou 2 bytes (padding para tornar divisível por 8)
*/