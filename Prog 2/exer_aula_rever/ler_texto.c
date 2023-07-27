#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char texto[200];
    int i, j = 0;

    while (scanf("%c", &texto[i]) == 1)
    {
        if (texto[i] >= 'a' && texto[i] <= 'z')
            texto[i] = texto[i] - 32;
        i++;
    }
    for (; j < i; j++)
    {
        printf("%c", texto[j]);
    }
    return 0;
}