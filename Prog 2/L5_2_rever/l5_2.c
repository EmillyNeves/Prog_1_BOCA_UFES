#include <stdio.h>
int verificaIgualdade(int n, int vet[n])
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        if (vet[i] != vet[0])
            return 0;
    }
    return 1;
}
int verificaCrescente(int n, int vet[n])
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (i + 1 < n)
        {
            if (vet[i + 1] < vet[i])
                return 0;
        }
    }
    if (!verificaIgualdade(n, vet))
        return 1;
    return 0;
}

int verificaDecescente(int n, int vet[n])
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (i + 1 < n)
        {
            if (vet[i + 1] > vet[i])
                return 0;
        }
    }
    if (!verificaIgualdade(n, vet))
        return 1;
    return 0;
}

void imprimeResultado(int n, int vet[n])
{

    if (verificaDecescente(n, vet))
        printf("DECRESCENTE");
    else if (verificaCrescente(n, vet))
        printf("CRESCENTE");
    else if (n == 1 || verificaIgualdade(n, vet))
        printf("CRESCENTE&DECRESCENTE");
    else
        printf("DESORDENADO");
}

int main()
{
    int n, i;
    scanf("%d", &n);
    int vet[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &vet[i]);
    }
    imprimeResultado(n, vet);

    return 0;
}