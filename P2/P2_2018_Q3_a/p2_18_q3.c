#include<stdio.h>
double LeNotasECalculaMediaAluno(){
    double media=0, n, menorN;
    int i=0;
    char c;
    scanf("%*c");
    while(1){
        scanf("%lf%c", &n,&c);
        if(i==0){
            menorN = n; 
        }
        else if(n<menorN)
        menorN = n;
        media += n;
        i++;
        if(c==']')
        break;
    }
    if(i>1){
    i--;
    media= (media-menorN)/i;
    }
    else
    media= media/i;
    return media;
}
int ContaAlunosAprovadosTurma(){
    int qtdApro=0, qtdAlu, i;
    char c; 
    scanf("%d",&qtdAlu);
    for(i=0;i<qtdAlu;i++){
        scanf("%*c%c%*c",&c);
        if(LeNotasECalculaMediaAluno()>=70){
        qtdApro++;
        printf("%c\n",c);
        }
    }
    return qtdApro;
}
int main(){
    int i,qtd, maior , menor, n, menorT, maiorT;
    scanf("%d", &qtd);
    for(i=1;i<=qtd;i++){
        printf("TURMA:%d\n",i);
        n=ContaAlunosAprovadosTurma();
        if(i==1){
            maior = menor = n;
            maiorT = menorT = i;
        }
        if(maior<n){
        maior = n;
        maiorT =i;
        }
        if(menor>n){
        menor = n;
        menorT= i;
        }
    }
    printf("MAIOR:TURMA %d MENOR:TURMA %d\n",maiorT,menorT);

    return 0;
}