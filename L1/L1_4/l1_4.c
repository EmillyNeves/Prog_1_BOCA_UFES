#define PI 3.141592
#include<stdio.h>
#include<math.h>
int main(){
float area, p1, p2;
    scanf("%f",&p1);
    area= (p1*p1)*PI;
    p2 = sqrt((area/2)/PI);
    printf("%.2f %.2f",area, p2);

    return 0;
}