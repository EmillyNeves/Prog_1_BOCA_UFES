#include<stdio.h>
int main(){
    int fat,i, j, n,qtd;

    scanf("%d",&qtd);
    for(i=0;i<qtd;i++){ 
        scanf("%d",&n);
        fat = 1;
        for(j=1;j<=n;j++){
            fat *= j; 
        }
        printf("%d %d\n", n, fat);
    }



    return 0;
}