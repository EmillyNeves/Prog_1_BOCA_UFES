#include<stdio.h>
int main(){
    float n1, n2, resultado;
    char c;
    scanf("%f", &n1);
    resultado = n1;
    while(scanf("%f %c", &n2, &c)==2){
        if(c=='-'){
            resultado -= n2;
        }
        else if(c=='+'){
            resultado += n2;
        }
        else if(c=='*'){
            resultado *= n2;
        }
        else if(c=='/'){
            resultado /=n2;
        }

    }
    printf("%.2f", resultado);

    return 0;
}