#include<stdio.h>
int main(){
    int x1, x2, y1, y2;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    
    if(x1<x2){
        if(y1<y2){
            printf("(%d,%d)(%d,%d)(%d,%d)(%d,%d)\n", x1, y2, x1, y1, x2, y1, x2,y2);
        }
        else if(y1>y2){
            printf("(%d,%d)(%d,%d)(%d,%d)(%d,%d)\n", x1, y1, x1, y2, x2, y2, x2,y1);
        }
    }
    else if(x2<x1){
        if(y1<y2){
            printf("(%d,%d)(%d,%d)(%d,%d)(%d,%d)\n", x2, y2, x2, y1, x1, y1, x1,y2);
        }
        else if(y1>y2){
            printf("(%d,%d)(%d,%d)(%d,%d)(%d,%d)\n", x2, y1, x2, y2, x1, y2, x1,y1);
        }
    }
    return 0;
}