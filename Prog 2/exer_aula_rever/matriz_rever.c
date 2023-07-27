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

void somaDiagonais(int n, int mat[n][n])
{
    int soma = 0;

    for (int i = 0; i < n; i++) // 1 diagonal
    {
        soma += mat[i][i];
    }
    if (n % 2 == 0) // n eh par
    {
        for (int i = 0, j = n - 1; j >= 0; j--, i++) // 2 diagonal
        {
            soma += mat[j][i];
        }
    }
    else // n eh impar
    {
        for (int i = 0, j = n - 1; j >= 0; j--, i++) // 2 diagonal
        {
            if (j == n / 2)
                continue;
            soma += mat[j][i];
        }
    }
    printf("\nSoma das diagonais: %d\n", soma);
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