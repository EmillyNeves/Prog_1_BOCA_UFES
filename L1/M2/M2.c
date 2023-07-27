#include<stdio.h>
int main(){
    int n1;
    float n2;
    scanf("%f", &n2);
    n1=n2;
    n2=n2-n1;
    printf("INTEIRO:%d,REAL:%.2f", n1, n2);

    return 0;
}