/* Aula 19 / Atividade 6
 Cria uma struct Aluno com dois campos: name e grade (nota float).
 Escreve uma função que recebe um Aluno* e atualiza a nota dele.
 No main:
 Declara um Aluno e preenche via teclado
 Imprime os dados antes da atualização
 Chama a função pra atualizar a nota
 Imprime os dados depois
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    char name[50];
    float grade;
} Student;


void update_grade(Student *student, int size, int position, float new_grade)
{
    if (position >= 0 && position < size)
    {
        student[position].grade = new_grade;
        printf("\nA nota de %s foi atualizada para %.2f!", student[position].name, new_grade);
    }
    else
    {
        printf("Error: Invalid Arguments");
    }
}

void register_students(Student *student, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\nInsira o nome do aluno %d:\n... ", i + 1);
        fgets(student[i].name, 50, stdin);
        student[i].name[strcspn(student[i].name, "\n")] = 0;
        printf("\nInsira a nota desse aluno:\n... ");
        scanf("%f", &student[i].grade);
        getchar();
        if (student[i].grade < 0 || student[i].grade > 10)
        {
            printf("\nValor invalido! Nota setada para 0.");
            student[i].grade = 0;
        }
    }
}   

void list_students(Student *student, int size)
{
    printf("\n--- Alunos ---");
    for (int i = 0; i < size; i++)
    {
        printf("\n\nAluno %d", i + 1);
        printf("\nNome: %s", student[i].name);
        printf("\nNota: %.2f", student[i].grade);
    }
    printf("\n---------");
}

int main(void)
{
    Student class[2];
    int size = sizeof(class) / sizeof(class[0]);

    register_students(class, size);
    update_grade(class, size, 0, 7.2);

    list_students(class, size);

    return 0;
}