#include<stdio.h>
int EhIgual(int a, int b){
    if(a==b)
    return 1;
    return 0;
}
int MaiorDigito(int num){
    int maior, aux = num, i=0;
    while(num>0){
        aux=num%10;
        if(i==0){
            i++;
            maior =aux;
        }
        if(maior<aux)
        maior = aux;
        num = num/10;
    }
    return maior;
}
int main(){
    int n1, n2, qtd = 0;
    while(scanf("(%d,%d)",&n1,&n2)==2){
        if(EhIgual(MaiorDigito(n1),MaiorDigito(n2)))
        qtd++;
    }
    printf("COUNT:%d",qtd);

    return 0;
}