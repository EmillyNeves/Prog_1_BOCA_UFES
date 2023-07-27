#include <stdio.h>
void qtdPadrao(char pad, int qtdP, int l, int c, char mat[l][c])
{
    int i, j = 0, k, aux = 0, qtd = 0;
    if (pad == 'H')//horizontal
    {
        for (i = 0; i < l; i++)
        {
            j = 0;
            while (j < c)
            {
                aux = 0;
                if (mat[i][j] == 'X')
                {
                    for (k = j; k < c; k++)
                    {
                        if (mat[i][k] == 'X')
                            aux++;
                        if (aux == qtdP || mat[i][k] != 'X')
                            break;
                    }
                    if (aux == qtdP)
                        qtd++;
                }
                j++;
            }
        }
    }
    else if (pad == 'V')//vertical
    {
        for (j = 0; j < c; j++)
        {
            i = 0;
            while (i < l)
            {
                aux = 0;
                if (mat[i][j] == 'X')
                {
                    for (k = i; k < l; k++)
                    {
                        if (mat[k][j] == 'X')
                            aux++;
                        if (aux == qtdP || mat[k][j] != 'X')
                            break;
                    }
                    if (aux == qtdP)
                        qtd++;
                }
                i++;
            }
        }
    }
    printf("CONT: %c %d\n", pad, qtd);
}
int main()
{
    int qtd, l, c, i;
    char pad;
    scanf("%d%c\n", &qtd, &pad);
    scanf("%d %d\n", &l, &c);
    char mat[l][c];

    for (i = 0; i < l; i++)
    {
        scanf("%s", mat[i]);
    }
    qtdPadrao(pad, qtd, l, c, mat);

    return 0;
}