/* Aula 19 / Atividade 7
 Usando a mesma struct Student da atividade anterior:
 Cria um array de 5 alunos.
 Preenche via teclado.
 Escreve uma função list_students que percorre o array usando só aritmética de ponteiros — sem [] em nenhum momento.
*/

#include <stdio.h>
#include <string.h>


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

int main(void)
{
    Student students[5];
    int size = sizeof(students) / sizeof(students[0]);

    register_students(students, size);
    list_students(students, size);

    return 0;
}