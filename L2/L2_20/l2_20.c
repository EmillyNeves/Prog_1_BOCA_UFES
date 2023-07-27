#include<stdio.h>
void verificaPicoVale(int e, int f, float a, float b, float c, float d){
    int i, j , k, vP=-1, vV=-1;
    float x, x1, x2;
    for(i=e; i<=f;i++){
        k=i-1;
        j=i+1;
        x = a*(k*k*k)+b*(k*k)+(c*k)+d;
        x1 = a*(i*i*i)+b*(i*i)+(c*i)+d;
        x2 = a*(j*j*j)+b*(j*j)+(c*j)+d;

        if(x1>x && x1>x2 && vP<0){
        printf("Pico em x=%d\n", i);
        vP++;
        }
        if(x>x1 && x2>x1 && vV<0){
        printf("Vale em x=%d\n", i);
        vV++;
        }
    }
    if(vP<0)
    printf("Nao ha pico\n");
    if(vV<0)
    printf("Nao ha vale");
}

int main(){
    int i, e, f;
    float a, b, c, d;
    scanf("%f %f %f %f %d %d", &a, &b, &c, &d, &e, &f);
    verificaPicoVale( e, f, a, b,c, d);

    return 0;
}