#include<stdio.h>
int calculaResultado(char c, int n1, int n2){
    if(c=='+')
    return n1+n2;
    if(c=='-')
    return n1-n2;
    if(c=='*')
    return n1*n2;
    if(c=='/')
    return n1/n2;
}
int main(){
    int resultado,n1, n2;
    char c;

    scanf("%d %d %c", &n1,&n2,&c);
    if(c!='*'&& c!='/'&&c!='+'&&c!='-'){
        printf("Invalido");
    }
    else{
    resultado = calculaResultado( c,n1, n2);
    printf("RESP:%d",resultado);
    }
    return 0;
}