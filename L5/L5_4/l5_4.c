#include <stdio.h>
int qtdIntervalo(int qtd, int vet[qtd], int a, int b)
{
    int qtdI = 0, i;
    for (i = 0; i < qtd; i++)
    {
        if (vet[i] >= a && vet[i] <= b)
            qtdI++;
    }
    return qtdI;
}
int main()
{
    int i, qtd, a, b, c;
    scanf("%d", &qtd);
    int vet[qtd];
    for (i = 0; i < qtd; i++)
    {
        scanf("%d", &vet[i]);
    }
    scanf("%d %d", &a, &b);
    c = qtdIntervalo(qtd, vet, a, b);

    printf("%d %d", c, qtd - c);

    return 0;
}