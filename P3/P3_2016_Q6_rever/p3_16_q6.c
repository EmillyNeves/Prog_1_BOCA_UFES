#include <stdio.h>
void qtdMuro(int l, int c, char mat[l][c])
{
    int i, j, qtd = 0;
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (mat[i][j] == '0')
                if (i + 1 < l && mat[i + 1][j] == '1')
                { // baixo
                    qtd++;
                }
                else if (i - 1 >= 0 && mat[i - 1][j] == '1')
                { // cima
                    qtd++;
                }
                else if (j + 1 < c && mat[i][j + 1] == '1')
                { // esquerda
                    qtd++;
                }
                else if (j - 1 >= 0 && mat[i][j - 1] == '1')
                { // direira
                    qtd++;
                }
                else if (i - 1 >= 0 && j - 1 >= 0 && mat[i - 1][j - 1] == '1')
                { // diag cima direita
                    qtd++;
                }
                else if (i - 1 >= 0 && j + 1 < c && mat[i - 1][j + 1] == '1')
                { // diag cima esquerda
                    qtd++;
                }
                else if (i + 1 < l && j + 1 < c && mat[i + 1][j + 1] == '1')
                { // diag baixo esquerda
                    qtd++;
                }
                else if (i + 1 < l && j - 1 >= 0 && mat[i + 1][j - 1] == '1')
                { // diag baixo direita
                    qtd++;
                }
        }
    }
    printf("%d\n", qtd);
}
int main()
{
    int l, c, i, j;
    scanf("%d %d\n", &c, &l);
    char mat[l][c];

    for (i = 0; i < l; i++)
    {
        scanf("%s", mat[i]);
    }
    qtdMuro(l, c, mat);
    return 0;
}