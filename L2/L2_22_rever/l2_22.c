#include<stdio.h>
int main(){
    int n, soma=0, aux;
    scanf("%d", &n);
    aux = n;
    printf("RESP:");

    while(1){
        soma += aux%10;
        aux = aux/10;
        if(soma<10 && aux==0){
            printf("%d", soma);
            break;
        }
        if(soma>9 && aux ==0){
            aux = soma;
            soma = 0;
        }
    }
    return 0;
}