#include <stdio.h>
typedef struct
{
    int x;
    int y;
} tPonto;
void ImprimePonto(tPonto ponto)
{
    printf("(%d,%d) ", ponto.x, ponto.y);
}
tPonto Simetrico(tPonto ponto)
{
    ponto.x *= -1;
    ponto.y *= -1;
    return ponto;
}
int verificaQuadrante(tPonto ponto){
    if(ponto.x==0||ponto.y==0)
    return 0;
    if(ponto.x>0){
        if(ponto.y>0){
            return 1;
        }
        else
        return 4;
    }
    else{
        if(ponto.y>0){
            return 2;
        }
        else
        return 3;
    }

}
int main()
{
    int i, n;
    tPonto ponto;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &ponto.x, &ponto.y);
        ImprimePonto(ponto);
        printf("%d ",verificaQuadrante(ponto));
        ponto = Simetrico(ponto);
        ImprimePonto(ponto);
        printf("%d\n",verificaQuadrante(ponto));
    }

    return 0;
}