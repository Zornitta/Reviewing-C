/* Aula 04 / Atividade 04 
 Dados  três  números, verifique  se  eles  podem  ser  medidas  de  um  triângulo  e,  se 
puderem, classifique o triângulo como equilátero, isóscele ou escaleno.
*/

#include <stdio.h>
#include <conio.h>

int main(void)
{
    float a, b, c;

    printf("\nInsert three numbers separated by Enters:\n");
    scanf("%f\n%f\n%f", &a, &b, &c);
    
    if (a > 0 && b > 0 && c > 0)
    {
        printf("\nYes, the three numbers can make up a triangle.");
        if (a == b && b == c)
        {
            printf("\nThe triangle is an equilateral triangle.");
        }
        else if (a == b || b == c)
        {
            printf("\nThe triangle is an isosceles triangle.");
        }
        else
        {
            printf("\nThe triangle is an scalene triangle.");
        }
    }
    else
    {
        printf("No, the three numbers can't make a triangle.");
    }
    getch();

    return 0;

}