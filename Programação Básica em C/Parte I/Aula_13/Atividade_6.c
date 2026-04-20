/* Aula 13 / Atividade 6
 Uma  empresa  concederá  um  aumento  de  salário  aos  seus  funcionários,  variável 
de  acordo  com  o  cargo,  conforme  a  tabela  abaixo.  Faça  um  programa  que  leia  o 
salário  e  o  cargo  de  um  funcionário  e  calcule  o  novo  salário.  Se  o  cargo  do 
funcionário não estiver na tabela, ele deverá então receber 40% de aumento. Mostre 
o salário antigo, o novo salário e a diferença. 

Cargo          Percentual 

Gerente         10% 
Engenheiro      20% 
Técnico         30% 

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    float old_salaries[50];
    float new_salaries[50];
    float salaries_diference[50];

    char position[50] = {0};
    int workers;

    //Leitura numero de funcionarios
    printf("\nQuantos funcionarios a empresa tem?\n");
    scanf("%d", &workers);

    //Leitura dos dados
    for (int i = 0; i < workers; i++)
    {
        //Leitura do cargo
        printf("\nInsira o cargo do funcionario %d:\n", i + 1);
        scanf("%49s", position);
        for (int i = 0; position[i] != 0; i++)
        {
            position[i] = toupper((unsigned char)position[i]);
        }

        //Leitura do salario inicial
        printf("\nInsira o salario do funcionario:\n");
        scanf("%f", &old_salaries[i]);

        //Calcula reajuste
        if (strcmp(position, "GERENTE") == 0)
        {
            new_salaries[i] = old_salaries[i] * 1.1;
        }
        else if (strcmp(position, "ENGENHEIRO") == 0)
        {
            new_salaries[i] = old_salaries[i] * 1.2;
        }
        else if (strcmp(position, "TECNICO") == 0)
        {
            new_salaries[i] = old_salaries[i] * 1.3;
        }
        else
        {
            new_salaries[i] = old_salaries[i] * 1.4;
        }

        //Calculo da diferença
        salaries_diference[i] = new_salaries[i] -  old_salaries[i];

        //Limpa position
        for (int i = 0; i < 50; i++)
        {
            position[i] = 0;
        }
    }

    //Apresentação do resultado
    for (int i = 0; i < workers; i++)
    {
        printf("\nReajuste salarial do funcionario %d:", i + 1);
        printf("\nSalario antigo: %.2f\nSalario novo: %.2f\nDiferenca: %.2f\n", old_salaries[i], new_salaries[i], salaries_diference[i]);
    }

    return 0;
}