#include <stdio.h>
void iniciaMatriz(int l, int c, int mat[l][c])
{
    int i, j;
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            mat[i][j] = 0;
        }
    }
}
void imprime(int l, int c, int mat[l][c]){
    int i, j;
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}
void andaRobo(int l, int c, int mat[l][c])
{
    int x, y, j = 0, i = 0, dist1, dist2; // x coluna, y linha
    while (scanf("%d %d", &x, &y) == 2)
    {
        dist1 = j - x;//horizontal
        dist2 = i - y;//vertical
        if (dist1 < 0)
            dist1 *= -1;
        if (dist2 < 0)
            dist2 *= -1;

        if (dist2 < dist1)
        {
            mat[i][j] = 1;
            while (1)
            {
                if (i < y)
                    i++;
                if (i > y)
                    i--;
                mat[i][j] = 1;
                if(i == y)
                break;
            }
            while (1)
            {
                if (j < x)
                    j++;
                if (j > x)
                    j--;
                mat[i][j] = 1;
                if(j == x)
                break;
            }
        }
        else
        {
            mat[i][j] = 1;
            while (1)
            {
                if (j < x)
                  j++;
                if (j > x)
                  j--;
                mat[i][j] = 1;
                if(j == x)
                break;
            }
            while (1)
            {
                if (i < y)
                    i++;
                if (i > y)
                    i--;
                mat[i][j] = 1;
                if(i == y)
                break;
            }
        }
    }
}
int main()
{
    int l, c, i, j;
    scanf("%d %d", &c, &l);
    int mat[l][c];
    iniciaMatriz(l, c, mat);
    andaRobo(l, c, mat);
    imprime(l, c, mat);

    return 0;
}