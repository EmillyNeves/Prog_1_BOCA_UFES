#include <stdio.h>
void leMatriz(int l, int c, int mat[l][c])
{
    int i, j;
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
}
void imprimeMatriz(int l, int c, int mat[][c])
{
    int i, j;
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d",mat[i][j]);
            if(j!=c-1)
            printf(" ");
        }
        printf("\n");
    }
}
void MultMatriz(int l1, int l2, int c1, int c2, int mat1[][c1], int mat2[][c2])
{
    if (c1 != l2)
    {
        printf("IMPOSSIVEL\n");
    }
    else
    {
        int mat3[l1][c2], k, i, j;

        for (i = 0; i < l1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                mat3[i][j] = 0;
                for (k = 0; k < c1; k++)
                {
                    mat3[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }
        imprimeMatriz(l1, c2, mat3);
    }
    printf("\n");
}
int main()
{
    int i, qtd, l1, l2, c1, c2;
    scanf("%d\n\n", &qtd);
    for (i = 0; i < qtd; i++)
    {
        scanf("%d %d", &c1, &l1);
        int mat1[l1][c1];
        leMatriz(l1, c1, mat1);

        scanf("%d %d", &c2, &l2);
        int mat2[l2][c2];
        leMatriz(l2, c2, mat2);

        MultMatriz(l1, l2, c1,c2, mat1, mat2);
    }

    return 0;
}