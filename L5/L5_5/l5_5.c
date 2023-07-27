#include<stdio.h>
int main(){
    int qtd, pos, n, i;
    scanf("%d %d",&n,&qtd);
    int vet[qtd];
    pos = qtd;
    for(i=0;i<qtd;i++){
        scanf("%d",&vet[i]);
        if(vet[i]==n && pos ==qtd){
        pos = i;
        }
    }
    printf("RESP:%d",pos);

    return 0;
}