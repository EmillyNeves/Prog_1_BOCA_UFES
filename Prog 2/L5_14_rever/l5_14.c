#include <stdio.h> 
#include <stdlib.h> 
 
typedef struct{ 
 int codigo; 
 char sobrenome[21]; 
 char nome[21]; 
 int nota; 
 int idade; 
} tCandidato; 
 
tCandidato LeCandidato(); 
void ImprimeCandidato(tCandidato candidato); 
 
int ComparaString(char * str1, char * str2){
int i=0;
    while(str1[i]!='\0'){
        if(str1[i]!=str2)
        return 0;
        i++;
    }
    while(str2[i]!='\0'){
        if(str1[i]!=str2[i])
        return 0;
        i++;
    }
return 1;
}

void ordenaVetor(tCandidato candidato[], int qtd){
int i,j;
    for(i=0;i<qtd;i++){
        for(j=0;j<qtd;j++){
            if( (candidato[j].codigo !=-1) && ComparaString(candidato[i].sobrenome, candidato[j].sobrenome)){
                 ImprimeCandidato(candidato[j]);
                 candidato[j].codigo =-1;
            }
        }
    }
}
 
int main(){ 
 int qtdCand, i = 0; 
  
 scanf("%d", &qtdCand); 
  tCandidato candidatos[qtdCand]; 
  
 for(i = 0; i < qtdCand; i++){ 
  candidatos[i] = LeCandidato(); 
 } 
 ordenaVetor(candidatos, qtdCand);
  
    return 0;     
} 
 
tCandidato LeCandidato(){ 
 tCandidato candidato; 
 scanf("%*[^{]"); 
 scanf("%*[{ ]"); 
 scanf("%d", &candidato.codigo); 
 scanf("%*[, ]"); 
 scanf("%[^,],", candidato.sobrenome); 
 scanf("%*[ ]"); 
 scanf("%[^,],", candidato.nome); 
 scanf("%d", &candidato.nota); 
 scanf("%*[, ]"); 
 scanf("%d", &candidato.idade); 
 scanf("%*[^\n]"); 
 return candidato; 
} 
  
 void ImprimeCandidato(tCandidato candidato){  
    printf("CAND(%d): %s %s, Nota:%d, Idade:%d\n", candidato.codigo, candidato.nome,candidato.sobrenome, candidato.nota, candidato.idade); 
 }