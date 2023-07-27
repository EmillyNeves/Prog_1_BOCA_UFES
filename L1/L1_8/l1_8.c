#include<stdio.h>
int main(){
    char c;
    scanf("%c", &c);

    if(c=='a'|| c=='A'|| c=='e'|| c=='E'||c=='I'|| c=='i' ||c=='U'|| c=='u'||c=='O'|| c=='o')
    printf("Vogal");
    else
    printf("Nao vogal");

    return 0;
}