#include<stdio.h>
int maior(int num){
    int maior=0, aux,d1, d2, d3, d4, d5;

    d1 = num/10000; //separa algarismos
    d2 = (num/1000)%10;
    d3 = (num/100)%10;
    d4 = (num/10)%10;
    d5 = num%10;

    if(d1<d2){ //ordena do maior pro menor
        aux = d1;
        d1 = d2;
        d2 = aux;
    }
    if(d2<d3){
        aux = d2;
        d2 = d3;
        d3 = aux;
    }
    if(d3<d4){
        aux = d3;
        d3 = d4;
        d4 = aux;
    }
    if(d4<d5){
        aux = d4;
        d4 = d5;
        d5 = aux;
    }
    if(d1<d2){
        aux = d1;
        d1 = d2;
        d2 = aux;
    }
    if(d2<d3){
        aux = d2;
        d2 = d3;
        d3 = aux;
    }
    if(d3<d4){
        aux = d3;
        d3 = d4;
        d4 = aux;
    }
    if(d1<d2){
        aux = d1;
        d1 = d2;
        d2 = aux;
    }
    if(d2<d3){
        aux = d2;
        d2 = d3;
        d3 = aux;
    }
    if(d1<d2){
        aux = d1;
        d1 = d2;
        d2 = aux;
    }
    maior = d1*10000 + d2*1000 + d3*100 + d4*10+ d5; //monta numero

    return maior;
}
int main(){
    int lem, qtd,senha, i;
    scanf("%d %d", &lem,&qtd);

    senha = maior(lem) - lem; 
    i =5;
        while(1){
            if(i==qtd)
            break;
            i--;
            senha /=10;
        }

    printf("%d",senha);
    return 0;
}