#include<stdio.h>//34
int EhDigito(char c){
    if(c>='0'&&c<='9')
    return 1;
    return 0;
}
char LeProxChar(char terminador, char c){
    return c;
}
void ImprimePorExtenso(char c){
    if(c=='1')
    printf("um");
    else if(c=='0')
    printf("zero");
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
char VerificaNumero(char digito, char terminador){
    int i=0;
    char cA = digito, cP;
    
    if(cA!=terminador){
        scanf("%c",&cP);
        if(cP==terminador){
            if(EhDigito(cA))
            ImprimePorExtenso(cA);
            else
            printf("%c",cA);
        }
        else if(!EhDigito(cP)){
        ImprimePorExtenso(cA);
        printf("%c",cP);
        }
        else{
            printf("%c", cA);
            while(EhDigito(cP)){
                printf("%c",cP);
                scanf("%c", &cP);
            }
            if(cP!=terminador)
            printf("%c",cP);
        }
    }
    return cP;
}

int main(){
    char final, c;
    scanf("%c ",&final);

    while(1){
        scanf("%c", &c);
        if(c==final)
        break;
        if(!EhDigito(c))
        printf("%c",c);
        else{
        c = VerificaNumero(c, final);
        if(c==final)
        break;
        }
    }
    return 0;
}