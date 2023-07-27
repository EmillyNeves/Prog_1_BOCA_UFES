#include<stdio.h>
int main(){
int x1, x2, y1, y2, px, py;
    scanf("%d %d %d %d %d %d", &x1,&y1,&x2,&y2,&px,&py);
    if(px>=x1 && px<=x2||px<=x1 && px>=x2){
        if(py>=y1 && py<=y2 || py<=y1 && py>=y2)
        printf("Dentro");
    }
    else
    printf("Fora");

    return 0;
}