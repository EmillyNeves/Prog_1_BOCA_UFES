#include<stdio.h>
void verificaNumeros(int num[], int n, int tam){
int i,j;
printf("[");
    for(i=0;i<tam; i++){
        if(i+1<tam){
            for(j=1+i;j<tam;j++){
                if(num[i]+num[j]==n)
                    printf("%d, %d",i,j);
            }
        }
    }
printf("]");
}

int main(){
int num[100], i=0, n;
char c;

    while(1){
        scanf("%c",&c);
        if(c==']')
        break;
        scanf("%d",&num[i]);
        i++;
    }
    scanf(",%d",&n);
    verificaNumeros(num,n, i);

    return 0;
}