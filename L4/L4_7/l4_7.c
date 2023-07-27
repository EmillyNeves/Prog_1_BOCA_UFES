#include <stdio.h>
typedef struct
{
    float x;
    float y;
} tPonto;
typedef struct
{
    tPonto ponto1;
    tPonto ponto2;
} tReta;
int verificaQuadrante(tPonto ponto)
{
    if (ponto.x == 0 && ponto.y == 0)
        return 0;
    if (ponto.x > 0)
    {
        if (ponto.y > 0)
        {
            return 1;
        }
        else
            return 4;
    }
    else
    {
        if (ponto.y > 0)
        {
            return 2;
        }
        else
            return 3;
    }
}
int main()
{
    int i, n;
    tReta reta;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {

        scanf("%f %f %f %f", &reta.ponto1.x, &reta.ponto1.y, &reta.ponto2.x, &reta.ponto2.y);
        if (verificaQuadrante(reta.ponto1) == verificaQuadrante(reta.ponto2))
            printf("MESMO\n");
        else
            printf("DIFERENTE\n");
    }

    return 0;
}