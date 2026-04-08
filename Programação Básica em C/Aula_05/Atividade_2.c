/* Aula 05 / Atividade 2
 Dadas às notas dos alunos de uma turma, informe a média da turma.
*/

#include <stdio.h>
#include <conio.h>

int main(void)
{
    float nota[3], media;
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("\nInsira a nota do aluno %d:\n...", i + 1);
        scanf("%f", &nota[i]);
    }

    media = (nota[0] + nota[1] + nota[2]) / 3;    
    printf("\nA media da turma eh %.2f\n", media);
    getch();

    return 0;
}
