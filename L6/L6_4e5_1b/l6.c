#include <stdio.h>
typedef struct
{
    int idM;
    int idP;
    int tam;
    char mens[9];
    int erro;
} tPacote;
tPacote LePacote()
{
    char c;
    int i;
    tPacote pacote;
    scanf("%d %d %c", &pacote.idM, &pacote.idP, &c);
    pacote.tam = c - '0';
    for (i = 0; i < 9; i++)
    {
        scanf("%c",&pacote.mens[i]);
    }
    scanf("%*[^0-9]");
    scanf("%d\n", &pacote.erro);

    return pacote;
}
void ImprimePacote(tPacote pacote)
{
    int i = 0;
    printf("PCT: %d,%d,%d,", pacote.idM, pacote.idP, pacote.tam);
    for (i = 0; i < pacote.tam; i++)
    {
        printf("%c", pacote.mens[i]);
    }
    printf(", %d\n", pacote.erro);
}
int main()
{
    int i, qtd;
    tPacote pacote;

    scanf("%d\n", &qtd);
    for (i = 0; i < qtd; i++)
    {
        pacote = LePacote();
        ImprimePacote(pacote);
    }

    return 0;
}
