#include<stdio.h>
int main(){
    int dev, i=0, num;
    scanf("%d", &num);

    for(dev=1; dev<=num; dev++){
        if(num%dev==0){
            i++;
        }
    }
    
    if(i==2)
    printf("Primo");
    else
    printf("Nao primo");

    return 0;
}