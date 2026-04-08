/* Aula 08 / Atividade 08
 Dado o valor do produto e a forma de pagamento. 
1= à vista; 
2= à prazo. 
Se o produto for pago à vista aplique um desconto de 10% antes de mostrar o 
valor final, senão informe o mesmo valor do produto. 
*/

#include <stdio.h>

int main(void)
{
    float price, total;
    int payment;

    printf("\nInsira o valor do produto:\n... ");
    scanf("%f", &price);

    printf("\nInsira o metodo de pagamento:\n1. A vista\n2. A prazo\n... ");
    scanf("%d", &payment);

    switch (payment)
    {
        case 1:
        
        total = price * 0.9;
        break;

        case 2:
        total = price;
        break;

        default:
        printf("\nOpcao invalida!");

        return 1;
    }

    printf("\n\nValor final: R$%.2f", total);

    return 0;
}