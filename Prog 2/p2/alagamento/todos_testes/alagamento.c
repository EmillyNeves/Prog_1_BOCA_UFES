#include<stdio.h>
void alteraNum( int l, int c, int mat[l][c]){
    int i,j;
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            if(mat[i][j]==2)
            mat[i][j]=1;
        }
    }
}

void aumentaAlagamnto(int h, int l, int c, int mat[l][c]){
    int a,j,i, b, q;

    for(a=0;a<h;a++){
        for(i=0;i<l;i++){
            for(j=0;j<c;j++){
                if(mat[i][j]==1){
                    //cima
                    if(i-1>=0){
                    if(mat[i-1][j]==0)
                    mat[i-1][j]= 2;
                    }
                    //baixo
                    if(i+1<l){
                    if(mat[i+1][j]==0)
                        mat[i+1][j]= 2;
                    }
                    //direita
                    if(j+1<c){
                        if(mat[i][j+1]==0)
                        mat[i][j+1]= 2;
                    }
                    //esquerda
                    if(j-1>=0){
                        if(mat[i][j-1]==0)
                        mat[i][j-1]= 2;
                    }
                }
            }
        }
    alteraNum(l, c, mat);
    }

}
int main(){
    int h, c, l,i,j, alagado=0;
    
    scanf("%d %d %d", &h,&l,&c);
    int mat[l][c];
    
    for(i=0;i<l;i++){//le metriz
        for(j=0;j<c;j++){
           scanf("%d",&mat[i][j]); 
        }
    }
    aumentaAlagamnto(h, l, c, mat);

    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            if(mat[i][j]==1)
            alagado++;
        }
    }
    printf("%d %d", (l*c)-alagado, alagado);

    return 0;
}