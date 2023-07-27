#include<stdio.h>
int main(){
int i, j, m, n, l1, c1, l2,c2, p1=0, p2=0;
scanf("%d %d", &m,&n);
scanf("%d %d", &l1,&c1);
scanf("%d %d", &l2,&c2);
int mat[m][n];
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
    scanf("%d",&mat[i][j]);
    if(mat[i][j]==mat[l1-1][c1-1])
    p1=mat[i][j];
    if(mat[i][j]==mat[l2-1][c2-1])
    p2=mat[i][j];
    }
}
if(p1==p2)
printf("EMPATE");
else if(p1>p2)
printf("J1 %d", p1);
else if(p1<p2)
printf("J2 %d", p2);

    return 0;
}