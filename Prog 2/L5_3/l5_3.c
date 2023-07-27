#include <stdio.h>
int maiorDiferenca(int n, int vet[n])
{
    int dif, maiorDif = 0, i;
    for (i = 0; i < n; i++)
    {
        if (i + 1 < n)
        {
            dif = vet[i] - vet[i + 1];
            if (dif < 0)
                dif *= -1;
            if (dif > maiorDif)
                maiorDif = dif;
        }
    }

    return maiorDif;
}

void imprimeAlturas(int n, int vet[n])
{
    int i, maiorDif, dif;
    if (n < 2)
        printf("IMPOSSIVEL");
    else
    {
        maiorDif = maiorDiferenca(n, vet);
        for (i = 0; i < n; i++)
        {
            if (i + 1 < n)
            {
                dif = vet[i] - vet[i + 1];
                if (dif < 0)
                    dif *= -1;
                if (dif == maiorDif)
                    printf(" (%d %d)", i, i + 1);
            }
        }
    }
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
    imprimeAlturas(n, vet);

    return 0;
}