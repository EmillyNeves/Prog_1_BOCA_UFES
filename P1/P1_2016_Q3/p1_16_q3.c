#include<stdio.h>
int ehVogal(char c){
    if(c=='A'||c=='a'||c=='e'||c=='E'||c=='u'||c=='U'||c=='i'||c=='I'||c=='o'||c=='O')
    return 1;
    return 0;
}
int main(){
    char c[4];
    int i, a=0;

    scanf("%s", c);
    for(i=0;i<4;i++){
        if(i==0){
            if(c[i]<'A'||c[i]>'Z'){
            a=-1;
            break;
            }
        }
        else if(i==1){
            if(c[i]<'0'||c[i]>'9'){
            a=-1;
            break;
            }
        }
        else if(i==2){
            if(!ehVogal(c[i])){
            a=-1;
            break;
            }
        }
        else if(i==3){
            if((c[i]<'a'|| c[i]>'z') || ehVogal(c[i])){
            a=-1;
            break;
            }
        }
    }

    if(a==0){
        for(i=0;i<4;i++){
            if(c[i]>='a'&& c[i]<='z')
            c[i]=c[i]-32;
            printf("%c",c[i]);
        }
    }
    else{
        printf("Invalido");
    }
    return 0;
}