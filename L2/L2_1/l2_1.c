#include<stdio.h>
int ehPar(int num){
        if(num%2==0)
        return 1;
    return 0;
}

int main(){
    int i,n1, n2;
    scanf("%d %d", &n1, &n2);

    printf("RESP:");
    for(i=n1+1;i<n2;i++){
        if(ehPar(i))
        printf("%d ",i);
    }

    return 0;
}