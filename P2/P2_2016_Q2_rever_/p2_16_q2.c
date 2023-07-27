#include<stdio.h>
int ehPrimo(int n){
    int dev,i =0;
    for(dev=1;dev<=n;dev++){
        if(n%dev==0)
        i++;
    }

    if(i==2)
    return 1;
    return 0;
}
int MaiorDigitoPrimo(int num){
    int maior=0, axu, i=1, maiorP=0;
    while(num>0)
    {
        if(i==1){
            i++;
            axu = num%10;
            num = num/10;
            if(ehPrimo(axu))
            maiorP = axu;
            continue;
        }
        axu = num%10;
        num = num/10;
        if(axu>maiorP && ehPrimo(axu)){
             maiorP = axu;
        }
    }

    return maiorP;
}
int main(){
    int n, soma=0;
    char c;

    while (1)
    {   scanf("%d%c",&n,&c);
        soma = soma + MaiorDigitoPrimo(n);
        //printf("%d ", n);
        if(c!=' ')
        break;
    }
    printf("SOMA:%d",soma);

    return 0;
}