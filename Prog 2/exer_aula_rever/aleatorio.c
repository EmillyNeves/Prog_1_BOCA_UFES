#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int a, b, i;
    scanf("%d %d", &a, &b);

    srand(time(NULL)); // faz com que toda vez os numeros aleatórios sejam diferentes
    for (int i = a; i < b; i++)
    {
        printf("%d ", a + rand() % (b - 1)); // rand%X é os numeros aleatóriios de 0 a x
                                             // para add até um certo intervalo >0 temos q somar
    }

    return 0;
}