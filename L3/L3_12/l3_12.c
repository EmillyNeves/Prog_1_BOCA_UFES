#include<stdio.h>
int somadosdigitos(int n){
    int soma=0, aux = n;
    while(aux>0){
        soma+=aux%10;
        aux/=10;
    }
    return soma;
} 
void parImpar(int n){
    if(n%2==0)
    printf(" Par");
    else
    printf(" Impar");
}
void valorPrimo(int n){
    int i=0, dev;
    for(dev=1; dev<=n;dev++){
        if(n%dev==0)
        i++;
    }
    if(i==2)
    printf(" Primo\n");
    else
    printf(" Nao e primo\n");
}

int main() {
    int n, aux;
    scanf("%d", &n);
    aux = n;
    while(1){
    aux = somadosdigitos(aux);
    printf("%d", aux);
    parImpar(aux);
    valorPrimo(aux);
    if(aux<10)
    break;
    }
    return 0;
}