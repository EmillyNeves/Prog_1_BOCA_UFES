#include<stdio.h>
int main(){
    char c;
    printf("RESP:");
    while(1){
        scanf("%c", &c);
        if(c==' ')
        continue;
        printf("%c", c);
        if(c=='!'|| c=='?'|| c=='.')
        break;
    }


}