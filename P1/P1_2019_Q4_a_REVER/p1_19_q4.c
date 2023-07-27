#include<stdio.h>
int validadeCPF(int p1, int p2, int p3, int p4){
    if(p1==p2 && p2==p3 && p3/10==p4)
    return 0;
    return 1;
}
int calculaSoma10( int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9){
   return ((c1*10)+(c2*9)+(c3*8)+(c4*7)+(c5*6)+(c6*5)+(c7*4)+(c8*3)+(c9*2));
}
int calculaSoma11( int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int c10){
   return ((c1*11)+(c2*10)+(c3*9)+(c4*8)+(c5*7)+(c6*6)+(c7*5)+(c8*4)+(c9*3)+(c10*2));
}
int digito(int soma, int c){//VALIDADE DO DIGITO
    if((soma%11)<2 && c==0)
    return 1;
    if((soma%11)>=2 && c==(11-(soma%11)))
    return 1;
    
    return 0;
}
int digito10(int soma){// tenho q reajustar o c10 para descubrir o c11
    if((soma%11)<2)
    return 0;
    if((soma%11)>=2)
    return 11-(soma%11);
}
void verificaCPF(int p1, int p2, int p3, int p4,int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int c10 , int c11){
    int soma, v=0;
    if(validadeCPF(p1, p2,p3, p4)==0)
    printf("CPF invalido: digitos iguais!");
    else{
        soma = calculaSoma10(c1, c2, c3, c4, c5, c6,  c7,  c8, c9);
        if(!digito(soma, c10)){
        v++;
        c10 = digito10(soma);
        }
        soma = calculaSoma11(c1, c2, c3, c4, c5, c6,  c7,  c8, c9, c10);
        if(!digito(soma, c11))
        v+=2;
        if(v==0)
        printf("CPF valido!");
        else if(v==1)
        printf("CPF invalido: primeiro digito!");
        else if(v==2)
        printf("CPF invalido: segundo digito!");
        else if(v==3)
        printf("CPF invalido: dois digitos!");
    }
}
int main(){
    int c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11;
    int p1, p2, p3, p4;

    scanf("%d.%d.%d-%d", &p1, &p2,&p3,&p4);

    c1 = p1/100;
    c2= (p1/10)%10;
    c3 = p1%10;
    c4 = p2/100;
    c5= (p2/10)%10;
    c6 = p2%10;
    c7 = p3/100;
    c8= (p3/10)%10;
    c9 = p3%10;
    c10 = p4/10;
    c11 = p4%10;

    verificaCPF(p1, p2, p3, p4,c1, c2, c3, c4, c5,c6, c7,c8,c9, c10 ,c11);

    return 0;
}