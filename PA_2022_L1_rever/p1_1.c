#include<stdio.h>
#include<math.h>
int ehLetra(char c){
    if(c>='a'&&c<='z'||c>='A'&&c<='Z')
    return 1;
    return 0;
}
int qtdDigitos(int n){
    int qtd=0;
    while(n>0){
        n=n/10;
        qtd++;
    }
    return qtd-1;
}
int main(){
    char c;
    int n1, n2, aux1, aux2, qtd1, qtd2, a, b ,i;
    scanf("(%c,%d,%d)",&c, &n1, &n2);

    qtd1 = qtdDigitos(n1);
    qtd2 = qtdDigitos(n2);
    
    if(qtd1>qtd2)
    qtd2=qtd1;
    else if(qtd1<qtd2)
    qtd1=qtd2;
    aux1 = n1;
    aux2 = n2; 
   
    
    printf("(");
    if(ehLetra(c)){
        if(n2<n1)
        i=0;
        while(qtd2>=0 && qtd1>=0){
            a = pow(10,qtd1);
            b = pow(10,qtd2);
            aux1 = n1/a; 
            aux2 = n2/b;
            if(i==0 && aux2==0){
                i++;
                printf("%d", aux1);
            }
            else{
            printf("%d", aux2);   
            printf("%d", aux1);
            }
            n1 = n1%a;
            n2 = n2%b; 
            qtd1--;
            qtd2--;
        }
    }
    else{
        if(n1<n2)
        i=0;
        while(qtd2>=0 && qtd1>=0){
            a = pow(10,qtd1);
            b = pow(10,qtd2);
            aux1 = n1/a;
            aux2 = n2/b;
            if(i==0 && aux1==0){
                i++;
                printf("%d", aux2);
            }
            else{
            printf("%d", aux1);   
            printf("%d", aux2);
            }
            n1 = n1%a;
            n2 = n2%b;
            qtd1--;
            qtd2--;
        }
    }
    printf(")\n");

    return 0;
}