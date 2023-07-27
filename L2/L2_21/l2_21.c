#include<stdio.h>
int main(){
    int qtd, i;
    char c;

    scanf("%d", &qtd);
    int num[qtd];
    for(i=0; i<qtd;i++){
        scanf("%d ", &num[i]);
    }
    scanf("%*c");

    while(1){
        scanf("%c", &c);
        if(c=='%'){
        scanf("%d",&i);
        if(i<1  || i>qtd){
           printf("ERRO");
        }
        else
        printf("%d",num[i-1]);
        continue;
        }
        if(c=='"')
        break;
        printf("%c", c);
    }   
    return 0;
}