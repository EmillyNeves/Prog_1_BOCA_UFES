#include<stdio.h>
int EhLetraMaiuscula(unsigned char c){
    if( c>='A'&& c<='Z')
        return 1;
        return 0;
}
int EhLetraMinuscula(unsigned char c){
    if(c>='a'&& c<='z')
    return 1;
    return 0;
}
int  EhLetra (char  c){
    if(EhLetraMaiuscula(c)|| EhLetraMinuscula(c))
    return 1;
    return 0;
}
unsigned char Codifica(unsigned char letra, int n){
    unsigned char aux;
    while(n>26){
        n%=26;
    }
    aux = letra+n;
    if(EhLetraMaiuscula(letra)){
        while(aux>'Z'){
        aux-=26;
        }
    }
    else{
        while(aux>'z'){
        aux-=26;
        }
    }
    letra = aux;
    return letra;
}
unsigned char Decodifica (unsigned char letra, int n){
    char aux;
    while(n>26){
        n%=26;
    }
    aux = letra-n;
    if(EhLetraMaiuscula(letra)){
        while(aux<'A'){
        aux+=26;
        }
    }
    else{
        while(aux<'a'){
        aux+=26;
        }
    }
    letra = aux;
    return letra;
}
int main(){
    int n1, n2;
    unsigned char c;
    scanf("%d %d ", &n1, &n2);

    if(n1!=1 && n1!=2)
        printf("Operacao invalida.");
    else{
        while(1){
            scanf("%c", &c);
            if(n1==1){
                    if(EhLetraMaiuscula(c)){
                        c = Codifica(c, (n2*2));
                    }
                    else if(EhLetraMinuscula(c)){
                        c = Codifica(c, n2);
                    }
                    printf("%c", c);
            }
            else if(n1==2){
                    if(EhLetraMaiuscula(c)){
                        c = Decodifica (c, (n2*2));
                    }
                    else if(EhLetraMinuscula(c)){
                        c = Decodifica (c, n2);
                    }
                    printf("%c", c);
            }
                if(c=='.')
                break;
        }
    }

    return 0;
}