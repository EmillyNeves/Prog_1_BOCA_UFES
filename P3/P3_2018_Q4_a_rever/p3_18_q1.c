#include <stdio.h>
#include <string.h>
void mudaMaior(char maior[400], char p[400])
{
    int i = 0;
    while (p[i] != '\0')
    {
        maior[i] = p[i];
        i++;
    }
    maior[i] = '\0';
}
int tamPalavra(char p[400])
{
    int i = 0;
    while (p[i] != '\0')
    {
        i++;
    }
    return i;
}
void ehMaior(char p1[400], char p2[400])
{
    char maior[400];
    maior[0]='\0';
    int i = 0;
    while (scanf("%s%s", p1, p2) == 2)
    {
        if (tamPalavra(p1) < tamPalavra(p2))
        {
            printf("%s\n", p2);
            if (tamPalavra(p2) > tamPalavra(maior))
            {
                i++;
                mudaMaior(maior, p2);
            }
        }
        else if (tamPalavra(p1) > tamPalavra(p2))
        {
            printf("%s\n", p1);
            if (tamPalavra(p1) > tamPalavra(maior))
            {   
                i++;
                mudaMaior(maior, p1);
            }
        }
    }
    if (i == 0)
    {
        printf("MAX:--\n");
    }
    else
    {
        printf("MAX:%s\n", maior);
    }
}
int main()
{
    char p1[400];
    char p2[400];

    ehMaior(p1, p2);

    return 0;
}