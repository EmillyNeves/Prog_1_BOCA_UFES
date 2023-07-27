#include<stdio.h>
int ehLetra(char c){
    if(c>='a'&&c<='z'|| c>='A'&&c<='Z')
    return 1;
    return 0;
}
int ehNumero(char c){
    if(c>='0'&&c<='9')
    return 1;
    return 0;
}
void verificaValidade(char c1, char c2, char c3, char c4, char c5, char c6, char c7){
    int n=0, l=0;
    if(!ehLetra(c1))
    l++;
    if(!ehLetra(c2))
    l++;
    if(!ehLetra(c3))
    l++;
    if(!ehNumero(c4))
    n++;
    if(!ehNumero(c5))
    n++;
    if(!ehNumero(c6))
    n++;
    if(!ehNumero(c7))
    n++;

    if(n==0){
        if(l==0)
        printf("Codigo valido!");
        else
        printf("Codigo invalido!Problema nas letras!");
    }else{
        if(l==0)
        printf("Codigo invalido!Problema nos numeros!");
        else
        printf("Codigo invalido!Problema nas letras e nos numeros!");
    }

}
int main(){
    int n=0, l=0;
    char c1, c2, c3, c4, c5, c6, c7;
    scanf("%c%c%c-%c%c%c%c", &c1, &c2, &c3,&c4, &c5, &c6, &c7);
    verificaValidade(c1, c2,c3,  c4, c5, c6,c7);
   

    return 0;
}