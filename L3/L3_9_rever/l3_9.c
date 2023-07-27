#include<stdio.h>
int  verificapH(float  pH){
    if(pH==7)
    return 0;
    if(pH<7)
    return 1;
    return 2;
}

int verificaGotaChuvaAcida(float pH){
    if(pH<5.7)
    return 1;
    if(pH>=5.7)
    return 2;
    return 0;
}

float  porcentagem(float  total, float  valor){
return (valor/total)*100;
}

void imprimeResultadosAnalise(float porcentagemGotasChuvaAcida, float porcentagemGotasChuvaNormal){
    if(porcentagemGotasChuvaAcida>=75)
    printf("Chuva Acida %.2f%% %.2f%%", porcentagemGotasChuvaAcida, porcentagemGotasChuvaNormal);
    else if(porcentagemGotasChuvaNormal>=75)
    printf("Chuva Normal %.2f%% %.2f%%", porcentagemGotasChuvaAcida, porcentagemGotasChuvaNormal);
    else
    printf("Chuva com indicios de chuva acida %.2f%% %.2f%%", porcentagemGotasChuvaAcida, porcentagemGotasChuvaNormal);
}

void imprimePHs(int qtdA, int qtdB, int qtdN,float phB, float phN, float phA){
    printf("%d %d %d %.2f %.2f %.2f\n", qtdA, qtdB, qtdN, phA, phB, phN);
}

int main(){
    int n1, n2, n3, ph, i=-1, chA=0, chN=0;
    int qtdA=0, qtdB=0, qtdN=0;
    float gota, phB=0, phN=0, phA=0, dif1, dif2, pN, pA;
    scanf("%d %d %d", &n1, &n2, &n3);
   
    while(scanf("%f", &gota)==1){
        if(i==-1){//inicializa as variáveis
            phB = phN = phA= gota;
            i=0;
            dif1 = 7-gota;
            if(dif1<0)
            dif1*=-1;
        }
        
        ph = verificapH(gota);
        if(!ph)// verifica o ph e qtd
        qtdN++;
        else if(ph==1)
        qtdA++;
        else
        qtdB++;
        
        if(gota>phB)//vericica o mais B e A
        phB=gota;
        if(gota<phA)
        phA = gota;
        
        dif2 = 7-gota;//verifica o mais N
        if(dif2<0)
            dif2*=-1;
        if(dif1>dif2){
            phN=gota;
            dif1 = dif2;
        }

        i = verificaGotaChuvaAcida(gota);//verifica chuva acida ou normal
        if(i==1)
        chA++;
        else if(i==2)
        chN++;
    }   
        if(i==-1)
            printf("Nenhuma gota foi avaliada");
        else{
            imprimePHs(qtdA, qtdB, qtdN,phB, phN,phA);
            pA=porcentagem((qtdA+qtdB+qtdN), chA);
            pN=porcentagem((qtdA+qtdB+qtdN), chN);
            imprimeResultadosAnalise(pA, pN);
        }

    return 0;
}