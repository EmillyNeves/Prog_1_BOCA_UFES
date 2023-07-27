#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int codigo;
    char sobrenome[21];
    char nome[21];
    int nota;
    int idade;
} tCandidato;

tCandidato LeCandidato();
void ImprimeCandidato(tCandidato candidato);

int ComparaString(char *str1, char *str2)
{
    int i=0;
    while (str1[i] != '\0')
    {
        if (str1[i] != str2[i])
            return 0;
        i++;
    }
    if (str1[i] != str2[i])
        return 0;

    return 1;
}
void mesmoSobre(int qtdCand, tCandidato candidatos[qtdCand])
{
    int i, j;
    for (i = 0; i < qtdCand; i++)
    {
        for (j = 0; j < qtdCand; j++)
        {
            if (ComparaString(candidatos[i].sobrenome, candidatos[j].sobrenome))
            {
                if(candidatos[j].codigo == candidatos[i].codigo){
                continue;
                }
                else{
                    if(candidatos[i].codigo!=-1){
                    ImprimeCandidato(candidatos[i]);
                    candidatos[i].codigo = -1;
                    }
                    ImprimeCandidato(candidatos[j]);
                    candidatos[j].codigo = -1;
                }
            }
        }
    }
}
int main()
{
    int qtdCand, i = 0;

    scanf("%d", &qtdCand);
    tCandidato candidatos[qtdCand];

    for (i = 0; i < qtdCand; i++)
    {
        candidatos[i] = LeCandidato();
    }
    mesmoSobre(qtdCand,candidatos);

    return 0;
}

tCandidato LeCandidato()
{
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
void ImprimeCandidato(tCandidato candidato)
{
    printf("CAND(%d): %s %s, Nota:%d, Idade:%d\n", candidato.codigo, candidato.nome, candidato.sobrenome, candidato.nota, candidato.idade);
}