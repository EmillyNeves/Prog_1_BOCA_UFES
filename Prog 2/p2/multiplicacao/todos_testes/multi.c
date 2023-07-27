#include<stdio.h>
#include<stdlib.h>

int main(){

    int l, c, s, i ,j;
    scanf("%d %d %d\n", &l, &c, &s);
    int mat[l][c];
    int x[l], y[c];
    srand(s);

    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            mat[i][j]=rand()% (100 + 1);
        }
    }

    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }


    return 0;
}