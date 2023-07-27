#include<stdio.h>
int ehNumero(char c){
    if(c<'0'||c>'9')
    return 0;
    return 1;
}
int ehLetra(char c){
    if(c>='A'&&c<='Z'||c>='a'&&c<='z')
    return 1;
    return 0;
}
int ehValido(char c){
    if(ehLetra(c)||ehNumero(c))
    return 1;
    return 0;
}
void verificaChar(char c1, char c2, char c3, char c4){
    if(!ehValido(c1)||!ehValido(c2)||!ehValido(c3)){
        printf("Invalido");
    }
    else{
        if((c1==c3 || c1==c3-32 || c1==c3+32) && (c2==c4 ||c2==c4-32||c2==c4+32))
        printf("IGUAIS");
        else
        printf("DIFERENTES");
    }
}
int main(){
    char c1, c2, c3, c4;
    int i;
    scanf("%c%c %c%c",&c1,&c2,&c3,&c4 );
    verificaChar(c1, c2, c3, c4);

    return 0;
}