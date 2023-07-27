#include<stdio.h>
int EhIgual(int a, int b){
    if(a==b)
    return 1;
    return 0;
}
int InverteNumero(int num){
    int aux = num, soma=0;
    while(1){
        aux%=10;
        soma = soma*10 + aux;
        num /=10;
        aux= num;
        if(num==0)
        break;
    }
    return soma;
}

int main(){
    int qtd=0;
    int n;
    char c;
    while(1){
        scanf("%d%c", &n,&c);
        if(EhIgual( n,InverteNumero(n)))
        qtd++;
        if(c!=' ')
        break;
    }
    printf("COUNT:%d",qtd);
    return 0;
}