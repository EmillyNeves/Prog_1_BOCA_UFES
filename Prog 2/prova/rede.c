#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main()
{
    int linha, coluna, semente, mult;

    scanf("%d %d %d\n", &linha, &coluna, &semente);
    int x[linha], y[coluna];
    int w[linha][coluna];

    for (int i = 0; i < linha; i++)
    {
        scanf("%d", &x[i]);
    }
    srand(semente);
    for (int i = 0; i < linha; i++) // gerando numero aleatorio
    {
        for (int j = 0; j < coluna; j++)
        {
            w[i][j] = rand() % (MAX + 1);
        }
    }

    // multiplicação
    for (int j = 0; j < coluna; j++)
    {
        mult = 0;
        for (int i = 0; i < linha; i++)
        {
            mult += x[i] * w[i][j];
        }
        y[j] = mult;
    }

    for (int i = 0; i < coluna; i++)
    {
        printf("%d", y[coluna]);
    }

    return 0;
}