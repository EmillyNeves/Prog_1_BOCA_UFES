#include <stdio.h>
int ehTransposta(int l, int c, int mat[l][c])
{
    int i, j, v = 1;
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (mat[i][j] != mat[j][i])
                v = 0;
        }
    }
    if (v == 1)
        return 1;
    return 0;
}
int ehSimetrica(int l, int c, int mat[l][c]){
    int i, j, v = 1;
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (mat[i][j] != mat[j][i])
                v = 0;
        }
    }
    if (v == 1)
        return 1;
    return 0;
}
int main()
{
    int l, c, i, j;
    scanf("%d %d", &l, &c);
    int mat[l][c];

    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", mat[i][j]);
        }
    }

    return 0;
}