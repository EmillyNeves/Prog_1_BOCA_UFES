#include <stdio.h>
void leVetor(int qtd, int vet[qtd])
{
    int i;
    for (i = 0; i < qtd; i++)
    {
        scanf("%d", &vet[i]);
    }
}
void ordenaVetor(int qtd, int vet[qtd])
{
    int i, aux, j;
    for (i = 0; i < qtd; i++)
    {
        for (j = 0; j < qtd; j++)
        {
            if (vet[i] > vet[j])
            {
                aux = vet[j];
                vet[j] = vet[i];
                vet[i] = aux;
            }
        }
    }
}
void imprimeVetores(int qtd1, int qtd2, int vet1[qtd1], int vet2[qtd2])
{
    int i = 0, j = 0;
    while (1)
    {
            if (vet1[i] == vet2[j] && (j < qtd2 && i < qtd1) )
            {
                printf("AB");
                j++;
                i++;
            }
            else if (vet1[i] < vet2[j]|| (j==qtd2 && i<qtd1))
            {
                printf("A");
                i++;
            }
            else
            {
                printf("B");
                j++;
            }
        if (j == qtd2 - 1 && i == qtd1 - 1)
            break;
    
    }
}
int main()
{
    int qtd1, qtd2;
    scanf("%d", &qtd1);
    int vet1[qtd1];
    leVetor(qtd1, vet1);
    scanf("%d", &qtd2);
    int vet2[qtd2];
    leVetor(qtd1, vet2);

    ordenaVetor(qtd1, vet1);
    ordenaVetor(qtd2, vet2);

    imprimeVetores(qtd1,qtd2,vet1, vet2);

    return 0;
}