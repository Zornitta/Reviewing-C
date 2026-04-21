/*  Aula 16 / Atividade 2
 Vetor de 3 alunos — cadastre e liste todos usando um loop:
*/

#include <stdio.h>

struct Student{
    char name[50];
    int age;
    float score;
};

int main(void)
{
    struct Student little_class[3];
    int size = sizeof(little_class) / sizeof(little_class[0]);

    for (int i = 0; i < size; i++)
    {
        printf("\nCadastro do aluno %d:", i + 1);
        printf("\nInsira seu nome:\n... ");
        scanf("%s", little_class[i].name);
        printf("\nInsira sua idade:\n... ");
        scanf("%d", &little_class[i].age);
        printf("\nInsira sua nota:\n... ");
        scanf("%f", &little_class[i].score);
    }

    printf("\n");

    for (int i = 0; i < size; i++)
    {
        printf("\n-Aluno %d", i + 1);
        printf("\nNome: %s", little_class[i].name);
        printf("\nIdade: %d", little_class[i].age);
        printf("\nNota: %.2f\n", little_class[i].score);
    }

    return 0;
}