#include<stdio.h>
void OrdenaCrescente(int vet[], int qtd){
    int j,aux, i;
    for(i=0;i<qtd;i++){
        for(j=0;j<qtd;j++){
            if(vet[i]<vet[j]){
                aux=vet[i];
                vet[i]=vet[j];
                vet[j]=aux;

            }
        }
    }
}

void ImprimeDadosDoVetor(int vet[], int qtd){
    OrdenaCrescente(vet, qtd);
    int i;
    printf("{");
    for(i=0;i<qtd;i++){
        printf("%d",vet[i]);
        if(i<qtd-1)
        printf(", ");
    }
    printf("}");
}
int main(){
    int i, n;
    scanf("%d", &n);
    int vet[n];
    for(i=0;i<n;i++){
        scanf("%d",&vet[i]);
    }
    ImprimeDadosDoVetor( vet, n);


    return 0;
}