#include<stdio.h>
#define P1 10
#define P1 10
typedef struct{

int qtd;
char id[qtd][4];
int votoP[qtd];
int votoM[qtd];

}tElecao;

void contbilizaVotos(tElecao eleicao){
int p1=0, p2=0, p3 =0, m1=0,m2=0, m3=0, nuloP=0, nuloM=0, i=0;

    for(;i<qtd;i++){
        if()
    }


}
int verificaId(tElecao eleicao){
int i, j;
    for(i=0;i<eleicao.qtd){
        if(i+1<eleicao.qtd){
            for(j=i+1;j<eleicao.qtd;i++){
                if(i==j)
                return 0;
            }
        }
    }
    return 1;
}

int main(){
tElecao eleicao;
int i=0, qtdV=0; 

    scanf("%d",&eleicao.qtd);
    while(1){//le as entradas
        qtdV++;
        scanf("\n%s", eleicao.id[i]);
        if(eleicao.id[i]=='P' || qtdV>qtd)
        break;
        scanf("%s", eleicao.votoP[i]);
        scanf("%s", eleicao.votoM[i]);    
        i++;
    }
    if(!verificaId(eleicao)|| qtdV>qtd)//verifica validade
    printf("ELEICAO ANULADA");
    else{


    }

    return 0;
}