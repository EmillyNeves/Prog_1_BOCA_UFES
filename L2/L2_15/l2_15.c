#include<stdio.h>
int main(){
    int num, somaN=0, somaP=0, qtdP=0, qtdN=0;

    while(scanf("%d", &num)==1){
        if(num<0){
            somaN+=num;
            qtdN++;
        }
        else if(num>0){
            somaP+=num;
            qtdP++;
        }
    }
    printf("%d %d %d %d", qtdN, qtdP, somaN, somaP);
    return 0;
}