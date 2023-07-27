#include<stdio.h>
int validadeID(int n){
    if(n>=1&&n<=10)
    return 1;
    return 0;
}
void tiposIDs(int n1, int n2){
    int m=0, f=0;
    if(n1==n2){
        if(n1<=5)
        printf("Um homem");
        else
        printf("Uma mulher");
    }
    else{
        if(n1<=5)
        m++;
        if(n2<=5)
        m++;
        if(n1>5&&n1<=10)
        f++;
        if(n2>5&&n2<=10)
        f++;
        if(f==1 && m==1)
        printf("Um casal");
        else if(f==2)
        printf("Par de mulheres");
        else if(m==2)
        printf("Par de homens");
    }

}
#include<stdio.h>
int main(){
    int n1, n2;
    scanf("%d %d", &n1,&n2);

    if(validadeID(n1)&&validadeID(n2)){
        tiposIDs(n1,n2);
    }
    else{
        printf("Invalido");
    }

    return 0;
}