/* Aula 08 / Atividade 4
 Um  comerciante  cobra  10%  de  acréscimo  para  cada  prestação  em  atraso  e 
depois  dá  um  desconto  de 10%  sobre  esse valor.  Faça  um  algoritmo  que  solicite  o 
valor  da  prestação  em  atraso  e  apresente  o  valor  final  a  pagar.  Assim  como  o 
prejuízo do comerciante na operação.
*/

#include <stdio.h>

int main(void)
{
    float installment, discount, increase;
    float total_1, total_2, loss;

    printf("Insira o valor da prestacao:\n... ");
    scanf("%f", &installment);

    increase = installment * 0.1;
    total_1 = installment + increase;
    discount = total_1 * 0.1;
    total_2 = total_1 - discount;

    printf("\nValor da prestacao inicial:\nR$%.2f.", installment);
    printf("\nValor do acrescimo de 10%% da prestacao:\n+R$%.2f.", increase);
    printf("\n\nTotal: R$%.2f", total_1);

    printf("\n\nValor do desconto de 10%% do total:\n-R$%.2f.", discount);
    printf("\n\nTotal Final: R$%.2f", total_2);

    loss = installment - total_2;
    printf("\n\n-O comerciante teve um prejuizo liquido de R$%.2f.", loss);

    return 0;
}