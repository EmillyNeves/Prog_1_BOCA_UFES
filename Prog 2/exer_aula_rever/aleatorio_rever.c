#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void organizaLista(int lista[1000], int qtd)
{
    int aux, i;

    for (i = 0; i < qtd; i++)
    {

        for (int j = i+1; j < qtd; j++)
        {
            if (lista[i] > lista[j])
            {
                aux = lista[i];
                lista[i] = lista[j];
                lista[j] = aux;
            }
        }
    }
}

int main()
{
    int lista[1000], qtd, qtdnum = 0;
    scanf("%d", &qtd);
    srand(time(NULL));
    for (int i = 0; i < qtd; i++)
    {
        lista[i] = rand() % 10;
        printf("%d ", lista[i]);
    }
    printf("\n");
    organizaLista(lista, qtd);

    for (int i = 0; i < qtd; i++)//ve quantas vezes o num aparece
    {

        for (int j = i; j < qtd; j++)
        {
            if (lista[i] == lista[j] && lista[j] != -1)
            {
                qtdnum++;
                if(j>i)
                lista[j] = -1;
            }
        }
        if (lista[i] != -1)
        printf("%d %d\n", lista[i], qtdnum);
        qtdnum=0;
    }

    return 0;
}