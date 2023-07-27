#include <stdio.h>
void imprimevetor(int qtd, int vet[qtd])
{
    int i;
    for (i = 0; i < qtd; i++)
    {
        printf("%d", vet[i]);
        if(i<qtd-1)
        printf(" ");
    }
    printf("\n");
}
void deslocaVetor(int des, int qtd, int vetD[qtd], int vet[qtd])
{
    int i, j;
    for (i = 0, j = 0; i < qtd; i++)
    {
        if (des > 0)
        {
            vetD[i] = vet[qtd - des];
            des--;
        }
        else
        {
            vetD[i] = vet[j];
            j++;
        }
    }
}
int main()
{
    int qtd, des;
    while (scanf("%d", &qtd) == 1)
    {
        int vet1[qtd], i, vet2[qtd];
        for (i = 0; i < qtd; i++)
        {
            scanf("%d", &vet1[i]);
        }
        while (1)
        {
            scanf("%d", &des);
            if (des == -1)
                break;
            deslocaVetor(des, qtd, vet2, vet1);
            for (i = 0; i < qtd; i++) // copia vetor
            {
                vet1[i] = vet2[i];
            }
            imprimevetor(qtd, vet2);
        }
    }
    return 0;
}