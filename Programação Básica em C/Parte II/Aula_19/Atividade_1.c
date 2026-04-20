// Aula 19 / Atividade 1

#include <stdio.h>
#include <stdlib.h>

void funcao_exemplo(void)
{
    int local = 42;
    printf("Stack - local (dentro da funcao): %p\n", (void*)&local);
}

int global = 100;

int main(void)
{
    //Variaveis na Stack
    int a = 1;
    int b = 2;
    int c = 3;


    //Variaveis na Heap
    int *h1 = malloc(sizeof(int));
    int *h2 = malloc(sizeof(int));
    int *h3 = malloc(sizeof(int));

    printf("---Global (segmento de dados) ---\n");
    printf("global: %p\n", (void*)&global);

    printf("\n--- Stack ---\n");
    printf("a: %p\n", (void*)&a);
    printf("b: %p\n", (void*)&b);
    printf("c: %p\n", (void*)&c);
    funcao_exemplo();

    printf("\n--- Heap ---\n");
    printf("h1: %p\n", (void*)h1);
    printf("h2: %p\n", (void*)h2);
    printf("h3: %p\n", (void*)h3);

    free(h1);
    free(h2);
    free(h3);

    return 0;
}

/* PERCEBA: A memória Stack (pilha) começa a armazenar nos endereços mais altos
   e cresce para baixo a cada novo dado empilhado.
   Enquanto isso, a memória Heap começa em endereços baixos e vai subindo,
   formando um "monte" jogando os dados um em cima do outro.

   Também perceba, convertendo os hexadecimais em decimais, que a distância
   entre um dado e outro na Stack é exatamente o tamanho do tipo armazenado —
   nesse caso 4 bytes por ser um int.
   Já na Heap, o espaço entre os blocos é de 16 bytes, porque o malloc precisa
   armazenar um cabeçalho com metadados do bloco, além de um padding para que
   o processador não precise ler o dado pela metade em duas operações separadas.

FIM */