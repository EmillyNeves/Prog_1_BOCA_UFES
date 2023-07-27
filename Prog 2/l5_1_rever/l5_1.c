#include <stdio.h>
#include <math.h>
int maiorNota(int n, int notas[n])
{
    int i, maior = notas[0];
    for (i = 0; i < n; i++)
    {
        if (notas[i] > maior)
            maior = notas[i];
    }
    return maior;
}
int menorNota(int n, int notas[n])
{
    int i, menor = notas[0];
    for (i = 0; i < n; i++)
    {
        if (notas[i] < menor)
            menor = notas[i];
    }
    return menor;
}
float calculaDesvio(int n, int notas[n], float media)
{
    int i;
    float desvio = 0;
    for (i = 0; i < n; i++)
    {
        desvio += pow((notas[i] - media), 2);
    }
    desvio = sqrt(desvio / n);

    return desvio;
}
void imprimeResultado(int n, int notas[n], int somaNotas)
{
    float media = (float)somaNotas / n, desvio;
    int i, acimaM = 0, repro = 0, menor, maior;
    menor = menorNota(n, notas);
    maior = maiorNota(n, notas);
    desvio = calculaDesvio(n, notas, media);
    for (i = 0; i < n; i++) // verifica nota acima ou abaico da media
    {
        if (notas[i] > media)
            acimaM++;
        if (notas[i] < 70)
            repro++;
    }
    printf("MENOR:%d, MAIOR:%d, MEDIA:%.2f, STD:%.2f, ACIMA_MEDIA_CONC:%d, REPROV:%d", menor, maior, media, desvio, acimaM, repro);
}

int main()
{
    int n, i, somaNotas = 0;
    scanf("%d", &n);

    int notas[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &notas[i]);
        somaNotas += notas[i];
    }
    imprimeResultado(n, notas, somaNotas);

    return 0;
}