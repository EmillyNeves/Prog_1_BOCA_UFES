#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char letras[200];
    int num = 0, i = 0, j = 0, resul = 0;
    scanf("%s", letras);

    while (letras[i] != '\0')
    {
        if (i > 0)
            j = num;
        num = (letras[i] - 'A' + 1);
        resul = num + j * 26;
        i++;
    }
    printf("%d", resul);
}