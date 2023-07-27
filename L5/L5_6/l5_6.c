#include <stdio.h>
void leVetor(int qtd, int vet[qtd])
{
    int i;
    for (i = 0; i < qtd; i++)
    {
        scanf("%d", &vet[i]);
    }
}
int vericaAemB(int qtd1, int vet1[qtd1], int qtd2, int vet2[qtd2])
{
    int i, j, k = 0;
    for (i = 0; i < qtd1; i++)
    {
        for (j = 0; j < qtd2; j++)
        {
            if(vet1[i]==vet2[j]){
            k++;
            break;
            }
        }
    }
    return k;
}
int main()
{
    int qtd1, qtd2, k;
    scanf("%d", &qtd1);
    int vet1[qtd1];
    leVetor(qtd1, vet1);
    scanf("%d", &qtd2);
    int vet2[qtd2];
    leVetor(qtd2, vet2);

    k = vericaAemB(qtd1, vet1, qtd2, vet2);
    if(k==0)
    printf("NENHUM");
    else if(k==qtd1)
    printf("TODOS");
    else
    printf("PARCIAL");

    return 0;
}