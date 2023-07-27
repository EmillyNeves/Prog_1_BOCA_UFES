#include<stdio.h>
int main(){
    int qtd,n, menor, posMenor, i;
    scanf("%d",&qtd);
    if(qtd>0){
    for(i=0;i<qtd;i++){
        scanf("%d",&n);
        if(i==0){
            menor = n;
            posMenor = i;
        }
        if(n<menor){
            menor = n;
            posMenor =i;
        }
    }
    printf("POS:%d",posMenor+1);
    }
    
    return 0;
}