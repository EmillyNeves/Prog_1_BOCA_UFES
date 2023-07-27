#include<stdio.h>
#include<math.h>

int main(){
    int n, k;
    float soma=0;

    scanf("%d", &n);
    
    for(k=1; k<=n; k++){
        soma+=6.0/(k*k);
    }
    printf("%f", sqrt(soma));

    return 0;
}