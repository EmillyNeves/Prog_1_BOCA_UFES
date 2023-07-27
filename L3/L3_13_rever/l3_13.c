#include<stdio.h>
int CalculaValorPalavra();
int EhPrimo(int n){
    int i=0, dev;
    for(dev=1; dev<=n;dev++){
        if(n%dev==0)
        i++;
        if(i>2||n==1||n==0)
        return 0;
    }
    return 1;
}
int ProximoPrimo(int n){
    while(!EhPrimo(n)){
        n++;
    }
    return n;
}
int valorLetra(char c){
    int valor=0;
    if(c>='a'&& c<='z'){
        valor= c-96;
    }
    else if(c>='A'&& c<='Z'){
        valor = c- 38;
    }
    return valor;
}
int main(){
    char c;
    int soma=0;

    while(scanf("%c", &c)==1){

        if(c!='\n'){
            soma +=valorLetra(c);
        }
        else{
            if(EhPrimo(soma))
                printf("E primo\n");
            else{
                soma = ProximoPrimo(soma);
                printf("Nao e primo");
                printf(" %d\n", soma);
            }
        soma = 0;
        }
    }

    return 0;
}