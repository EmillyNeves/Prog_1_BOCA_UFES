#include <stdio.h>
void OrdenaCrescente(int vet[], int qtd)//rever
{
    int menor, aux, i, j;
    for (i = 0; i < qtd; i++)
    {
            for (j = 0; j < qtd; j++)
            {
                if (vet[i] < vet[j])
                {
                    aux = vet[j];
                    vet[j] = vet[i];
                    vet[i] = aux;
                }
            }
    }
}
void ImprimeDadosDoVetor(int vet[], int qtd)
{
    printf("{");
    int i;
    for (i = 0; i < qtd; i++)
    {
        printf("%d", vet[i]);
        if(i<qtd-1)
        printf(", ");
    }
    printf("}");
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
    OrdenaCrescente(vet, qtd);
    ImprimeDadosDoVetor(vet, qtd);

    return 0;
}