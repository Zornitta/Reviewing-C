/* Aula 14 / Atividade 2
 Criar um algoritmo que leia e armazene os elementos de uma matriz inteira M(4x4) e 
imprima na tela. Troque a seguir: 
- A segunda linha pela terceira; 
- a primeira coluna pela terceira; 
- a diagonal principal pala diagonal secundária. 
*/

#include <stdio.h>

//Função leitura matrix 4x4
void read_matrix4x4(int matrix[4][4])
{
    printf("\nInsira os valores da matriz:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("\n[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

//Função Impressão Matrix 4x4
void write_matrix4x4(int matrix[4][4])
{
    printf("\n\n");
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf("%d      ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

//Função Bagunçar a Matriz
void mess_up_matrix4x4(int matrix[4][4])
{
    int temp;
    
    //A segunda linha pela terceira; 
    for (int j = 0; j < 4; j++)
    {
        temp = matrix[1][j];
        matrix[1][j] = matrix[2][j];
        matrix[2][j] = temp;
    }

    write_matrix4x4(matrix);
    //A primeira coluna pela terceira; 
    for (int i = 0; i < 4; i++)
    {
        temp = matrix[i][0];
        matrix[i][0] = matrix[i][2];
        matrix[i][2] = temp;
    }

    write_matrix4x4(matrix);

    //Diagonal principal pela secundária
    for (int i = 0; i < 4; i++)
    {
        temp = matrix[i][i];
        matrix[i][i] = matrix[i][3 - i];
        matrix[i][3 - i] = temp;
    }

}

int main(void)
{
    int matrix[4][4] = {0};
    read_matrix4x4(matrix);
    write_matrix4x4(matrix);
    mess_up_matrix4x4(matrix);
    write_matrix4x4(matrix);

    return 0;
}