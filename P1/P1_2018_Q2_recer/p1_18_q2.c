#include<stdio.h>

int main(){
    int aux,n1, n2, qtd1=0, qtd2=0;
    int nota1=0, nota5=0;

    scanf("%d %d",&n1,&n2);

    if(n1>=5){
        nota5 =n1/5;
        n1= n1%5;
    }
    nota1 = n1;
    qtd1 = nota1+nota5;
    nota1 = nota5 =0;
    if(n2>=5){
    nota5 =n2/5;
        n2 = n2%5;
    }
    nota1 = n2;
    qtd2 = nota1+nota5;
    if(qtd1==qtd2)
    printf("Iguais!");
    else if(qtd1>qtd2)
    printf("QTD troco 1 eh maior!");
    else
    printf("QTD troco 2 eh maior!");
    return 0;
}