#include <stdio.h>
void ehmaior(int tam, int id0, int id1, int id2, int id3)
{
    int aux, i = 0;
    if (id2 > id3)
    {
        aux = id2;
        id2 = id3;
        id3 = aux;
    }
    if (id1 > id2)
    {
        aux = id1;
        id1 = id2;
        id2 = aux;
    }
    if (id0 > id1)
    {
        aux = id0;
        id0 = id1;
        id1 = aux;
    }
    if (id2 > id3)
    {
        aux = id2;
        id2 = id3;
        id3 = aux;
    }
    if (id1 > id2)
    {
        aux = id1;
        id1 = id2;
        id2 = aux;
    }
    if (id2 > id3)
    {
        aux = id2;
        id2 = id3;
        id3 = aux;
    }

    if (id0 != -1)
    {
        printf("%d", id0);
        i++;
        if (i < tam)
            printf(", ");
    }
    if (id1 != -1)
    {
        printf("%d", id1);
        i++;
        if (i < tam)
            printf(", ");
    }
    if (id2 != -1)
    {
        printf("%d", id2);
        i++;
        if (i < tam)
            printf(", ");
    }
    if (id3 != -1)
    {
        printf("%d", id3);
        i++;
    }
}

int main()
{
    int n, id;
    scanf("%d %d", &n, &id);

    int id0 = -1, id1 = -1, id2 = -1, id3 = -1, aux, i = 0;
    aux = n;
    while (aux > 0)
    {
        aux = aux / 10;
        i++;
    }

    if (i == 1)
    { // 9
        id0 = n;
    }
    else if (i == 2)
    { // 99
        id0 = n / 10;
        id1 = n % 10;
    }
    else if (i == 3)
    { // 999
        id0 = n / 100;
        id1 = (n / 10) % 10;
        id2 = n % 10;
    }
    else if (i == 4)
    { // 9999
        id0 = n / 1000;
        id1 = (n / 100) % 10;
        id2 = (n / 10) % 10;
        id3 = n % 10;
    }

    if (id == 0)
        id0 = -1;
    else if (id == 1)
        id1 = -1;
    else if (id == 2)
        id2 = -1;
    else if (id == 3)
        id3 = -1;
    if (i == 1 && id == 0)
        printf("VOID");
    else
    {
        ehmaior(i, id0, id1, id2, id3);
    }
    return 0;
}