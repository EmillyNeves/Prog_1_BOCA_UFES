#include <stdio.h>

int main(){

    int n, x, i, y, cont=0;
    char acao; 

    scanf("%d %d\n", &n, &x); 

    for (i=0; i<n; i++){
        
        scanf("%c %d\n", &acao, &y);

        if (acao=='-'){
            if (x<y){
                cont++;
            }
            else if (x>y){
                x-=y;
            }
        }
        else if (acao=='+'){
            x+=y;
        }
    }

    printf("%d %d", x, cont);

}