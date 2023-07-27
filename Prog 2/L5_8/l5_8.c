#include<stdio.h>
void TrocaParEImpar(int vet[], int qtd){
int i,j;
for(i=0;i<qtd;i++){
    if((i%2)==0){
        if(i+1<qtd){
        j=vet[i];
        vet[i]=vet[i+1];
        vet[i+1]=j;}
    }
}
}
void ImprimeDadosDoVetor(int vet[], int qtd){
    TrocaParEImpar(vet, qtd);
    int i;
    printf("{");
    for(i=0;i<qtd;i++){
        printf("%d",vet[i]);
    if(vet[i]!=vet[qtd-1])
    printf(", ");
    }
    printf("}");

} 
int main(){
    int n;
    scanf("%d", &n);
    int i,vet[n];
for(i=0;i<n;i++){
    scanf("%d",&vet[i]);
}
ImprimeDadosDoVetor(vet,n);

    return 0;
}