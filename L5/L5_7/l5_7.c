#include <stdio.h>
void ehPG(int qtd, int vet[qtd])
{
    int dif, pg = 0, i, ant;
    for (i = 0; i < qtd; i++)
    {
        if (i != 0)
        {
            dif = vet[i] - ant;
            if (i == 1)
                pg = dif;
            if (pg != dif)
            {
                break;
            }
        }
        ant = vet[i];
    }
    if (pg == dif)
        printf("RESP:%d", pg);
    else
        printf("NAO");
}

int main()
{
    int qtd, i;
    scanf("%d", &qtd);
    int vet[qtd];
    for (i = 0; i < qtd; i++)
    {
        scanf("%d", &vet[i]);
    }
    ehPG(qtd, vet);

    return 0;
}