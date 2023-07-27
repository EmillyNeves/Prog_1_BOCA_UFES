#include<stdio.h>
int verificaAno(char ano[]){
soma=0;
    soma = (ano[2]+ano[3])+((ano[2]+ano[3]))/4;
    return soma;
}



int main(){
    int i;
    char dia[2];
    char mes[2];
    char ano[4];

    while(1){
        for(i=0;i<2;i++){
            scanf("%c",&dia[i]);
            if(dia[0]=='!')
            break;
        }
        scanf("%*c");
        if(dia[0]=='!')
        break;
        for(i=0;i<2;i++){
            scanf("%c",&mes[i]);
        }
        scanf("%*c");
        for(i=0;i<4;i++){
            scanf("%c",&ano[i]);
        }
        scanf("%*c");
    }



    return 0;
}