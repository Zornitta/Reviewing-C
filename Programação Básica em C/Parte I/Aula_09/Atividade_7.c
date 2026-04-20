/* Aula 09 / Atividade 7
 Armazenar o salário de 20 pessoas. Calcular e armazenar o novo salário 
sabendo-se que o reajuste foi de 8%. Imprimir uma listagem numerada com o novo 
salário. 
*/

#include <stdio.h>
#include <conio.h>

int main(void)
{
    float salaries[20];
    float minimum_salary = 1842.00;

    for (int i = 0; i < 20; i++)
    {
        printf("\nInsira o salario do funcionario %d:\n... ", i + 1);
        scanf("%f", &salaries[i]);

        if (salaries[i] < 1842)
        {
            printf("\nSalario menor que o minimo!\nSalario foi registrado como R$%.2f", minimum_salary);
            salaries[i] = minimum_salary;
        }
    }

    for ( int i = 0; i < 20; i++)
    {
        salaries[i] = salaries[i] * 1.08;
    }

    for (int i = 0; i < 20; i++)
    {
        printf("\nNovo salario do funcionario %d: R$%.2f", i + 1, salaries[i]);
    }
    getch();

    return 0;
}