#include<stdio.h>
int verificaCentena(int n){

    if(n<100)
    return -1;
    return n;
}
int retiraCentena(int n){
    return (n/100)%10;
}
int verificaMenor(int n1, int n2, int n3){
    int menor=-1;
    if(n1!=-1)
    n1=retiraCentena(n1);
    if(n2!=-1)
    n2=retiraCentena(n2);
    if(n3!=-1)
    n3=retiraCentena(n3);

    if(n1!=-1 && n2!=-1 && n3!=-1){
        menor = n1;
        if(menor>n2)
        menor = n2;
        if(menor>n3)
        menor = n3;
    }
    else if(n1!=-1 && n2!=-1){
        menor = n1;
        if(menor>n2)
        menor = n2;
    }
    else if(n1!=-1 && n3!=-1){
        menor = n1;
        if(menor>n3)
        menor = n3;
    }
    else if(n3!=-1 && n2!=-1){
        menor = n2;
        if(menor>n3)
        menor = n3;
    }

    return menor;
}
void imprimeMenor(int n1, int n2, int n3){
    int menor = verificaMenor(n1,n2, n3);

    if(menor==-1){
        printf("Nenhum");
    }
    else if(menor==retiraCentena(n1))
    printf("N1");
    else if(menor==retiraCentena(n2)){
        printf("N2");
    }
    else if(menor==retiraCentena(n3))
    printf("N3");
}
int main(){
    int i;
    int n1, n2, n3;
    scanf("%d %d %d", &n1,&n2,&n3);

    n1=verificaCentena(n1);//verificar se tem centena
    n2=verificaCentena(n2);
    n3=verificaCentena(n3);
    imprimeMenor(n1, n2, n3);

    return 0;
}