#include <stdio.h>
#include <string.h>
int ehLetra(char c)
{
    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        return 1;
    return 0;
}
int main()
{
    char texto1[500][501];
    char texto2[500][501];
    int i = 0, j = 0, k = 0, l = 0;

    while (scanf("%s", texto1[i]) == 1)
    {
        for (j = 0; j < strlen(texto1[i]); j++)
        {
            if (ehLetra(texto1[i][j]) || texto1[i][j] == ' ')
            {
                texto2[l][k] = texto1[i][j];
                k++;
            }
            else if (texto1[i][j] == '-' || texto1[i][j] == '(' || texto1[i][j] == 39 || texto1[i][j] == '"')
            {
                l++;
                k = 0;
            }
        }
        i++;
        k = 0;
        l++;
    }
    if (l != 0)
        printf(" ");
    for (i = l; i >= 0; i--)
    {
        k = 1;
        for (j = 0; texto2[i][j]; j++)
        {
            printf("%c", texto2[i][j]);
            k = 0;
        }
        if (k == 0)
            printf(" ");
    }
    return 0;
}