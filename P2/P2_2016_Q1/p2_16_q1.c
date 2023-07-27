#include<stdio.h>
int main(){
    int i , n1, n2, qtdP=0, qtdI=0;

    scanf("%d",&n1);
    for(i=0;i<n1;i++){
        scanf("%d",&n2);
        if(i==0){
            if(n2%2==0)
            qtdP++;
            else
            qtdI++;
        }
        else{
            if(qtdP!=0){
               if(n2%2==0){
                qtdP++;
                }
            }
            else{
            if(n2%2!=0)
                qtdI++;
            }
        }
    }
    if(qtdI!=0)
    printf("QTD IMPARES:%d",qtdI);
    else 
    printf("QTD PARES:%d",qtdP);

    return 0;
}