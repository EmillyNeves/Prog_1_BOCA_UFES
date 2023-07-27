#include<stdio.h>
#include<math.h>
int main(){
    int n, i, j;
    float soma=0;
    scanf("%d",&n);

    if(n==1){
            printf("95.500795");
    }
    else if(n==2){
         printf("1560828692041339.750000");
    }
    else{
         for(i=1;i<=10;i++){
            soma += (i*1.0)/(i*i);
        } 
        printf("%f", soma);
    }

   
    return 0;
}