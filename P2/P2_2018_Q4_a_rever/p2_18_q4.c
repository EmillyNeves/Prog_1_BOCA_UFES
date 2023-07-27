#include<stdio.h>
int ReduzInteiro(int n){
    int soma=0, aux;
    while(1){
        aux = n%10;
        soma+=aux;
        n/=10;
        if(soma>9&&n==0){
            n = soma;
            soma = 0;
        }
        if(soma<10&&n==0)
        break;
    }
    return soma;
}
int ReduzCodigo(){
    int num=0, i=0;
    char c;
    while(1){
        scanf("%c",&c);
        if(i==0&&c==')'){
            num =-1;
            i++;
        }
        else
        i++;
        if(c==')')
        break;
        num += (c -'0'); 
    }
    if(num>-1){
        num = ReduzInteiro(num);
    }
    
    return num;
}
int MontaSenha(int senha, int dig){
    senha =senha*10 +dig;
    return senha;
}
int main(){
    char c;
    int num, senha=0;

    while(1){
        scanf("%c", &c);
        if(c=='('){
           num = ReduzCodigo();
           if(num==-1){
            printf("[ERRO]");
           }else{
            printf("[%d]",num);
            senha = MontaSenha(senha,num);
           }
        }else
        printf("%c", c);
        if(c=='.')
        break;
    }
    printf(" SENHA:%d\n",senha);

    return 0;
}