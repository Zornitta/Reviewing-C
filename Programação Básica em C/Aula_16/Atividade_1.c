    /*  Aula 16 / Atividade 1
    Crie uma struct Aluno com nome, idade e nota.
    Cadastre 1 aluno via scanf e imprima os dados.
    */

    #include <stdio.h>

    //Declarada fora da main pois pode ser usada em funções futuas
    struct Student{
            char name[50];
            int age;
            float score;
        };

    int main(void)
    {
        struct Student a1;
        struct Student *ptr_a1 = &a1;

        //Leitura
        printf("\nCadastre um aluno:");
        printf("\nInsira seu nome:\n... ");
        scanf("%s", ptr_a1->name);
        printf("\nInsira sua idade:\n... ");
        scanf("%d", &ptr_a1->age);
        printf("\nInsira sua nota:\n... ");
        scanf("%f", &ptr_a1->score);


        //Escrita
        printf("\n\n-Aluno\nNome: %s\nIdade: %d\nNota: %.2f\n", ptr_a1->name, ptr_a1->age, ptr_a1->score);

        return 0;
    }
