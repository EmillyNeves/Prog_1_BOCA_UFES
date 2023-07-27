#include <stdio.h>
int tamanho(char p[400])
{
    int i = 0;
    while (p[i] != '\0')
    {
        i++;
    }
    return i;
}
void pode(char p1[400], char p2[400])
{
    int i = 0, j = 0;
    while (p2[j] != '\0')
    {
        if (p1[i] == p2[j] || p1[i] == (p2[j] + 32) || p1[i] == (p2[j] - 32))
        {
            i++;
        }
        j++;
    }
    if (tamanho(p1) == i)
        printf("PODE!\n");
    else
        printf("NAO PODE!\n");
}
int main()
{
    int qtd, i;
    char p1[400];
    char p2[400];

    scanf("%d\n", &qtd);

    for (i = 0; i < qtd; i++)
    {
        scanf("%s%s", p1, p2);
        pode(p1, p2);
    }

    return 0;
}