#include <stdio.h>
int verificaPasso(int tam, int vet[tam])
{

    for (int i = 0; i < tam; i++)
    {
        if (i + 1 < tam)
        {
            if (vet[i] == vet[i + 1])
                return 0;
            if (vet[i] > vet[i + 1])
            {
                if (vet[i + 2] < tam)
                {
                    if (vet[i + 1] < vet[i + 2])
                        return 0;
                }
            }
        }
    }
    return 1;
}

int main()
{
    int i = 0, vet[100];
    while (scanf("%d", &vet[i]) == 1) // le vetor
    {
        i++;
    }
    if (verificaPasso(i, vet))
        printf("SIM\n");
    else
        printf("NAO\n");
    return 0;
}