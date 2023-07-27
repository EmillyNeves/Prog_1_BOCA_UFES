#include <stdio.h>
int ehVogal(char c)
{
    if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
        return 1;
    return 0;
}
int ehLetra(char c)
{
    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        return 1;
    return 0;
}
int temMais(char c[400])
{
    int i = 0, qtdV = 0, qtdC = 0;
    for (i = 0; c[i]; i++)
    {
        if (ehVogal(c[i]))
            qtdV++;
        else if (ehLetra(c[i]))
            qtdC++;
    }
    if (qtdC == qtdV)
        return 0;
    else if (qtdV > qtdC)
        return 1;
    return 2;
}
void imprime(char c[400])
{
    int i = 0, eh;
    eh = temMais(c);
    while (c[i] != '\0')
    {
        if (!eh)
        {
            printf("%c", c[i]);
        }
        else if (eh == 1)
        {
            if (ehVogal(c[i]))
                printf("%c", c[i]);
        }
        else if (eh == 2)
        {
            if (!ehVogal(c[i]) && ehLetra(c[i]))
                printf("%c", c[i]);
        }
        i++;
    }
    printf("\n");
}
int main()
{
    int qtdC = 0, qtdV = 0;

    char c[400];

    while (scanf("%s", c) == 1)
    {
        imprime(c);
    }
    return 0;
}