#include<stdio.h>
int ehPrimo(int num){
    int i, dev=1;
    for(i=0; dev<=num;dev++){
        if(num%dev==0)
        i++;
    }
        if(i==2)
        return 1;
    return 0;
}
void multiplo(int num, int n2){
    int i, j=0;
    for(i=num+1; i<n2;i++){
        if(i%num==0){
        printf("%d ",i);
        j++;
        }
    }
    if(j==0)
    printf("*");
    printf("\n");
}
int main(){
    int i, n1, n2;
    scanf("%d %d", &n1, &n2);
    for(i = n1+1; i<n2;i++){
        if(ehPrimo(i)){
        printf("%d\n", i);
        multiplo(i, n2);
        }
    }
    return 0;
}