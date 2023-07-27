#include<stdio.h>
int main(){
    int n1, n2, i, j, dev;

    scanf("%d %d", &n1, &n2);
    printf("RESP:");

    for(j=n1+1; j<n2; j++){
        i=0;
        for(dev=1; dev<=j; dev++){
            if(j%dev==0)
            i++;
        }
        if(i==2)
        printf("%d ", j);
    }

    return 0;
}