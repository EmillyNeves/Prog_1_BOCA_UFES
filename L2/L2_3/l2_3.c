#include<stdio.h>
int main(){
    int qtdI=0, qtdP=0, maior, menor, i, qtd, num;
    float media, soma=0;

    scanf("%d", &qtd);

    for(i=0;i<qtd;i++){
        scanf("%d", &num);
        if(i==0){
        maior = num;
        menor = num;
        }
        if(num>maior)
        maior=num;
        if(num<menor)
        menor = num;

        if(num%2==0)
        qtdP++;
        else
        qtdI++;
        soma+=num;
    }
        media = soma/qtd*1.0;

    printf("%d %d %d %d %f", maior, menor, qtdP, qtdI, media);
}