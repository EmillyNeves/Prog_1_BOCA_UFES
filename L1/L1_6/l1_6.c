#include<stdio.h>
int main(){
int n1, n2;
float media;
scanf("%d %d", &n1,&n2);
media = (n1+n2)/2.0;

    printf("%.1f - ", media);

    if(media>=7)
    printf("Aprovado");
    else if(media<5)
    printf("Reprovado");
    else 
    printf("De Recuperacao");


    return 0;
}