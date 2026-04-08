/* Aula 04 / Atividade 8
 Faça uma calculadora que utilize as seguintes operações + - * /. Considere que o 
usuário irá informar 2 valores e a operação para efetuar cálculos. 
*/

#include <stdio.h>
#include <conio.h>

int main(void)
{
    float n1, n2, total;
    int operation;

    printf("Insert a number:\n...");
    scanf("%f", &n1);

    printf("\nInsert the second number:\n...");
    scanf("%f", &n2);

    printf("\nNow choose the operation:\nSum = 1\nSubtraction = 2\nMultiplication = 3\nDivision = 4\n...");
    scanf("%d", &operation);

    if (operation == 1){
        total = n1 + n2;
    } else if (operation == 2){
        total = n1 - n2;
    } else if (operation == 3){
        total = n1 * n2;
    } else if (operation == 4){
        total = n1 / n2;
    } else {
        return 1;
    }

    printf("\nThe result is equal to %.2f!", total);
    getch();
    
    return 0;
}