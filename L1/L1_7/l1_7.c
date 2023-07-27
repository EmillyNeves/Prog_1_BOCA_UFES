#include<stdio.h>
int main(){
    float temp1;
    char c;
    scanf("%f %c",&temp1,&c);
    if(c=='f'||c=='F'){
        temp1 = (temp1-32)/1.8;

        c='C';
    }
    else if(c=='c'||c=='C'){
        temp1 = temp1*1.8+32;
        c='F';
    }
    printf("%.2f (%c)", temp1, c);

    return 0;
}