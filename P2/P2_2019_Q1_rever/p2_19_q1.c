#include<stdio.h>
int main(){
    int i,p1, p2, p3, qtd, custo=0, n;
    scanf("%d %d %d %d",&p1, &p2,&p3, &qtd);
    for(i=0;i<qtd;i++){
        scanf("%d", &n);
        if(n==1)
        custo+=p1;
        else if(n==2)
        custo+=p2;
        else if(n==3)
        custo+=p3; 
    }
    printf("CUSTO:%d\n",custo);

    return 0;
}