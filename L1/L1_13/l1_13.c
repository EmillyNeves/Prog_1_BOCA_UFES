#include<stdio.h>
int main(){
    int n1, n2, n3;
    scanf("%d %d", &n1,&n2);
    n3=n2%n1;
    if(n3==0)
    n3 = n1;
    printf("RESP:%d",n3);

    return 0;
}