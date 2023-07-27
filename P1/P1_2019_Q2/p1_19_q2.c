#include<stdio.h>
void resultado(int n1, int n2, char c){
    if(c=='-')
    printf("SUB:%d", n1-n2);
    else if(c=='+') 
    printf("SOMA:%d", n1+n2);
    else if(c=='*')
    printf("MULT:%d", n1*n2);
    else if(c=='/'){
    printf("DIV:%d", n1/n2);
    if(n1%n2!=0)
    printf(", RESTO:%d", n1%n2);
    }
}
int main(){
    int n1, n2;
    char c;
    scanf("%d %c %d",&n1,&c,&n2);

    resultado(n1, n2, c);


    return 0;
}