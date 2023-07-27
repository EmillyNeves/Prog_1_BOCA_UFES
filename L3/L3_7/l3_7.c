#include<stdio.h>
int area (int x1, int y1, int x2, int y2){
    return (x2-x1)*(y2-y1);
}
int area_total (int r1_x1, int r1_y1, int r1_x2, int r1_y2, int r2_x1, int r2_y1, int r2_x2, int r2_y2){
    int a1, a2, resul, dif=0;
    a1 = area ( r1_x1, r1_y1, r1_x2, r1_y2);
    a2 = area ( r2_x1, r2_y1, r2_x2, r2_y2);

    if(r1_x2>r2_x1 && r1_y2>r2_y1)
    dif = area(r2_x1, r2_y1, r1_x2, r1_y2);

    resul = a1+a2-dif;
    
    return resul;
}
int main(){
    int r1_x1, r1_y1, r1_x2, r1_y2;
    int r2_x1, r2_y1, r2_x2, r2_y2;
    scanf("%d %d %d %d", &r1_x1,&r1_y1,&r1_x2,&r1_y2);
    scanf("%d %d %d %d", &r2_x1,&r2_y1,&r2_x2,&r2_y2);

    printf("RESP:%d", area_total (r1_x1, r1_y1,r1_x2, r1_y2, r2_x1, r2_y1,r2_x2,r2_y2));

    return 0;
}