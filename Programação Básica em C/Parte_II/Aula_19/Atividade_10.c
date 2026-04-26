/* Aula 19 / Atividade 10
 Cria um array de 5 Aluno, preenche via teclado com scanf, ordena
 pelo nome usando uma função que recebe ponteiros, e imprime o resultado.
 Usa tudo: ponteiros, structs, strings, aritmética de ponteiros.
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
    printf("\n--- Cadastro de Alunos ---");
    for (int i = 0; i < size; i++)
    {
        printf("\n\n-Aluno %d", i + 1);
        printf("\nNome:\n... ");
        fgets(students->name, 50, stdin);
        students->name[strcspn(students->name, "\n")] = 0;
        printf("\nNota:\n... ");
        scanf("%f", &students->grade);
        getchar();

        students++;
    }
}

void list_students(Student *students, int size)
{
    int i = 1;

    printf("\n--- Lista de Estudantes ---");
    while (size != 0)
    {
        printf("\n\n-Aluno %d", i);
        printf("\nNome: %s", students->name);
        printf("\nNota: %.2f", students->grade);

        i++;
        students++;
        size--;
    };
}

void order_students(Student *students, int size)
{
    Student temp;
    char n1[50], n2[50];

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size -i - 1; j++)
        {
            strcpy(n1, students[j].name);
            strcpy(n2, students[j + 1].name);

            for (int k = 0; n1[k]; k++) n1[k] = toupper(n1[k]);
            for (int k = 0; n2[k]; k++) n2[k] = toupper(n2[k]);

            if(strcmp(n1, n2) > 0)
            {
            temp = students[j];
            students[j] = students[j + 1];
            students[j + 1] = temp;
            }
        }
    }
}

int main(void)
{
    Student students[5];
    int size = sizeof(students) / sizeof(students[0]);

    register_students(students, size);
    order_students(students, size);
    list_students(students, size);


    return 0;
}