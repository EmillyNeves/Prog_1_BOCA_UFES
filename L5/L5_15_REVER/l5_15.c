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

int EhMaior(char nome1[21], char nome2[21])
{
    int i = 0;
    while (nome1[i] == nome2[i])
    {
        if (nome1[i] == '\0')
            return 0;
        i++;
    }
    if (nome1[i] > nome2[i])
        return -1;
    else
        return 1;
}

void OrdenaCrescente(tCandidato *vet, int qtd)
{
    int i, j, a;
    tCandidato aux;

    for (i = 0; i < qtd; i++)
    {
        for (j = 0; j < i; j++) // Correção aqui: j < i
        {
            if (i != j)
            {
                a = EhMaior(vet[i].nome, vet[j].nome);
                if (a == 1)
                {
                    aux = vet[i];
                    vet[i] = vet[j];
                    vet[j] = aux;
                    continue;
                }
                else if (a == -1)
                {
                    if (EhMaior(vet[i].sobrenome, vet[j].sobrenome))
                    {
                        aux = vet[i];
                        vet[i] = vet[j];
                        vet[j] = aux;
                        continue;
                    }
                }
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
void ImprimeCandidato(tCandidato candidato)
{
    printf("CAND(%d): %s %s, Nota:%d, Idade:%d\n", candidato.codigo, candidato.nome, candidato.sobrenome, candidato.nota, candidato.idade);
}