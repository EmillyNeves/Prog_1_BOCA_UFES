#include <stdio.h>
void leMatriz(int l, int c, char mat[][c])
{
    int i;
    for (i = 0; i < l; i++)
    {
        scanf("%s", mat[i]);
    }
}
void qtdErro(int lM, int cM, char mat[][cM], int lT, int cT, char tem[][cT])
{
    int erros = 0, i, j, k, m = 0, n = 0, ver = 0;
    for (i = 0; i < lM; i++)
    {
        for (j = 0; j < cM; j++)
        {
            if (mat[i][j] == tem[0][0] && (i <= lM - lT) && (j <= cM - cT))
            {
        
                for (m = i; m < lT + i; m++)
                {
                    for (n = j; n < cT + j; n++)
                    {
                        if (mat[m][n] != tem[m - i][n - j])
                        {
                            ver = 1;
                        }
                    }
                }
                if (ver == 0)
                {
                    erros++;
                }
                ver = 0;
            }
        }
    }
    printf("RESP:%d", erros);
}
int main()
{
    int qtd = 0;
    int lM, cM, lT, cT;
    scanf("%d %d\n", &lM, &cM);
    char mat[lM][cM];
    leMatriz(lM, cM, mat);
    scanf("%d %d\n", &lT, &cT);
    char tem[lT][cT];
    leMatriz(lT, cT, tem);

    qtdErro(lM, cM, mat, lT, cT, tem);

    return 0;
}