#include<stdio.h>
int EhPalindromo(int num){
    int aux=num, soma=0;
    while(1){
        soma = (10*soma)+(aux%10);
        aux/=10;
        if(aux==0)
        break; 
    }
    if(num == soma)
    return 1;
    return 0;
}
int main(){
    int num;

    while(scanf("%d\n",&num)==1){
        if(EhPalindromo(num))
        printf("S\n");
        else
        printf("N\n");
    }
    return 0;
}