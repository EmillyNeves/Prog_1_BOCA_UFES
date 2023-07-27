#include<stdio.h>
int ehPar(int n){
    if(n%2==0)
    return 1;
    return 0;
}
int main(){
    int n, i,qtd,soma=0;

    scanf("%d",&qtd);
    for(i=0;i<qtd;i++){
        scanf("%d",&n);
        if((ehPar(n)&&ehPar(i))||(!ehPar(n)&&!ehPar(i))){
            soma+=n;
        }
    }
    printf("SOMA:%d",soma);


    return 0;
}