#include<stdio.h>
int EhPrimo(int num){
    int i=0, dev;
    for(dev=1; dev<=num;dev++){
        if(num%dev==0)
        i++;
    }
    if(i==2)
    return 1;
    return 0;

}
void ImprimeMultiplos(int num, int max){
    int i, c=0;
    for(i=num+1; i<max;i++){
        if(i%num==0){
        printf("%d ", i);
        c++;
        }
    }
    if(c==0)
    printf("*");
    printf("\n");
}

int main(){
    int n,i,m;
    scanf("%d %d", &n,&m);

    for(i=n+1; i<m;i++){
        if(EhPrimo(i)){
        printf("%d\n", i);
        ImprimeMultiplos(i, m);
        }
    }

    return 0;
}