#include<stdio.h>
int main(){
    float p,x1, x2, y1, y2;
    scanf("%f %f %f %f", &x1,&y1,&x2,&y2);
    p = (x2-x1)*2+(y2-y1)*2;
    printf("%.2f", p);


    return 0;
}