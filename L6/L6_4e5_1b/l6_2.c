#include <stdio.h>
typedef struct
{
    int idMensa;
    int idPac;
    int tamM;
    char mens[9];
    int erro;
} tPacote;
tPacote LePacote()
{
    tPacote pacote;
    char dig, lixo[100];
    int i;
    scanf("%d %d %c", &pacote.idMensa, &pacote.idPac, &dig);
    pacote.tamM = dig - '0';
    for (i = 0; i < pacote.tamM; i++)
    {
        scanf("%c", &pacote.mens[i]);
    }
    scanf("%*[^ 9-0]"); // lê uma sequência de caracteres até encontrar um dígito de 0 a 9 e joga fora o que foi lido
    scanf("%d\n", &pacote.erro);
    return pacote;
}
void ImprimePacote(tPacote pacote)
{
    int i;
    printf("PCT: %d,%d,%d,", pacote.idMensa, pacote.idPac, pacote.tamM);
    for (i = 0; i < pacote.tamM; i++)
    {
        printf("%c", pacote.mens[i]);
    }
    printf(",%d\n", pacote.erro);
}
int soma(tPacote pacote)
{
    int soma = 0, i = 0;
    soma = pacote.idMensa + pacote.tamM + pacote.idPac;
    if (pacote.tamM > 0)
    {
        for (i = 0; i < pacote.tamM; i++)
        {
            soma += pacote.mens[i];
        }
    }
    return soma;
}
int main()
{
    int qtd, i;
    scanf("%d\n", &qtd);
    tPacote pacotes[qtd];
    for (i = 0; i < qtd; i++)
    {
        pacotes[i] = LePacote();
        if (soma(pacotes[i]) == pacotes[i].erro)
            ImprimePacote(pacotes[i]);
        else
            printf("FALHA!\n");
    }

    return 0;
}