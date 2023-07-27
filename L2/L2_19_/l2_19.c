#include<stdio.h>
typedef struct{
    int id;
    char sex;
    int n1;
    int n2;
    int n3;
}tAtleta;
typedef struct{
    tAtleta melhorM;
    tAtleta melhorF;
    tAtleta piorM;
    tAtleta piorF;  
    int somaNotasF;
    int somaNotasM;
}tDelegacao;
tAtleta melhorAtleta(tAtleta melhor, tAtleta atleta){

    if(melhor.n3<atleta.n3){
    melhor = atleta;
    }
    else if(melhor.n3==atleta.n3){
        if(melhor.n2<atleta.n2){
        melhor = atleta;
        } else if(melhor.n1<atleta.n1){
        melhor = atleta;
        }
        if(melhor.n1==atleta.n1 && melhor.n2==atleta.n2 && melhor.n3==atleta.n3 && melhor.id>atleta.id)
        melhor = atleta;
    }
        
    return melhor;
}
tAtleta piorAtleta(tAtleta pior, tAtleta atleta){
    
    if(pior.n3>atleta.n3){
    pior = atleta;
    }
    else if(pior.n3==atleta.n3){
        if(pior.n2>atleta.n2){
        pior = atleta;
        } 
        else if(pior.n1>atleta.n1){
        pior = atleta;
        }
        if(pior.n1==atleta.n1 && pior.n2==atleta.n2 && pior.n3==atleta.n3 && pior.id<atleta.id)
        pior = atleta;
    }
    return pior;
}
tDelegacao recebeDelecacao(tDelegacao delegacao){
    int f=1, m=1, aux;
    tAtleta atleta;
    delegacao.somaNotasF=0;
    delegacao.somaNotasM=0;

    while(1){
        scanf("%d ", &atleta.id);
        if(atleta.id<0)
        break;
        scanf( "%c %d %d %d ",&atleta.sex,&atleta.n1,&atleta.n2,&atleta.n3);

        if(atleta.n2<atleta.n1){//organiza notas ordem crescente
            aux= atleta.n1;
            atleta.n1 = atleta.n2;
            atleta.n2 = aux;
        }
        if(atleta.n3<atleta.n2){ 
            aux= atleta.n2;
            atleta.n2 = atleta.n3;
            atleta.n3 = aux;
        }
        if(atleta.n2<atleta.n1){
            aux= atleta.n2;
            atleta.n2 = atleta.n1;
            atleta.n1 = aux;
        }

        if(atleta.sex =='F' && f==1){//inicializa a primeira melhor e pior
            delegacao.somaNotasF +=  atleta.n3;
            delegacao.melhorF = atleta;
            delegacao.piorF = atleta; 
            f++;
        }
        else if(atleta.sex =='M' && m==1){//inicializa o primeiro melhor e pior
            delegacao.somaNotasM +=  atleta.n3;
            delegacao.melhorM = atleta;
            delegacao.piorM = atleta; 
            m++;
        }
        else if(atleta.sex =='F'){//verifica atletas
            delegacao.somaNotasF +=  atleta.n3;
            delegacao.melhorF = melhorAtleta(delegacao.melhorF, atleta);
            delegacao.piorF = piorAtleta( delegacao.piorF, atleta);
        }
        else if(atleta.sex =='M' ){
            delegacao.somaNotasM +=  atleta.n3;
            delegacao.melhorM = melhorAtleta( delegacao.melhorM, atleta);
            delegacao.piorM = piorAtleta( delegacao.piorM, atleta);
        }
        
    }
    return delegacao;
}
void resultadoDelegacao(int n, tDelegacao delegacao){
    printf("MELHORES ATLETAS DA DELEGACAO %d\n", n);
    printf("MASCULINO: %d FEMININO: %d\n", delegacao.melhorM.id, delegacao.melhorF.id);
    printf("PIORES ATLETAS DA DELEGACAO %d\n", n);
    printf("MASCULINO: %d FEMININO: %d\n\n", delegacao.piorM.id, delegacao.piorF.id);
}
int main(){
    int i ,qtdD, maiorF, maiorM, delF=0, delM=0;
    scanf("%d", &qtdD);
    tDelegacao delegacoes;
    
    for(i=1;i<=qtdD;i++){

        delegacoes = recebeDelecacao(delegacoes);

        if(i==1){
            maiorF = delegacoes.somaNotasF;
            maiorM = delegacoes.somaNotasM;
        }
        resultadoDelegacao((i), delegacoes);
        
        if(maiorM<delegacoes.somaNotasM){
            delM = i;
            maiorM=delegacoes.somaNotasM;
        }
        if(maiorF<delegacoes.somaNotasF){
            delF = i;
            maiorF=delegacoes.somaNotasF;
        }
    }
    if(delF>0)
    printf("DELEGACAO CAMPEA:\nMASCULINO: %d FEMININO: %d", delM, delF);
}