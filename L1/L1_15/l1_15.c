#include<stdio.h>
int main(){
    int num,i, j=1;
    scanf("%d %d", &num, &i);

        while(j<i){
            if(i==1){
                num=num%10;
                break;
            }
            num=num/10;
            j++;
        }
        if(i!=1)
        num=num%10;
    if(num%2==0)
    printf("PAR");
    else
    printf("IMPAR");

}