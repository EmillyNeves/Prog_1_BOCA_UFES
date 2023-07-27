#include <stdio.h>
#include <stdlib.h>

#define MAX 100
void imprimeMatriz(int lin, int col, int mat[lin][col])
{
    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }
}

void expandeAlagamento(int lin, int col, int mat[lin][col])
{
    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (mat[i][j] == 1)
            {
                // baixo
                if (i + 1 < lin)
                {
                    if (mat[i][j] == 0)
                        mat[i + 1][j] = 2;
                }
                // cima
                if (i - 1 > -1)
                {
                    if (mat[i][j] == 0)
                        mat[i - 1][j] = 2;
                }
                // direita
                if (j + 1 < col)
                    if (mat[i][j] == 0)
                        mat[i][j + 1] = 2;
                // esquerda
                if (j - 1 > -1)
                    if (mat[i][j] == 0)
                        mat[i][j - 1] = 2;
            }
        }
    }
}

void ajustaExpancao(int lin, int col, int mat[lin][col])
{
    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (mat[i][j] == 2)
                mat[i][j] = 1;
        }
    }
}
void contaTerreno(int lin, int col, int mat[lin][col])
{
    int seco, alagado = 0;
    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (mat[i][j] == 1)
                alagado++;
        }
    }
    seco = lin * col - alagado;
    printf("%d %d", seco, alagado);
}

int main()
{
    int linha, coluna, horas;
    scanf("%d\n", &horas);
    scanf("%d %d\n", &linha, &coluna);
    int terreno[linha][coluna];

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            scanf("%d", terreno[i][j]);
        }
    }
    for (int k = 0; k < horas; k++)
    {
        expandeAlagamento(linha, coluna, terreno);
        ajustaExpancao(linha, coluna, terreno);
        imprimeMatriz(linha, coluna, terreno);
        contaTerreno(linha, coluna, terreno);
    }

    return 0;
}
