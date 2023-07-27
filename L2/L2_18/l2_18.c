#include<stdio.h>
void ehMaior(int l, int c, int mat[][c]){
    int i, j, maior,jM, iM;
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            if(i==0 && j==0){
            maior = mat[i][j];
            jM=j+1;
            iM=i+1;
            }
            if(maior<mat[i][j]){
            maior = mat[i][j];
            jM=j+1;
            iM=i+1;
            }
        }
    }
    printf("%d (%d, %d)", maior, iM, jM);
}
void leMatriz(int l, int c, int mat[][c]){
int i, j;
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    ehMaior(l, c,mat);
}
int main(){
    int c, l;
    scanf("%d %d", &l,&c);
    int mat[l][c];
    leMatriz(l, c, mat);

    return 0;
}