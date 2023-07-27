#include<stdio.h>
void TrocaParEImpar(int vet[], int qtd)
{
    int i, aux, ant;
    for (i = 0; i < qtd; i++)
    {
        if (i != 0)
        {
            if (i % 2 != 0)//nem precisava dessa condição eu acho mas so pra garantir
            {
                aux = vet[i - 1];
                vet[i - 1] = vet[i];
                vet[i] = aux;
            }
        }
        ant = vet[i];
    }
}
void ImprimeDadosDoVetor(int vet[], int qtd){
    int i;
    for (i = 0; i < qtd; i++)
    {
        printf("%d", vet[i]);
        if(i!=qtd-1)
        printf(", ");
    }
}
int main()
{
    int i, qtd;
    scanf("%d", &qtd);
    int vet[qtd];

    for (i = 0; i < qtd; i++)
    {
        scanf("%d", &vet[i]);
    }
    TrocaParEImpar(vet, qtd);
    printf("{");
    ImprimeDadosDoVetor(vet, qtd);
    printf("}");

    return 0;
}