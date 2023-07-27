#include<stdio.h>
int ehCrescente(int n1, int n2, int n3){
    if(n1<n2 && n2<n3)
    return 1;
    return 0;
}
int ehDecrescente(int n1, int n2, int n3){
    if(n1>n2 && n2>n3)
    return 1;
    return 0;
}
int main(){
    int n1, n2, n3;
    scanf("%d %d %d", &n1,&n2,&n3);

    if(ehCrescente(n1, n2, n3))
    printf("CRESCENTE");
    else if(ehDecrescente(n1, n2, n3))
    printf("DECRESCENTE");
    else
    printf("TUDO DOIDO");


    return 0;
}