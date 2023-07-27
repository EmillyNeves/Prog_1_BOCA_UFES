#include <stdio.h>
#include <stdlib.h>
void leMatriz(int n, int mat[n][n])
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
}
void imprimeMatriz(int n, int mat[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void verificaMatriz(int n, int mat[n][n])
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            if (i == 0 && (j != n - 1) || j == 0 && (i != n - 1))
                mat[i][j] = 0;
        }
    }
}

int main()
{
    int n, i, j;
    scanf("%d", &n);
    int mat[n][n];

    leMatriz(n, mat);
    imprimeMatriz(n, mat);
    somaDiagonais(n, mat);
    return 0;
}