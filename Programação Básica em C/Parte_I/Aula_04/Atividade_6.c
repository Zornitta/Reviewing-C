/* Aula 04 / Atividade 6
 Faça um algoritmo que leia o ano de nascimento de uma pessoa, calcule e mostre 
a sua idade e também verifique e mostre se ela já tem idade para votar (16 anos ou 
mais) e para conseguir carteira de habilitação (18 anos ou mais). 
*/

#include <stdio.h>
#include <conio.h>
#include <time.h>

int main(void)
{
    /*Para resolver essa eu fui além de pedir para o usuário inserir apenas o ano de nascimento, assim há mais precissão
    conforme a data em que o usuário usa o sistema. Para isso eu precisei incluir a bibliteca <time.h> que adiciona o tipo
    time_t que é um tipo de dado em C que armazena o tempo desde 00:00:00 de 1º de janeiro de 1970 (UTC).
     Essa data é chamada Unix Epoch.
    */

    /*Primeiro eu criei um tipo de variável struct que armazena dentro dela outras
    outras três variáveis do tipo inteiro para o dia, mês e ano.
    */
    struct Date{

        int day;
        int month;
        int year;
    };


    /*Crio duas variáveis struct do tipo Date, uma para a data de nascimento da pessoas ser armazenada e outra
    para a data atual ser comparada.
    */
    struct Date BirthDate;
    struct Date CurrentDate;

    //Aqui eu primeiro instâncio uma nova variável chamada tempo_atual do tipo time_t(o tipo explicado no cabeçalho).
    time_t tempo_atual; 

    //e então eu uso a função time(NULL) que retorna o número de segundos desde 1º de janeiro de 1970.
    tempo_atual = time(NULL);


    /*Nessa linha o localtime pega agora o tempo atual lá de 00:00:00, 1º de janeiro de 1970 e quebra em partes e então
    cria um ponteiro chamado tempo_info para apontar para esses pedaços de dados armazenados internamente.
    (É complicado por que essa biblioteca foi feita em 1970 e foi feita para ser baixo nível e extremamente eficiênte e
    econômica);
    */
    struct tm*tempo_info = localtime(&tempo_atual);
    
    /*Nessas linhas cada variável interna do struct CurrentDate recebe os valores lá que o ponteiro tempo_info 
    aponta para o armazenamento interno do localtime().
    */
    CurrentDate.day = tempo_info->tm_mday;
    CurrentDate.month = tempo_info->tm_mon + 1; //Vai de mês 0-11 (12 meses no total).
    CurrentDate.year = tempo_info->tm_year + 1900;
    //Se ele começou a contar em 1900, em 2026 o valor do ano é 126, então 1900 + 126 = 2026

    // Agora então temos o struct CurrentDate armazenando a data atual certa!

    //Agora leremos a data de nascimento inserida pelo usuário:

    printf("\nInsira sua data de nascimento (dia, mes e ano):\n...");
    scanf("%d, %d, %d", &BirthDate.day, &BirthDate.month, &BirthDate.year);

    //Cálculo da idade:
    int age = CurrentDate.year - BirthDate.year;

    if (CurrentDate.month < BirthDate.month ||
        (CurrentDate.month == BirthDate.month && CurrentDate.day < BirthDate.day)) {
        age--;
    }

    //Exibir dados
    printf("\nData Atual: %d/%d/%d\n", CurrentDate.day, CurrentDate.month, CurrentDate.year);
    printf("Data de nascimento: %d/%d/%d\n", BirthDate.day, BirthDate.month, BirthDate.year);
    printf("Sua idade atual eh: %d\n", age);

    //Pode votar ou tirar carteira?
    if (age >= 18)
    {
        printf("Voce pode tirar a carteira de habilitacao e votar!\n");
    } else if (age >=16)
    {
        printf("Voce pode votar!\n");
    } else {
        printf("Voce ainda eh menor de idade\n");
    }
    getch();

    return 0;
}