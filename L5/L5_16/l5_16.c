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
int ehMaior(tCandidato c1, tCandidato c2)
{
    if (c1.nota > c2.nota)
        return 1;
    else if (c1.nota == c2.nota)
    {
        if (c1.idade < c2.idade)
            return 1;
        else if (c1.idade == c2.idade)
        {
            if (c1.codigo < c2.codigo)
                return 1;
        }
    }
    return 0;
}
void OrdenaCrescente(tCandidato *vet, int qtd)
{
    int i, j;
    tCandidato aux;
    for (i = 0; i < qtd; i++)
    {
        for (j = 0; j < qtd; j++)
        {
            if (ehMaior(vet[i], vet[j]))
            {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
                continue;
            }
        }
    }
}

int main()
{
    int qtdCand, i = 0, j;

    scanf("%d", &qtdCand);
    tCandidato candidatos[qtdCand];

    for (i = 0; i < qtdCand; i++)
    {
        candidatos[i] = LeCandidato();
    }

    OrdenaCrescente(candidatos, qtdCand);

    for (i = 0; i < qtdCand; i++)
    {
        ImprimeCandidato(candidatos[i]);
    }

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
void ImprimeCandidato(tCandidato candidato) { printf("CAND(%d): %s %s, Nota:%d, Idade:%d\n", candidato.codigo, candidato.nome, candidato.sobrenome, candidato.nota, candidato.idade); }