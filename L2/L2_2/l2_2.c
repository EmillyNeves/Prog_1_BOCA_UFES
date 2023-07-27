#include<stdio.h>
int main(){
    int i, n1, n2;
    scanf("%d %d", &n1, &n2);

    for(i=n1+1;i<n2;i++){
        if(i%3==0 || i%4==0 || i%7==0){
            printf("%d ", i);
        }
    }
    return 0;
}