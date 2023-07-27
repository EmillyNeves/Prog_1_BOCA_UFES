#include<stdio.h>
int EhPar (int x){
    if(x%2==0)
    return 1;
    return 0;
}
void PrintaPares (int N){
    int i=2, j;
    for(j=0;j<N;j++){
        printf("%d ", i);
        i+=2;
    }
}
void PrintaImpares( int N){
    int i=1, j;
    for(j=0;j<N;j++){
        printf("%d ", i);
        i+=2;
    }
}

int main(){
    int n1, n2;
    scanf("%d %d", &n1,&n2);

    if(n1==0){
        PrintaPares(n2);
    }
    else if(n1==1){
        PrintaImpares(n2);
    }

    return 0;
}