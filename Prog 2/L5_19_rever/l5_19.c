#include<stdio.h>
void arrumaMatriz(int c, int l, char mat[l][c]){
int i,j;
    for(i=0;i<l;i++){
        for(j=0;mat[i][j];j++){
            if(mat[i][j]=='2')
            mat[i][j]='1';
        }
    }
}
void mareAvanca(int h, int c, int l, char mat[l][c]){
int i, j,a;
    for(a=0;a<h;a++){
        for(i=0;i<l;i++){
            for(j=0;mat[i][j];j++){
                if(mat[i][j]=='1'){
                    //baixo
                    if(1+i<l){
                        if(mat[i+1][j]=='0')
                        mat[i+1][j]='2';
                    }
                    //cima
                    if(i-1>=0){
                        if(mat[i-1][j]=='0')
                        mat[i-1][j]='2';
                    }
                    //direita
                    if(1+j<c){
                        if(mat[i][j+1]=='0')
                        mat[i][j+1]='2';
                    }
                    //esquerda
                    if(j-1>=0){
                        if(mat[i][j-1]=='0')
                        mat[i][j-1]='2';
                    }
                }
            }
        }
        arrumaMatriz(c,l,mat);
    }
}

int main(){
int h,i=0,j, l, c, antes=0, depois=0;
scanf("%d %d %d", &h,&c,&l);
char mat[l][c];

    while(scanf("%s", mat[i])==1){
               i++;
    }
    for(i=0;i<l;i++){
        for(j=0;mat[i][j];j++){
                if(mat[i][j]=='0')
                antes++;
        }
    }
    mareAvanca( h, c,l, mat);

    for(i=0;i<l;i++){
        for(j=0;mat[i][j];j++){
                if(mat[i][j]=='0')
                depois++;
        }
    }
    printf("%d %d", antes, depois);

    return 0;
}