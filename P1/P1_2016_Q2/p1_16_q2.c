#include<stdio.h>
int main(){
    int a, b, x1, y1, x2, y2, x3, y3, i=0;

    scanf("%d %d %d %d %d %d %d %d", &a, &b, &x1, &y1,&x2, &y2, &x3, &y3);
    if((a*x1)+b==y1)
    i++;
    if((a*x2)+b==y2)
    i++;
    if((a*x3)+b==y3)
    i++;

    if(i==1)
    printf("Um");
    if(i==2)
    printf("Dois");
    if(i==3)
    printf("Todos");
    if(i==0)
    printf("Nenhum");
    
    return 0;
}