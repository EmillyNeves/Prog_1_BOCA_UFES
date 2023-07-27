#include<stdio.h>
void verificaOrdem(int qtd, int vet[qtd]){
    int i, cre=0, des=0, ant;

    for(i=0;i<qtd;i++){
        if(i!=0){
            if(vet[i]<ant)
            des++;
            else if(vet[i]>ant)
            cre++;
        }
        ant = vet[i];
    }
    if(cre==0 && des==0)
    printf("CRESCENTE&DECRESCENTE");
    else if(cre!=0 && des!=0)
    printf("DESORDENADO");
    else if(cre!=0)
    printf("CRESCENTE");
    else
    printf("DECRESCENTE");
}
int main(){
    int qtd, i;
    scanf("%d", &qtd);
    int vet[qtd];

    for(i=0;i<qtd;i++){
        scanf("%d", &vet[i]);
    }
    verificaOrdem(qtd,vet);

    return 0;
}