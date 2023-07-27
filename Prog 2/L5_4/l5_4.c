#include <stdio.h>
int verificaNum(int a, int b, int num){
    if(num>=a && num<=b)
    return 1;
 return 0;
}
void imprimeResultado(int a, int b, int n, int vet[n]){
    int i, qtd=0;
    for(i=0;i<n;i++){
        if( verificaNum( a, b, vet[i]))
        qtd++;
    }
    printf("%d %d", qtd, n-qtd);
}
int main()
{
    int a, b,n, i;
    scanf("%d", &n);
    int vet[n];

    for(i=0;i<n;i++){
        scanf("%d",&vet[i]);
    }
    scanf("%d %d", &a,&b);
    imprimeResultado( a, b, n, vet);
    return 0;
}