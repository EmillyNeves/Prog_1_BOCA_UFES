#include <stdio.h>
int verificaPrimo(int num)
{
    int i, div;
    for (i = 1, div = 0; i <= num; i++)
    {
        if ((num % i) == 0)
            div++;
    }
    if (div == 2)
        return 1;
    return 0;
}

int ehPalindromo(int num)
{
    int aux1 = 0, aux2 = num;
    while (aux2 > 0)
    {
        aux1 = (num % 10) + aux1 * 10;
        aux2 = aux2 / 10;
    }
    if (aux1 == num)
        return 1;
    return 0;
}

int main()
{
    int num;
    scanf("%d", &num);
    if (ehPalindromo(num) && verificaPrimo(num))
        printf("É palindromo e primo");
    else if (verificaPrimo(num))
        printf("É primo\n");
    else if (ehPalindromo(num))
        printf("É palindromo\n");

    return 0;
}