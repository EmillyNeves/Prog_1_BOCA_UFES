#include <stdio.h>
#include <math.h>
typedef struct
{
    float x;
    float y;
} tPonto;
float verificaDistancia(tPonto ponto1, tPonto ponto2){
    float dist;

    dist = sqrt(pow(ponto1.x-ponto2.x,2) + pow(ponto1.y-ponto2.y,2));

    return dist;
}
int main()
{
    int i, n;
    tPonto ponto1, ponto2;
    float dist;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%f %f", &ponto1.x, &ponto1.y);
        if(i==0){
        ponto2 = ponto1;
        printf("-\n");
        continue;
        }
        printf( "%.2f\n",verificaDistancia(ponto1, ponto2));
        ponto2 = ponto1;
    }

    return 0;
}