/* Aula 18 / Atividade Final
 
    Mini sistema de cadastro com vetor de 5 struct Contato (nome e telefone), com três funções:

    cadastrar — lê os dados via scanf
    listar — imprime todos os contatos
    buscar — recebe um nome e imprime o contato se encontrar
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct Contact{
    char name[50];
    int phone;
};

void register_contacts(struct Contact *p, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\n\nCadastro Contato %d", i + 1);
        printf("\nNome:\n... ");
        scanf(" ");
        fgets((p + i)->name, 50, stdin);
        (p + i)->name[strcspn((p + i)->name, "\n")] = 0;
        for (int j = 0; j < 50; j++)
        {
            (p + i)->name[j] = toupper((p + i)->name[j]);
        }
        printf("\nTelefone:\n... ");
        scanf("%d", &(p + i)->phone);
        if ((p + i)->phone < 100000000 || (p + i)->phone > 999999999){
            printf("Telefone invalido!");
            (p + i)->phone = 0;
        }
    }
}

void print_contacts(struct Contact *p, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\n\nContato %d", i + 1);
        printf("\nNome: %s", (p + i)->name);
        if ((p + i)->phone == 0)
        {
            printf("\nTelefone Invalido!");
        }
        else{
            printf("\nTelefone : %d", (p + i)->phone);
        }
    }
}

void search_contact(struct Contact *p, int size)
{
    char search_name[50];
    int found = 0;
    printf("\nInsira o nome que deseja encontrar o contato:\n... ");
    scanf(" ");
    fgets(search_name, 50, stdin);
    search_name[strcspn(search_name, "\n")] = 0;
    for (int i = 0; i < 50; i++)
    {
        search_name[i] = toupper(search_name[i]);
    }

    for (int i = 0; i < size; i++)
    {
        if (strcmp(search_name, (p + i)->name) == 0)
        {
            printf("\nNome: %s", (p + i)->name);
            printf("\nTelefone: %d", (p + i)->phone);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("\nNome nao encontrado no banco de dados.");
}


int main(void)
{   
    struct Contact contacts[5];
    int size = sizeof(contacts) / sizeof(contacts[0]);
    
    register_contacts(contacts, size);
    print_contacts(contacts, size);
    search_contact(contacts, size);

    return 0;
}