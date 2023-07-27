#include<stdio.h>
int main(){
int lem, senha,qtdD, aux, maior=0, d1, d2, d3, d4, d5;
scanf("%d %d", &lem,&qtdD);

        d5=lem%10; 
        d4=(lem/10)%10;
        d3=(lem/100)%10;
        d2=(lem/1000)%10;
        d1=lem/10000;
    
    if(d2>d1){
        aux=d1;
        d1=d2;
        d2=aux;
    } 
    if(d3>d2){
        aux=d2;
        d2=d3;
        d3=aux;
    }
    if(d4>d3){
        aux=d3;
        d3=d4;
        d4=aux;
    }
    if(d5>d4){
        aux=d4;
        d4=d5;
        d5=aux;
    }
    if(d2>d1){
        aux=d1;
        d1=d2;
        d2=aux;
    } 
    if(d3>d2){
        aux=d2;
        d2=d3;
        d3=aux;
    }
    if(d4>d3){
        aux=d3;
        d3=d4;
        d4=aux;
    }
    if(d2>d1){
        aux=d1;
        d1=d2;
        d2=aux;
    } 
    if(d3>d2){
        aux=d2;
        d2=d3;
        d3=aux;
    }
    if(d2>d1){
        aux=d1;
        d1=d2;
        d2=aux;
    } 
    maior= d1*10000+d2*1000+d3*100+d4*10+d5;

    if(qtdD==1)
    senha = (maior-lem)/10000;
    else if(qtdD==2)
    senha = (maior-lem)/1000;
    else if(qtdD==3)
    senha=(maior-lem)/100;
    else if(qtdD==4)
    senha= (maior-lem)/10;
    else
    senha=(maior-lem);

    if (qtdD == 1)
        printf("%d", senha);
    else if (qtdD == 2)
        printf("%.2d", senha);
    else if (qtdD == 3)
        printf("%.3d", senha);
    else if (qtdD == 4)
        printf("%.4d", senha);
    else
        printf("%.5d", senha);

    return 0;
}