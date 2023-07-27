#include<stdio.h>
int Propriedade(int num){
    int n1, n2;
    n1 = num/100;
    n2 = num%100;
    if(((n1+n2)*(n1+n2))== num)
    return 1;
    return 0;

}
int main(){
    int n, m, i;
    scanf("%d %d", &n,&m);

    for(i=n+1; i<m;i++){
        if(Propriedade(i))
        printf("%d\n", i);
    }

    return 0;
}