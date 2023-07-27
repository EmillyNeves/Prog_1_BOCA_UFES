
#include<stdio.h>
int main(){
    int n1, n2, i, j;
    scanf("%d %d", &n1,&n2);
    
    for(i=n1+1; i<n2;i++){
        j = (i/100) + (i%100);
        j= j*j;
        if(i==j)
        printf("%d\n",j);
    }
    return 0;
}