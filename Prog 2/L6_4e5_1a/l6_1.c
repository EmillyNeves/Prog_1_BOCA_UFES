#include<stdio.h>

typedef struct{
int idMensagem;
int idPacote;
char tam;
char menssagem[9];
int erro;
}tPacote;

tPacote LePacote(tPacote pacote){
int i;
    scanf("%d %d %c", &pacote.idMensagem,&pacote.idPacote,&pacote.tam);
    for(i=0;i<9;i++){
         scanf("%c", &pacote.menssagem[i]);
    }
    scanf(" %d", &pacote.erro);
   
    return pacote;
} 
void ImprimePacote(tPacote pacote){
int i, tam = pacote.tam-'0';

    printf("PCT: %d,%d,%c,", pacote.idMensagem, pacote.idPacote, pacote.tam);
    for(i=0;i<tam;i++){
        printf("%c", pacote.menssagem[i]);
    }
    printf(",%d\n",pacote.erro);
}
int main(){
int qtd, i;
scanf("%d", &qtd);
tPacote pacotes[qtd];
    for(i=0;i<qtd;i++){
        pacotes[i]= LePacote(pacotes[i]);
        ImprimePacote(pacotes[i]);
    }
    return 0;
}