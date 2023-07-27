#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double geraValores(int vet[50])
{
    int i, soma = 0;
    srand(time(NULL));
    for (i = 0; i < 50; i++)
    {
        vet[i] = rand() % 60;
        soma += vet[i];
    }
    return soma;
}

int main()
{
    int vet[50], i, media;
    media = geraValores(vet);

    for (i = 0; i < 50; i++)
    {
        printf("%d ", vet[i]);
    }
    printf("\n%.2f", media/50.0);
    return 0;
}