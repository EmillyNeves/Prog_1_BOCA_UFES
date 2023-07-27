#include<stdio.h>
int EhLetra(char c){
    if(c>='a'&&c<='z'||c>='A'&&c<='Z')
    return 1;
    return 0;
}
int EhVogal(char c){
    if(c=='A'||c=='a'||c=='e'||c=='E'||c=='i'||c=='I'||c=='i'||c=='o'||c=='O'||c=='u'||c=='U')
    return 1;
    return 0;
}
int ReconheceSimbolo(char c){
    char simb, i;
    int n=0;
    if(c=='*'){
        scanf("%c%c",&simb,&i);
        if(i!='*'|| simb=='*')
        n=-1;
        while(1){
            if(i=='*'|| simb=='*')
            break;
            scanf("%c",&i);
        }
        if(n==0){
            if(simb=='1'||simb=='2'||simb=='3'){
            n = simb-'0';
            return n;
            }
            else
            return -1;
        }
        else
        return -1;
    }
    else
    return 0;
}
int main(){
    int qtdV=0, qtdC=0, n;
    char c;
    while(1){
        scanf("%c",&c);
        n = ReconheceSimbolo(c);
        if(n==0&&EhLetra(c)||c=='.'){
            printf("%c",c);
            if(EhVogal(c))
            qtdV++;
            else
            qtdC++;
        }
        else if(n==-1)
            printf("*ERRO*");
        else if(n==1){
            printf("*L:%d V:%d C:%d*",qtdC+qtdV, qtdV, qtdC);
            qtdC = qtdV = 0;
        }else if(n==2){
            printf("*V:%d*",qtdV);
            qtdV = 0;
        }
        else if(n==3){
          printf("*C:%d*",qtdC);
          qtdC = 0;
        }
        if(c=='.')
        break;
    }

    return 0;
}