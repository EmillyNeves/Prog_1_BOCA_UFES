#include<stdio.h>
void ordenaVetor(int n, int vet[]){
int aux, i, j;
     for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(vet[i]<vet[j]){
                aux=vet[i];
                vet[i]=vet[j];
                vet[j]=aux;
            }
        }
    }
}

void verificaLista(int n, int vet[]){
int i, j, qtd=0, c=0, num;

    for(i=0;i<n;i++){
        num=vet[i];
        qtd=0;
        for(j=0;j<n;j++){
            if(num==vet[j]&& nu,){
            qtd++;
            if(qtd>1){
                vet[j]=-1;
                vet[i]=-1;
            }
            }
        }
    }
        ordenaVetor(n,vet);
        for(i=0;i<n;i++){
            if(vet[i]!=-1){
                printf("%d ",vet[i]);
                c++;
            }
        }
        if(c==0){
        printf("NENHUM");
    }
}
int main(){
    int n,i;
    scanf("%d",&n);
    int vet[n];
    
    for(i=0;i<n;i++){
        scanf("%*c%d",&vet[i]);
    }
  verificaLista(n, vet);


}