#include<stdio.h>
int main(){
    char c;
    int n;
    scanf("%c", &c);
    
    if(c>='a'&&c<='z'){
    c = c-32;
    n = c;
    printf("%c(%d)",c,n);
    }
    else if(c>='A'&&c<='Z')
    printf("A letra deve ser minuscula!");
    else
    printf("Nao e letra!");

    return 0;
}