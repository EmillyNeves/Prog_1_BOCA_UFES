#include <stdio.h>
typedef struct
{
    int idM;
    int idP;
    int tam;
    char mens[9];
    int erro;
} tPacote;
typedef struct
{
    tPacote pacotes[100];
} tMensagens;
tPacote LePacote()
{
    char c;
    int i;
    tPacote pacote;
    scanf("%d %d %c", &pacote.idM, &pacote.idP, &c);
    pacote.tam = c - '0';
    for (i = 0; i < 9; i++)
    {
        scanf("%c", &pacote.mens[i]);
    }
    scanf("%*[^0-9]");
    scanf("%d\n", &pacote.erro);

    return pacote;
}
int erroPacote(tPacote pacote)
{
    int valor, i;
    valor = pacote.idM + pacote.idP + pacote.tam;
    for (i = 0; i < pacote.tam; i++)
    {
        valor += pacote.mens[i];
    }
    if (pacote.erro != valor)
        return 1;
    return 0;
}
void ImprimeMensagem(tPacote pacote)
{
    int i = 0;
    if (erroPacote(pacote) == 0)
    {
        for (i = 0; i < pacote.tam; i++)
        {
            printf("%c", pacote.mens[i]);
        }
    }
    else
    {
        printf("##FALHA##");
    }
}
tMensagens OrdenaMensagens(int qtd, tMensagens mensagem)
{
    int i, j;
    tPacote aux;
    for (i = 0; i < qtd; i++)
    {
        for (j = 0; j < qtd; j++)
        {
            if (j + 1 < qtd && mensagem.pacotes[j].idM > mensagem.pacotes[j + 1].idM)
            {
                aux = mensagem.pacotes[j];
                mensagem.pacotes[j] = mensagem.pacotes[j + 1];
                mensagem.pacotes[j + 1] = aux;
            }
            else if (j + 1 < qtd && mensagem.pacotes[j].idM == mensagem.pacotes[j + 1].idM)
            {
                if (mensagem.pacotes[j].idP > mensagem.pacotes[j + 1].idP)
                {
                    aux = mensagem.pacotes[j];
                    mensagem.pacotes[j] = mensagem.pacotes[j + 1];
                    mensagem.pacotes[j + 1] = aux;
                }
            }
        }
    }
    return mensagem;
}
void imprimeMensagem(int qtd, tMensagens mensagem)
{
    int i, n = mensagem.pacotes[0].idM;
    for (i = 0; i < qtd; i++)
    {
        if (mensagem.pacotes[i].idM == n)
        {
            ImprimeMensagem(mensagem.pacotes[i]);
        }
        else
        {
            printf("\n");
            ImprimeMensagem(mensagem.pacotes[i]);
            n = mensagem.pacotes[i].idM;
        }
    }
    printf("\n");
}

int main()
{
    int i, qtd;

    scanf("%d\n", &qtd);
    tMensagens mensagens;
    tPacote pacote[qtd];
    for (i = 0; i < qtd; i++)
    {

        mensagens.pacotes[i] = LePacote();
    }
    mensagens = OrdenaMensagens(qtd, mensagens);
    imprimeMensagem(qtd, mensagens);

    return 0;
}
