#include <stdio.h>
void compactaVetor(int qtd1, int qtd2, int vet1[qtd1], int vet2[qtd2])
{
    int i, j;
    for (i = 0, j = 0; i < qtd1; i++)
    {
        if (vet1[i] != 0 && j < qtd2)
        {
            vet2[j] = vet1[i];
            j++;
        }
    }
}
void imprimeVetor(int qtd, int vet[qtd])
{
    int i;
    printf("V = [");
    for (i = 0; i < qtd; i++)
    {
        printf("%d", vet[i]);
        if (i < qtd - 1)
            printf(", ");
    }
    printf("]\n");
}
int main()
{
    int i, qtd = 0;
    int vet1[15];

    for (i = 0; i < 15; i++)
    {
        scanf("%d", &vet1[i]);
        if (vet1[i] != 0)
            qtd++;
    }
    int vet2[qtd];
    compactaVetor(15, qtd, vet1, vet2);
    imprimeVetor(qtd, vet2);

    return 0;
}