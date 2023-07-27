#include<stdio.h>
void imprimeNumero(char c){
        if(c=='0')
        printf("zero");
        else if(c=='1')
        printf("um");
        else if(c=='2')
        printf("dois");
        else if(c=='3')
        printf("tres");
        else if(c=='4')
        printf("quatro");
        else if(c=='5')
        printf("cinco");
        else if(c=='6')
        printf("seis");
        else if(c=='7')
        printf("sete");
        else if(c=='8')
        printf("oito");
        else if(c=='9')
        printf("nove");
}
int main(){
    char final, c,c1, c2;
    scanf("%c ",&final);

    while(1){
        scanf("%c", &c1);
        if(c1==final)
        break;
        else if(c1!=final){
           if(c1>='0'&&c1<='9'){
            scanf("%c",&c2);
            if(c2<'0'||c2>'9'){
                imprimeNumero(c1);
                if(c2==final)
                break;
                while(1){
                    scanf("%c",&c);
                    if(c==final)
                    break;
                    if(c<'0'||c>'9'){
                    printf("%c",c);
                    break;
                    }
                    printf("%c",c);
                }
                if(c==final)
                    break;
            }
           }
           else
           printf("%c",c1);
        }
    }



    return 0;
}