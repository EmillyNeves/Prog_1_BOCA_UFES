#include<stdio.h>
int EhFinalDaLista(int buraco){
    if(buraco==-1)
    return 1;
    return 0;
}
int EcontraMaiorBuraco(){
    int buraco, maior=-1, i=0;
      while(1){
        scanf("%d",&buraco);
        if(EhFinalDaLista(buraco))
        break;
        if(i==0){
            i++;
            maior = buraco;
        }
        else if(buraco>maior)
        maior = buraco;
    }
    return maior;
}
int ContaEsferasGrandes(int maiorBuraco){
    int bola, qtd =0;
    while(1){
        scanf("%d",&bola);
        if(EhFinalDaLista(bola))
        break;
        if(bola>=maiorBuraco)
    
        qtd++;
    }
    return qtd;
}
int main(){
    int qtdE=0, maiorB;
    maiorB = EcontraMaiorBuraco();
    qtdE = ContaEsferasGrandes(maiorB);
    printf("QTD:%d\n",qtdE);
    return 0;
}