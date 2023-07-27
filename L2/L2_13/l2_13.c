#include<stdio.h>
int main(){
    char c='a';
    while(1){
        scanf("%c", &c);
        if(c>='a'&& c<='z')
        c=c-32;
        printf("%c", c);
        if(c=='.'||c=='!'||c=='?')
        break;
    }
}