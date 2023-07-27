#include<stdio.h>
int EhPrimo(int num){
    int dev, i=0;
    for(dev=1; dev<=num; dev++){
        if(num%dev==0)
        i++;
    }
    if(i==2)
    return 1;
    return 0;
}
int main(){
    int i ,n, m;
    scanf("%d %d", &n,&m);
    for(i=n+1; i<m;i++){
        if(EhPrimo(i))
        printf("%d ", i);
    }

    return 0;
}