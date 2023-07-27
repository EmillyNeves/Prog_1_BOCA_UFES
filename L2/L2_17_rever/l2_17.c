#include<stdio.h>
int ehMinusculo(char c){
    if(c>='a'&&c<='z')
    return 1;
    return 0;
}
void codifica(int n){
    char c;
    while(1){
        scanf("%c", &c);
        if(ehMinusculo(c)){
            c=c+n;
            while(c>'z'){
                    c -=26;
            }
        }
        printf("%c", c);
        if(c=='.')
        break;
    }
}
void decodifica(int n){
    char c;
     while(1){
        scanf("%c", &c);
        if(ehMinusculo(c)){
            c=c-n;
            while(c<'a'){
                c +=26;
            }
        }
        printf("%c", c);
        if(c=='.')
        break;
    }
}
int main (){
    int n1, n2;
    scanf("%d %d ", &n1, &n2);

    if(n2>26){
        n2= n2%26;
    }
    if(n1==1){
        codifica(n2);
    }
    else if(n1==2){
        decodifica(n2);
    }
    else
    printf("Operacao invalida.");

    return 0;
}