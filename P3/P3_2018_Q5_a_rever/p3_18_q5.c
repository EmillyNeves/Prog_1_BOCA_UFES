#include <stdio.h>
void leVetor(int vet[100])
{
    int i = 0;
    while (1)
    {
        scanf("%d", &vet[i]);
        if (vet[i] == -1)
        {
            break;
        }
        i++;
    }
}
int tamanho(int vet[100])
{
    int i = 0;
    while (vet[i] != -1)
    {
        i++;
    }
    return i - 1;
}
void imprimeContrario(int vet[100], int tam)
{
    int i = 0;
    for (i = tam; i >= 0; i--)
    {
        if (i == tam && vet[i] == 0)
            continue;
        printf("%d", vet[i]);
    }
    printf("\n");
}
void soma(int n1[100], int n2[100])
{
    int i = 0, soma[100], sob = 0, a, b, tam1, tam2;
    soma[i] = '\0';
    tam1 = tamanho(n1);
    tam2 = tamanho(n2);
    while (1)
    {
        if (tam1 >= 0)
            a = n1[tam1];
        else
            a = 0;
        if (tam2 >= 0)
            b = n2[tam2];
        else
            b = 0;
        soma[i] = a + b + sob;
        if (soma[i] > 9)
        {
            sob = soma[i] / 10;
            soma[i] = soma[i] % 10;
        }
        else
            sob = 0;
        if (tam1 < 0 && tam2 < 0 && sob == 0)
            break;
        tam1--;
        tam2--;
        i++;
    }
    imprimeContrario(soma, i);
}
int main()
{
    int n1[100], qtd;
    int n2[100], i = 0;
    scanf("%d", &qtd);
    for (i = 0; i < qtd; i++)
    {
        leVetor(n1);
        leVetor(n2);
        soma(n1, n2);
    }

    return 0;
}