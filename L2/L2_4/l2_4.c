#include<stdio.h>
int main(){
    int maior, i=0, soma = 0, num;
    float media;
    while(1){
        scanf("%d", &num);
        if(num==0)
        break;
        if(i==0)
        maior = num;
        if(num>maior)
        maior = num;
        i++;
        soma+=num;
        media = soma/(i*1.0); 
        printf("%d %f\n", maior, media);
    }
    return 0;
}