#include<stdio.h>
int ehNumero(char c){
    if(c>='0'&&c<='9')
    return 1;
    return 0;
}
int ehletra(char c){
    if(c>='a'&& c<='z'||c>='A'&&c<='Z')
    return 1;
    return 0;
}
int ehMaiuscula(char c){
    if(c>='A'&&c<='Z')
    return 1;
    return 0;
}
int ehMinuscula(char c){
    if(c>='a'&& c<='z')
    return 1;
    return 0;
}
int verificaValidade(char c1, char c2, char c3, char c4, char c5, char c6){
        if(!ehNumero(c1)||!ehNumero(c4))
        return 0;
        if(!ehMinuscula(c2)||!ehMinuscula(c5))
        return 0;
        if(!ehletra(c3)||!ehletra(c6))
        return 0;
    return 1;
}
void verificaCaracteres(char c1, char c2){
    if(c1==c2)
    printf("I");
    else if((c1 == c2+32)||(c2==c1-32)||(c2 == c1+32)||(c1==c2-32))
    printf("C");
    else
    printf("D");
}
void comparaCaracteres(char c1, char c2, char c3, char c4, char c5, char c6){
    verificaCaracteres(c1,c4);
    verificaCaracteres(c2,c5);
    verificaCaracteres(c3,c6);
}
int main(){
    char c1, c2, c3, c4, c5, c6;
    scanf("%c%c%c %c%c%c", &c1,&c2,&c3,&c4, &c5, &c6);
    if(!verificaValidade(c1, c2, c3, c4, c5, c6)){
        printf("Codigo invalido!\n");
    }else{
        comparaCaracteres(c1, c2, c3, c4, c5, c6);
        printf("\n");
    }

    return 0;
}