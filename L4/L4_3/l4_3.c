#include <stdio.h>
typedef struct
{
    int d;
    int m;
    int a;
} tData;

void ImprimeData(tData data)
{
    printf("'%02d/%02d/%d'", data.d, data.m, data.a);
}
int ehBixesto(int a)
{
    if (a % 4 == 0 && a % 100 != 0)
    {
        return 1;
    }
    if (a % 100 == 0 && a % 400 == 0)
    {
        return 1;
    }
    return 0;
}
tData Ledata()
{
    tData data;
    scanf("%d %d %d\n", &data.d, &data.m, &data.a);

    return data;
}
int verificaQTDdias(tData data)
{
    if (data.m == 1)
        return 31;
    if (data.m == 2)
    {
        if (ehBixesto(data.a))
            return 29;
        else
            return 28;
    }
    if (data.m == 3)
        return 31;
    if (data.m == 4)
        return 30;
    if (data.m == 5)
        return 31;
    if (data.m == 6)
        return 30;
    if (data.m == 7)
        return 31;
    if (data.m == 8)
        return 31;
    if (data.m == 9)
        return 30;
    if (data.m == 10)
        return 31;
    if (data.m == 11)
        return 30;
    if (data.m == 12)
        return 31;
    return 1;
}
tData Incializa(tData data)
{

    if (data.m > 12)
    {
        data.m = 12;
    }
    else if (data.m < 1)
    {
        data.m = 1;
    }
    if (data.d > verificaQTDdias(data))
    {
        data.d = verificaQTDdias(data);
    }
    else if (data.d < 1)
    {
        data.d = 1;
    }
    return data;
}
int main()
{
    tData data;
    int i, n;
    scanf("%d\n", &n);
    for (i = 0; i < n; i++)
    {

        data = Ledata();
        data = Incializa(data);

        ImprimeData(data);
        if (ehBixesto(data.a))
            printf(":Bisexto\n");
        else
            printf(":Normal\n");
    }

    return 0;
}