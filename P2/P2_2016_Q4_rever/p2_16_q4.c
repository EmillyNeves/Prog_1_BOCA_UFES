#include<stdio.h>
float FazOperacao(float n1, float n2, char c){
    if(c=='+')
    return n1+n2;
    if(c=='*')
    return n1*n2;
    if(c=='-')
    return n1-n2;
    if(c=='/')
    return n1/n2;
}
float ResolveExpressao(){
    float n1, i=0, n2;
    char c1, c2;

    while(1){
        if(i==0){
            scanf("%f %f %c%c", &n1, &n2, &c1, &c2);
            i++;
            n1 = FazOperacao(n1, n2,c1);
        }else{
            scanf("%f %c%c", &n2, &c1, &c2 );
            n1 = FazOperacao(n1, n2, c1);
        }
        if(c2==')')
        break;
    }
    return n1;
}
int main(){
    char c ;
    int i=0;
    float n1, n2, maior;

    while(1){
        scanf("%c", &c);
        if(c=='('){
            n1 = ResolveExpressao();
            printf("%.2f", n1);
            if(i==0){
            maior = n1;
            i++;
            }
            if(maior<n1)
            maior = n1;
        }
        if(c!='(')
        printf("%c",c);
        if(c=='.')
        break;
    }
    printf(" MAIOR:%.2f", maior);

    return 0;
}