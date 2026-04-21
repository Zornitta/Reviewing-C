/* Aula 19 / Atividade 8
 Usando a mesma struct Student, escreve uma função que percorre o
 array, compara o nome de cada aluno com o name recebido, e retorna um
 ponteiro pro aluno encontrado. Se não encontrar, retorna NULL.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    char name[50];
    float grade;
} Student;

void register_students(Student *students, int size)
{
    int i = 1;
    while (size != 0)
    {
        printf("\nInsira o nome do estudante %d:\n... ", i);
        fgets(students->name, 50, stdin);
        students->name[strcspn(students->name, "\n")] = 0;
        printf("\nInsira a nota do estudante %d:\n... ", i);
        scanf("%f", &students->grade);
        getchar();
        
        i++;
        students++;
        size --;
    }
}

void list_students(Student *students, int size)
{
    int i = 1;
    while (size != 0)
    {
        printf("\n\n- Aluno %d", i);
        printf("\nNome: %s", students->name);
        printf("\nNota: %.2f", students->grade);

        i++;
        students++;
        size--;
    }
}

Student *find_student(Student *students, int size, char *name)
{
    while (size != 0)
    {
        if (strcmp(students->name, name) == 0)
        return students;

        students++;
        size--;
    }
    return NULL;
}

int main(void)
{
    Student students[2];
    int size = sizeof(students) / sizeof(students[0]);
    
    register_students(students, size);
    Student *found = find_student(students, size, "Pedro");

    if (found == NULL)
    {
        printf("\nNao encontrado!");
    }
    else
    {
        printf("\nAluno encontrado!");
        printf("\nNome: %s", found->name);
        printf("\nNota: %.2f", found->grade);
    }

    return 0;
}