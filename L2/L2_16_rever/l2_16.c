#include<stdio.h>
int main(){
    int num, menor, i=0, pri=-1, ult=-1;
    char c;

    while(scanf("%d ", &num)==1){
        if(i==0){
            menor = num;
            i++;
        }
        if(menor>num)
        menor = num;
    }
    i=0;
    scanf("%*c");
     while(scanf("%d ", &num)==1){
        if(menor == num){
            if(pri==-1){
                pri = i;
            }
            ult = i;
        }
        i++;
    }
    if(pri!=-1)
    printf("%d %d %d", menor, pri, ult);
    else
    printf("%d %d %d", menor, i, i);

    return 0;
}