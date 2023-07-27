#include <stdio.h>
void leVet(int tam, int vet[tam])
{
    int i;
    for (i = 0; i < tam; i++)
    {
        scanf("%d", &vet[i]);
    }
}
void imprimePares(int tam1, int vet1[tam1], int tam2, int vet2[tam2])
{
    printf("PARES:\n");
    int i, j;
    for (i = 0, j = 0; i < tam1; j++, i++)
    {
        printf("%d - %d\n", vet1[i], vet2[j]);
        if (j == tam2 - 1)
        {
            j = -1;
        }
    }
}
int main()
{
    int tam1, tam2;
    scanf("%d", &tam1);
    int vet1[tam1];
    leVet(tam1, vet1);

    scanf("%d", &tam2);
    int vet2[tam2];
    leVet(tam2, vet2);

    imprimePares(tam1, vet1, tam2, vet2);

    return 0;
}