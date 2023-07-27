#include <stdio.h>
#include <math.h>
typedef struct
{
    float x;
    float y;
} tPonto;
float verificaDistancia(tPonto ponto1, tPonto ponto2)
{
    float dist;

    dist = sqrt(pow(ponto1.x - ponto2.x, 2) + pow(ponto1.y - ponto2.y, 2));

    return dist;
}
int main()
{
    int i, n;
    tPonto ponto1, ponto2, ponto;
    float dist1, dist2;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%f %f %f %f %f %f", &ponto.x, &ponto.y, &ponto1.x, &ponto1.y, &ponto2.x, &ponto2.y);

        dist1 = verificaDistancia(ponto, ponto1);
        dist2 = verificaDistancia(ponto, ponto2);
        if (dist1 == dist2)
            printf("EQUIDISTANTE\n");
        else if (dist1 < dist2)
            printf("INICIO\n");
        else
            printf("FIM\n");
    }

    return 0;
}