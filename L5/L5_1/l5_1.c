#include<stdio.h>
#include<math.h>
float calculaMedia(int soma, int qtd){
    
    return soma*1.0/qtd;
}
float calculaDesv( int qtd, int vet[qtd], float media){
    int i;
    float desv=0;
    for(i=0;i<qtd;i++){
        desv+= pow(vet[i]-media,2);
    }
    desv = sqrt(1.0/qtd*desv);
    return desv;
}
int qtdAcima(int qtd, int vet[qtd], float media){
    int i, j=0;
    for(i=0;i<qtd;i++){
        if(vet[i]>media)
        j++;
    }
    return j;
}
int qtdReprovados(int qtd, int vet[qtd]){
    int i, j=0;
    for(i=0;i<qtd;i++){
        if(vet[i]<70)
        j++;
    }
    return j;
}
int main(){
    int qtd,soma=0,i,maior,menor, qtdA=0, qtdR=0;
    float media, desv;
    scanf("%d ",&qtd);
    int num[qtd];

    for(i=0;i<qtd;i++){
        scanf("%d",&num[i]);
        soma+=num[i];
        if(i==0){
            menor = maior =num[i];
        }
        else{
            if(menor>num[i])
            menor = num[i];
            if(maior<num[i])
            maior = num[i];
        }
    }
        media = calculaMedia(soma, qtd);
        desv = calculaDesv( qtd, num, media);
        qtdA = qtdAcima(qtd, num,media);
        qtdR = qtdReprovados(qtd, num);
    printf("MENOR:%d, MAIOR:%d, MEDIA:%.2f, STD:%.2f, ACIMA_MEDIA_CONC:%d, REPROV:%d", menor, maior, media, desv, qtdA, qtdR);
    return 0;
}