#include<stdio.h>
int QtdDebitoPlaca(int presc){
    int deb, anos, total=0;
    char c;
    while(1){//le debito
        scanf("%c%d:%d)",&c,&deb,&anos);
        if(c=='\n')
        break;
        if(anos<=presc)
        total+=deb;    
    }
    return total;
}
int MaiorDebitoCidade(){
    int maior=0, presc,i=0, deb;
    char c1, c2, c3, m1, m2 , m3;

    scanf("%d\n", &presc);

    while(1){
    scanf("%c%c%c",&c1,&c2,&c3);
    if(c1=='F'&& c2=='I'&& c3=='M')
    break;
    deb = QtdDebitoPlaca(presc);
    if(i==0){//inicializa
        i++;
        maior = deb;
        m1= c1;
        m2 = c2;
        m3 = c3;
    }
    if(maior<deb){
    maior = deb;
    m1= c1;
    m2 = c2;
    m3 = c3;
    }
    }
    if(maior>0)
    printf("PLACA:%c%c%c DEBITO:%d\n",m1,m2,m3, maior);
    if(maior==0)
    printf("SEM DEBITO!\n");

    return maior;
}
int main(){
    int qtdC, i, presc, soma=0;
    scanf("%d\n",&qtdC);
    for(i=1; i<=qtdC;i++){
        soma += MaiorDebitoCidade();
    }
    printf("SOMA:%d\n", soma);

    return 0;
}