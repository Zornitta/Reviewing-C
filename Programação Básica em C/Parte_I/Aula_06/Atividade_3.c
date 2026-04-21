/* Aula 06 / Atividade 3
 Criar  um  algoritmo  que  leia  o  destino  do  passageiro,  se  a  viagem  inclui  retorno 
(ida e volta) e informar o preço da passagem conforme as informações a seguir: 

     Destino                Ida         Ida e volta 
  Região Norte           R$500,00        R$900,00 
  Região Nordeste        R$350,00        R$650,00 
  Região Centro-Oeste    R$350,00        R$600,00 
  Região Sudoeste        R$400,00        R$750,00 
  Região Sul             R$300,00        R$550,00

*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

#define North_Forth 500
#define Nordeste_Forth  350
#define Midwest_Forth   350
#define South_West_Forth    400
#define South_Forth 300

#define North_Back_and_Forth    900
#define Nordeste_Back_and_Forth 650
#define Midwest_Back_and_Forth  600
#define South_West_Back_and_Forth   750
#define South_Back_and_Forth    550

int main(void)
{
    char destination[20];
    int comeback;
    int price = 0;

    printf("\nInsira seu destino:\n Destino                Ida         Ida e volta \n Norte           R$500,00        R$900,00 \n Nordeste        R$350,00        R$650,00\n Centro-Oeste    R$350,00        R$600,00\n Sudoeste        R$400,00        R$750,00 \n Sul             R$300,00        R$550,00\n... ");
    scanf("%s", destination);
    // Converter para maiúsculo
    for(int i = 0; destination[i]; i++) {
        destination[i] = toupper(destination[i]);
    }
    printf("\nDeseja que tipo de passagem?\n1-Apenas ida\n2-Ida e volta.");
    scanf("%d", &comeback);

    if (comeback != 1 && comeback != 2){
        printf("\nNumero Invalido!");
        return 0;
    }

    if (strcmp(destination, "NORTE") == 0) {
        if (comeback == 1){
            price = North_Forth;
        } else {
            price = North_Back_and_Forth;
        }
    } else if (strcmp(destination, "NORDESTE") == 0) {
        if (comeback == 1){
            price = Nordeste_Forth;
        } else {
            price = Nordeste_Back_and_Forth;
        }
    } else if (strcmp(destination, "CENTRO-OESTE") == 0) {
        if (comeback == 1){
            price = Midwest_Forth;
        } else {
            price = Midwest_Back_and_Forth;
        }
    } else if (strcmp(destination, "SUDOESTE") == 0) {
        if (comeback == 1){
            price = South_West_Forth;
        } else {
            price = South_West_Back_and_Forth;
        }
    } else if (strcmp(destination, "SUL") == 0) {
        if (comeback == 1){
            price = South_Forth;
        } else {
            price = South_Back_and_Forth;
        }
    } else {
        printf("Destino invalido!\n");
        return 0;
    }

    printf("O preco da passagem e: R$%d,00\n", price);
    return 0;
}