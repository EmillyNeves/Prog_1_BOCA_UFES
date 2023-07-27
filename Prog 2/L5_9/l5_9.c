#include<stdio.h>
void InverteVetor(int * vet, int n){
    int i,j;
    for(i=0;i<n;i++){
        if(n!=1&& i<n/2 ){
           j= vet[i];
           vet[i]=vet[n-i-1];
           vet[n-i-1]=j;
        }
    }
}
void ImprimeDadosDoVetor(int vet[], int qtd){
 InverteVetor(vet, qtd);
    int i;
    printf("{");
    for(i=0;i<qtd;i++){
        printf("%d",vet[i]);
        if(i<qtd-1)
        printf(", ");
    }
        printf("}");
}int main(){
    int n; 
    scanf("%d", &n);
    int i,vet[n];
    for(i=0;i<n;i++){
        scanf("%d",&vet[i]);
    }
    ImprimeDadosDoVetor(vet, n);

    
    return 0;
}