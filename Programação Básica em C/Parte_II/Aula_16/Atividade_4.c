/* Aula 16 / Atividade 4
 Crie uma função que recebe um ponteiro de Student e aplica um bônus na nota:
*/

#include <stdio.h>

struct Student{
    char name[50];
    int age;
    float score;
    float bonus_given;
    float final_score;
};

void score_bonus(struct Student *s, float value)
{
    s->final_score += value;
    if (s->final_score > 10)
    {
        s->final_score = 10;
    }
}

int main(void)
{
    struct Student giant_class[100];
    int size = sizeof(giant_class) / sizeof(giant_class[0]);

    for (int i = 0; i < size; i++)
    {
        printf("\n\nCadastro aluno %d", i + 1);
        printf("\nNome:\n... ");
        scanf("%s", giant_class[i].name);
        printf("\nIdade:\n... ");
        scanf("%d", &giant_class[i].age);
        printf("\nNota:\n... ");
        scanf("%f", &giant_class[i].score);
    }
    printf("\n");

    for (int i = 0; i < size; i++)
    {
        printf("\n\nHora de informar os bonus!");
        printf("Insira o bonus de nota bruto para o aluno %s. \n...", giant_class[i].name);
        scanf("%f", &giant_class[i].bonus_given);
        giant_class[i].final_score = giant_class[i].score;
        score_bonus(&giant_class[i], giant_class[i].bonus_given);
    }

    for (int i = 0; i < size; i++)
    {
        printf("\n-Aluno %d-", i + 1);
        printf("\nNome: %s", giant_class[i].name);
        printf("\nIdade: %d", giant_class[i].age);
        printf("\nNota: %.2f", giant_class[i].score);
        printf("\nBonus: %.2f", giant_class[i].bonus_given);
        printf("\nNota final: %.2f\n", giant_class[i].final_score);
    }

    return 0;
}