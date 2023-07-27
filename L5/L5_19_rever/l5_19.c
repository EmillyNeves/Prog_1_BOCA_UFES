#include <stdio.h>
void leMatriz(int l, int c, char mat[l][c])
{
    int i, j;
    for (i = 0; i < l; i++)
    {
        scanf("%*c");
        for (j = 0; j < c; j++)
        {
            scanf("%c", &mat[i][j]);
        }
    }
}
void concertaMat(int l, int c, char mat[l][c])
{
    int i, j;
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (mat[i][j] == '2')
                mat[i][j] = '1';
        }
    }
}
void transformaMat(int l, int c, char mat[l][c])
{
    int i, j;
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (mat[i][j] == '0')
            {

                if (i + 1 < l && mat[i + 1][j] == '1') // baixo
                {
                    mat[i][j] = '2';
                }
                else if (i - 1 >= 0 && mat[i - 1][j] == '1') // cima
                {
                    mat[i][j] = '2';
                }
                else if (j - 1 >= 0 && mat[i][j - 1] == '1') // esquerda
                {
                    mat[i][j] = '2';
                }
                else if (j + 1 < c && mat[i][j + 1] == '1') // direita
                {
                    mat[i][j] = '2';
                }
            }
        }
    }
    concertaMat(l, c, mat);
}
int qtdTerra(int l, int c, char mat[l][c])
{
    int i, j, qtd = 0;
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (mat[i][j] == '0')
                qtd++;
        }
    }
    return qtd;
}
int main()
{
    int qtdH, i, tam, l, c;
    scanf("%d\n%d %d", &qtdH, &c, &l);
    char mat[l][c];
    leMatriz(l, c, mat);

    printf("%d ", qtdTerra(l, c, mat));
    for (i = 0; i < qtdH; i++)
    {
        transformaMat(l, c, mat);
    }
    printf("%d\n", qtdTerra(l, c, mat));

    return 0;
}