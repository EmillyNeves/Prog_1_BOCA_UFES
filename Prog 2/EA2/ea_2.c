#include <stdio.h>
int main()
{
    int num, aux1, aux2, soma = 0;

    scanf("%d", &num);
    aux1 = num;
    while (1)
    {
        aux2 = aux1 % 10;
        aux1 = aux1 / 10;
        aux2 = aux2 * aux2;
        soma += aux2;
        if (aux1 == 0 && soma > 9)
        {
            aux1 = soma;
            soma = 0;
        }
        if (aux1 == 0 && soma < 10)
        {
            break;
        }
    }
    if (soma == 1 || soma == 7)
    {
        printf("SIM");
    }
    else
        printf("NAO");

    return 0;
}