/* Aula 19 / Atividade 9
 Em C você pode guardar o endereço de uma função numa variável e chamá-la por esse ponteiro. A sintaxe é:
 
 // uma função normal
 int soma(int a, int b) { return a + b; }

 // ponteiro pra função que recebe dois ints e retorna int
 int (*operacao)(int, int);

 // aponta pro endereço da função soma
 operacao = soma;

 // chama a função pelo ponteiro
 int resultado = operacao(3, 5);  // retorna 8
-------------------------------------------------------
 Cria duas funções soma(int a, int b) e multiplica(int a, int b).
 Escreve uma função calcular que recebe dois inteiros e um ponteiro
 para função, e executa a operação recebida imprimindo o resultado.
  No main, chama calcular duas vezes — uma passando soma e outra
 passando multiplica.
 */

#include <stdio.h>

double sum(double a, double b) { return a + b; }
double subtraction(double a, double b) { return a - b;}
double multiplication(double a, double b) { return a * b; }
double division(double a, double b) { return a / b; }

void calculate(double a, double b, double (*operation)(double, double))
{
    double result = operation(a, b);
    printf("\nResultado: %.2f", result);
}

int main(void)
{    
    calculate(10, 10, sum);
    calculate(100, 50, subtraction);
    calculate(5, 2, multiplication);
    calculate(50, 5, division);

    return 0;
}