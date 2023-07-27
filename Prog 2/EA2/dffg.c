#include<stdio.h>
int main(){
    int aux=0, soma=0, n;
        scanf("%d", &n);

    while (1)
    {
        aux = n;
        soma += (aux%10)*(aux%10);
        n/=10;

        if(n == 0 && soma>9){
            n = soma;
            soma = 0;
        }else if(n == 0 && soma<10){
            if(soma==1|| soma==7)
            printf("SIM\n");
            else
            printf("NÃO\n");
            break;
        }
    }
    
    return 0;
}