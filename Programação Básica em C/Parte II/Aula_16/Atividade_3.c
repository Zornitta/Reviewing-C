/* Aula 16 / Atividade 3
 Crie uma função approved que recebe um struct Student e retorna 1
  se a nota for >= 7, ou 0 caso contrário. Depois imprima a situação
  de cada aluno da turma
*/

#include <stdio.h>

struct Student{
    char name[50];
    int age;
    float score;
};

int is_aproved(struct Student s)
{
    return s.score >= 7;
}

int main(void)
{
    struct Student medium_class[20];
    int size = sizeof(medium_class) / sizeof(medium_class[0]);

    for (int i = 0; i < size; i++)
    {
        printf("\n\n-Cadastro aluno %d-", i + 1);
        printf("\nNome:\n... ");
        scanf("%s", medium_class[i].name);
        printf("\nIdade:\n... ");
        scanf("%d", &medium_class[i].age);
        printf("\nNota:\n... ");
        scanf("%f", &medium_class[i].score);
    }
    printf("\n");

    for (int i = 0; i < size; i++)
    {
        printf("\n-Aluno %d-", i + 1);
        printf("\nNome: %s", medium_class[i].name);
        printf("\nIdade: %d", medium_class[i].age);
        printf("\nNota: %.2f", medium_class[i].score);
        if (is_aproved(medium_class[i]))
            printf("\nAprovado: Sim\n");
        else
            printf("\nAprovado: Nao\n");
    }

    return 0;
}