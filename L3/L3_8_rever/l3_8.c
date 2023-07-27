#include<stdio.h>
int verificaNegativo(int n){
    if(n<0)
    return 1;
    return 0;
}
int verificaPrimo(int n){
    int i=0, dev=1;
    for(;dev<=n;dev++){
        if(n%dev==0)
        i++;
    }
    if(i==2)
    return 1;
    return 0;
}
int transformaPrimo(int n){
    int i, aux = n;
    
    if(verificaNegativo(n))
    aux*=-1;
        while(!verificaPrimo(aux)){
            aux++;
            if(aux>32000)
            return n;
        }
        if(verificaNegativo(n))
        aux*=-1;
        if(aux>=-32000 && aux<=32000)
        n = aux;
        
    return n;
}
void imprimeResultado(int l, int c, int mat[l][c]){
    int i, j;
    for(i=0;i<l;i++){
    printf("\t");
        for(j=0;j<c;j++){
            if(!verificaPrimo(mat[i][j])||mat[i][j]<0){
                mat[i][j] = transformaPrimo(mat[i][j]);
            }
        printf("%d ", mat[i][j]);  
        }
    printf("\n");
    }
}
void leMatriz(int l, int c, int mat[l][c]){
    int i, j;
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            scanf("%d",&mat[i][j]);
        }
    }
}
int main(){
    int l, c;
    scanf("%d %d", &l, &c);
    int mat[l][c];
    leMatriz(l, c, mat);
    imprimeResultado(l, c, mat);

    return 0;
}