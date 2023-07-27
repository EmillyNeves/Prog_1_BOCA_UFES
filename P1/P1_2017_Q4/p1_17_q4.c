#include<stdio.h>
int somaHorario(int h, int m,int s){
    return ((h+m+s)/10)%10;
}
int verificaMaior(int h1, int m1, int s1, int h2, int m2, int s2){
    int maior = 0;
    if(h1>h2){
        maior = 1;
    }
    else if(h2>h1){
        maior = 2;
    }
    else if(m2>m1){
        maior = 2;
    }
    else if(m1>m2){
        maior = 1;
    }
    else if(s1>s2){
        maior = 1;
    }
    else if(s2>s1){
        maior = 2;
    }

    return maior;
}
int main(){
    int h1, m1, s1, h2, m2, s2, i;
    scanf("%d %d %d %d %d %d", &h1,&m1,&s1,&h2,&m2,&s2);

    i = verificaMaior(h1, m1, s1, h2, m2, s2);
    if(i==0){
        printf("IGUAIS");
    }
    else{
        if(i==1){
            printf("RESP:%d", somaHorario( h1, m1, s1));
        }
        else if(i==2){
            printf("RESP:%d", somaHorario( h2, m2, s2));
        }
    }

    return 0;
}