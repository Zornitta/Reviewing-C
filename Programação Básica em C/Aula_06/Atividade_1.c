/* Aula 06 / Atividade 1
 Construa uma calculadora em que o usuário possa selecionar as operações +,  -, 
*, / . O usuário também deverá informar dois valores para executar o cálculo.
*/

#include <stdio.h>

#define DIV_ZERO_CHECK(y) ((y) == 0)

int main(void)
{
    float x, y, total;
    char operator;

    printf("\nInsira o primeiro numero:\n...");
    scanf(" %f", &x);
    printf("\nInsira o segundo numero:\n...");
    scanf(" %f", &y);
    printf("\nDigite o operador:\n...");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            total = x + y;
            break;
        case '-':
            total = x - y;
            break;
        case '*':
            total = x * y;
            break;
        case '/':
            if (DIV_ZERO_CHECK(y)) {
                printf("ERRO: divisao por zero!\n");
                return 1;
            }
            total = x / y;
            break;
        default:
            printf("\nValor para operador invalido!");
            return 1;
    }
    
    printf("\nResultado: %.2f", total);

    return 0;
}