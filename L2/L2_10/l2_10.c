#include<stdio.h>
int main(){
    int i, j, n, m;
    scanf("%d %d", &n, &m);

    for(i=n; i<=m;i++){
        for(j=1; j<=10;j++){
            printf("%d x %d = %d\n", i,j, i*j);
        }
    }


    return 0;
}