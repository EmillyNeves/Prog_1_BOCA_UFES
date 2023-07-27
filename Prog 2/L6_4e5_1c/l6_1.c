#include<stdio.h>

typedef struct{
int idMensagem;
int idPacote;
char tam;
char menssagem[9];
int erro;
}tPacote;

typedef struct{
tPacote pacotes[101];

}tMensagens;

tPacote LePacote(tPacote pacote){
int i;
    scanf("%d %d %c", &pacote.idMensagem,&pacote.idPacote,&pacote.tam);
    for(i=0;i<9;i++){
         scanf("%c", &pacote.menssagem[i]);
    }
    scanf(" %d", &pacote.erro);
   
    return pacote;
} 

int verificaPacote(tPacote pacote){
int i, soma; 
    soma = pacote.idMensagem+pacote.idPacote+(pacote.tam-'0');

    for(i=0;i<pacote.tam-'0';i++){
        soma+=pacote.menssagem[i];
    }
    if(soma==pacote.erro)
    return 1;
    return 0;

}
void ImprimeMengagem(tPacote pacote){
int i, tam = pacote.tam-'0';

    if(verificaPacote(pacotes[i])){
       for(i=0;i<tam;i++){
        printf("%c", pacote.menssagem[i]);
    }
    printf("\n");
    }
        else
        printf("##FALHA##\n");

}
void verificaMensagem(int qtd, tPacote pacotes[]){
tMensagens menssagem;
int i, j=0, qtdM=0, a=0;
    while(qtdM<qtd){
      for(i=0;i<qtd;i++){
        a=0;
        for(j=0;j<qtd;j++){
            if(pacotes[i].idMensagem==pacotes[j].idMensagem){
            menssagem.pacotes[a]= pacotes[j];
            qtdM++;
            a++;
            }
        }
      }  
    }
}
int main(){
int qtd, i, v;
scanf("%d", &qtd);
tPacote pacotes[qtd];
    for(i=0;i<qtd;i++){
        pacotes[i]= LePacote(pacotes[i]);
        


    }
    return 0;
}