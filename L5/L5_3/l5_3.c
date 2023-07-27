#include<stdio.h>
int calculaMaiorDif(int qtd,int vet[qtd]){
    int i, maior,ant, dif=0;
    if(qtd<2)
    return -1;
    for(i=0;i<qtd;i++){
        
        if(i!=0){
            dif = ant- vet[i];
            if(dif<0)
            dif*=-1;
            if(i==1)
            maior = dif;
            if(dif>maior)
            maior = dif;
        }
        ant = vet[i];
    }
    return maior;
}
void verificapPares(int qtd, int vet[qtd],int maior)
{
    int i, ant, dif = 0, n1, n2;
        for (i = 0; i < qtd; i++)
        {

            if (i != 0)
            {
                dif = ant - vet[i];
                if (dif < 0)
                    dif *= -1;
                if(dif == maior)
                printf(" (%d %d)", i-1, i);
            }
            ant = vet[i];
        }
}
int main(){
    int n, i, maior;
    scanf("%d",&n);
    int vet[n];

    for(i=0;i<n;i++){
        scanf("%d", &vet[i]);
    }
    maior = calculaMaiorDif(n,vet);

    if(maior==-1)
    printf("IMPOSSIVEL");
    else
    verificapPares(n, vet,maior);

    return 0;
}