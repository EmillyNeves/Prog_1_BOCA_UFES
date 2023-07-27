#include<stdio.h>
void leMatriz(int l , int c, int mat[l][c] ){
int i,j;
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            scanf("%d",&mat[i][j]);       }
    }
}
void multiplicaMatriz(int l1 , int c1, int mat1[l1][c1],int l2 , int c2, int mat2[l2][c2] ){
int i,j;
 if(c1!=l2){
    printf("IMPOSSIVEL\n");
 }else{
    int mat3[l1][c2], k1, k2, soma=0;
    for(k1=0;k1<l1;k1++){
        for(k2=0;k2<c2;k2++){
           soma=0;
           for(i=0;i<c1;i++){
            soma+=mat1[k1][i]*mat2[i][k2];
           }
           mat3[k1][k2]=soma;
        }
    }
    for(i=0;i<l1;i++){
        for(j=0;j<c2;j++){
          printf("%d ",mat3[i][j]);
        }
        printf("\n");
    }
 }
}

int main(){
int i, n, c1,l1, c2, l2;
scanf("%d", &n);

    for(i=0;i<n;i++){
    scanf("%d %d",&c1, &l1);
    int mat1[l1][c1];
    leMatriz( l1 , c1, mat1);

    scanf("%d %d",&c2, &l2);
    int mat2[l2][c2];
    leMatriz( l2 , c2, mat2);
    multiplicaMatriz( l1 ,c1, mat1,l2 , c2, mat2);
    if(i<n-1)
    printf("\n");
    }

    return 0;
}