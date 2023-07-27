#include<stdio.h>
void leVetor(int n, int vet[n]){
    int i;

    for(i=0;i<n;i++){
        scanf("%d",&vet[i]);
    }
}
int verificaVetor(int tamA, int tamB, int vetA[tamA], int vetB[tamB]){
    int qtd=0,i,j;
    for(i=0;i<tamA;i++){
        for(j=0;j<tamB;j++){
            if(vetA[i]==vetB[j]){
                qtd++;
            }
        }
    }
    return qtd;
}


int main(){

    int tamA, tamB;
    scanf("%d",&tamA);
    int a[tamA];
    leVetor(tamA, a);
    scanf("%d",&tamB);
    int b[tamB];
    leVetor(tamB, b);

    if(tamA==(verificaVetor(tamA, tamB, a, b)))   
    printf("TODOS");
    else if(verificaVetor(tamA, tamB, a, b)== 0)
    printf("NENHUM");
    else
    printf("PARCIAL");

    return 0;
}