#include<stdio.h>
void ImprimeDadosDoVetor(int vet[], int qtd){
    int i;
    printf("{");
    for(i=0;i<qtd;i++){
        printf("%d", vet[i]);
        if(i!=qtd-1)
        printf(", ");
    }
    printf("}");

}
void InverteVetor(int * vet, int qtd){
    int i, aux;
    for(i=0;i<qtd/2;i++){
        aux = vet[i];
        vet[i] = vet[qtd-1-i];
        vet[qtd-i-1] = aux;
    }
}
int main(){
    int qtd,i;
    scanf("%d",&qtd);
    int vet[qtd];

    for(i=0;i<qtd;i++){
        scanf("%d", &vet[i]);
    }
    InverteVetor(vet, qtd);
    ImprimeDadosDoVetor(vet, qtd);
    return 0;
}