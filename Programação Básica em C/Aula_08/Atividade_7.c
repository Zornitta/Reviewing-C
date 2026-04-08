/* Aula 08 / Atividade 7
 Criar  um  algoritmo  que  receba  a  idade,  a  altura  e  o  peso  de  várias  pessoas. 
Calcule e imprima: 
• A quantidade de pessoas com idade superior a 50 anos; 
• A média das alturas das pessoas com idade entre 10 e 20 anos; 
• A  porcentagem  de  pessoas  com  peso  inferior  a  50  quilos  entre  todas  as 
pessoas analisadas. 
*/

#include <stdio.h>

int main(void)
{
    int ages[50] = {0};
    double heights[50] = {0};
    double weights[50] = {0};

    int age = 0;
    double height = 0;
    double weight = 0;

    int old_people = 0;

    int young_people = 0;
    float sum_heights = 0;
    float average_heights = 0;

    int skeletons = 0;
    float percentage_skeletons = 0;

    int counter = 0;

    while (1)
    {
        int option = 0;
        printf("\nDeseja adicionar mais uma pessoa?\n1.Sim\n2.Nao\n... ");
        scanf("%d", &option);

        if (option == 2){
            break;
        }
        else if (option != 1)
        {
            printf("\nValor Invalido!");
            
            continue;
        }
        else {

            printf("\nInsira a idade da pessoa:\n... ");
            scanf("%d", &age);

            printf("\nInsira a altura da pessoa em metros:\n... ");
            scanf("%lf", &height);

            printf("\nInsira o peso da pessoa em kilogramas:\n... ");
            scanf("%lf", &weight);

            if (age < 0 || age > 110 || height < 0.54 || height > 2.51 || weight < 2.1 || weight > 635)
            {
                printf("\nValores irreais!");

                continue;
            }
            else
            {
                ages[counter] = age;
                heights[counter] = height;
                weights[counter] = weight;

                counter++;
            }
        }       
    }

    for (int i = 0; i < counter; i++)
    {
        if (ages[i] > 50)
        {
            old_people ++;
        } else if (ages[i] >= 10 && ages[i] <= 20)
        {
            young_people ++;
            sum_heights += heights[i];
        }

        if (weights[i] < 50)
        {
            skeletons ++;
        }
    }

    if (sum_heights > 0){
        average_heights = sum_heights / (float)young_people;
    } else {
        average_heights = 0;
    }

    if (skeletons > 0){
        percentage_skeletons = ((float)skeletons / (float)counter) * 100;
    } else {
        percentage_skeletons = 0;
    }

    printf("\n Pessoas com mais de 50 anos: %d", old_people);
    printf("\n Altura media entre jovens de 10 e 20 anos: %.2f", average_heights);
    printf("\n Porcentagem de pessoas com menos de 50 kilogramas: %.2f", percentage_skeletons);

    return 0;
}