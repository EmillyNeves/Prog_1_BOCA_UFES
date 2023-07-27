#include <stdio.h>
int main()
{
    int l, c, i, j;

    printf("Movimentos de uma Torre no xadrez!\n");
    printf("Digite a linha em que a Torre se encontra:\n");
    scanf("%d", &l);
    printf("Digite a coluna em que a Torre se encontra:\n");
    scanf("%d", &c);
    printf("Movimentos possíveis:\n");

    printf("    1 2 3 4 5 6 7 8\n");
    printf("   ----------------\n");
    for (i = 1; i <= 8; i++)
    {
        printf("%d |", i);
        for (j = 1; j <= 8; j++)
        {
            if (i == l || j == c)
                printf(" x");
            else
                printf(" -");
        }
        printf("\n");
    }

    return 0;
}