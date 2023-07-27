#include<stdio.h>
int octante(int x, int y, int z){
    int oct;
    if(x>0){
        if(y>0&&z>0)
        return 1;
        if(y<0&&z>0)
        return 4;
        if(y<0&&z<0)
        return 8;
        if(y>0&&z<0)
        return 5;
    }
    else if(x<0){
        if(y>0&&z>0)
        return 2;
        if(y>0&&z<0)
        return 6;
        if(y<0&&z<0)
        return 7;
        if(y<0&&z>0)
        return 3;

    }
    return oct;
}
int main(){
    float n1, n2, n3;

    scanf("%f %f %f", &n1,&n2,&n3);
    printf("%d° Octante\n",octante(n1, n2,n3));
    return 0;
}