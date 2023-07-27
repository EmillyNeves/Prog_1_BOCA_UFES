#include <stdio.h>
void LeMatriz(int l, int c, char mat[][c])
{
    int i, j;
    for (i = 0; i < l; i++)
    {
        scanf("%s", mat[i]);
    }
}
void solda(int lM, int cM, char mat[][cM], int lT, int cT, char tem[][cT])
{
    int erros = 0, i, j, y = 0, x = 0, ver = 0;
    for (i = 0; i < lM; i++)
    {
        for (j = 0; j < cM; j++)
        {
            if (mat[i][j] == tem[0][0] && (i <= lM - lT) && (j <= cM - cT))
            {

                for (y = i; y < lT + i; y++)
                {
                    for (x = j; x < cT + j; x++)
                    {
                        if (mat[y][x] != tem[y - i][x - j])
                        {
                            ver = 1;
                        }
                    }
                }
                if (ver == 0)
                {
                    printf("%d,%d\n", j, i);
                }
                ver = 0;
            }
        }
    }
}
int main()
{
    int lM, cM, lT, cT;
    scanf("%d %d\n", &lM, &cM);
    char mat[lM][cM];
    LeMatriz(lM, cM, mat);

    scanf("%d %d\n", &lT, &cT);
    char tem[lT][cT];
    LeMatriz(lT, cT, tem);

    solda( lM,  cM, mat,  lT,  cT, tem);

    return 0;
}