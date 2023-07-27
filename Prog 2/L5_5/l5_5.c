#include <stdio.h>
int verificaVetor(int n, int num, int vet[n])
{
    int j, p = 0, pos = n;
    for (j = 0; j < n; j++)
    {
        if (num == vet[j] && p == 0)
        {
            pos = j;
            p++;
            break;
        }
    }
    return pos;
}

int main()
{
    int num, n, i;
    scanf("%d %d", &num, &n);
    int vet[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &vet[i]);
    }
    printf("RESP:%d", verificaVetor(n, num, vet));
    return 0;
}