#include<stdio.h>//46
int EhLetraMaiuscula(char c){
    if(c>='A'&&c<='Z')
    return 1;
    return 0;
}
int EhLetraMinuscula(char c){
    if(c>='a'&&c<='z')
    return 1;
    return 0;
}
int EhNumero(char c){
    if(c>='0'&&c<='9')
    return 1;
    return 0;
}
int AnalisaSenha(){
    char c;
    int qtdD=0, qtdMa=0, qtdMi=0, qtdNu=0,qtdCa=0;
    while(1){
        scanf("%c",&c);
        if(c==')')
        break;
        qtdD++;
        if(EhNumero(c))
        qtdNu++;
        else if(EhLetraMinuscula(c))
        qtdMi++;
        else if(EhLetraMaiuscula(c))
        qtdMa++;
        else if(!EhLetraMinuscula(c)&&!EhLetraMaiuscula(c)&&!EhNumero(c))
        qtdCa++;
    }
   
    if(qtdD<6)
    return 0;
    else if(qtdMa!=0 && qtdMi!=0 && qtdNu!=0 && qtdCa!=0)
    return 2;
    else 
    return 1;
}
void imprimeAnalise(int a){
    if(a==1)
    printf("FRACA\n");
    else if(a==2)
    printf("FORTE\n");
    else if(a==0)
    printf("INVALIDA\n");
}
int main(){
    int qtdG, i ,id, qtdFor=0,qtdFra=0, qtdI=0, gruFor=0, gruFra=0,gruI=0, maisFor=0, maisI=0, maisFra=0, senha;
    char c;
    scanf("%d",&qtdG);
    
    for(i=1;i<=qtdG;i++){
        printf("GRUPO %d\n",i);
        qtdFor=qtdFra=qtdI=0;
        if(i==1){
            gruFra = i;
            gruFor = i;
            gruI = i;
        }
        while(1){
            scanf("%d(",&id);
            if(id==-1)
            break;
            senha = AnalisaSenha();
            imprimeAnalise(senha);
            if(senha==1)
            qtdFra++;
            else if(senha==0)
            qtdI++;
            else if(senha==2)
            qtdFor++;
            if(i==1){
            maisFra = qtdFra;
            maisFor = qtdFor;
            maisI = qtdI;
            }
            if(qtdFor>maisFor){
                maisFor = qtdFor;
                gruFor = i;
            }
            if(qtdFra>maisFra){
                maisFra = qtdFra;
                gruFra = i;
            }
            if(qtdI>maisI){
                maisI = qtdI;
                gruI = i;
            }
        }
        printf("\n");
    }
    printf("FORTES: GRUPO(%d) QTD(%d)\n", gruFor, maisFor);
    printf("FRACAS: GRUPO(%d) QTD(%d)\n", gruFra, maisFra);
    printf("INVALIDAS: GRUPO(%d) QTD(%d)\n", gruI, maisI);
    
    return 0;
}