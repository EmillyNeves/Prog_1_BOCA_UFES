#include <stdio.h>

void verificaAluno(int n, char mat[n][10], char resp[1][10])
{
    int i, j, qtd;
    for (i = 0; i < n; i++)
    {
        qtd = 0;
        for (j = 0; j < 10; j++)
        {
            if (mat[i][j] == resp[0][j])
                qtd++;
        }
        printf("Aluno %d: %d acertos\n", i + 1, qtd);
    }
}

void leMatriz(int n, char mat[n][10])
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 10; j++)
        {
            scanf("%c%*c", &mat[i][j]);
        }
    }
}

int main()
{
    int i, j, n;
    scanf("%d\n", &n);
    char mat[n][10];
    char resp[1][10];

    leMatriz(n, mat);
    scanf("%*c");
    leMatriz(1, resp);

    verificaAluno(n, mat, resp);

    return 0;
}
