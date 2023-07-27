#include <stdio.h>
typedef struct
{
    int idMensa;
    int idPac;
    int tamM;
    char mens[9];
    int erro;
} tPacote;
typedef struct
{
    tPacote mensagens[100];
} tMensagens;
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
tMensagens OrdenaMensagens(int qtd, tPacote pacote[qtd])
{
    int i, j;
    tMensagens mensagem;
    for (i = 0; i < qtd; i++)
    {
        for (j = 0; j < qtd; j++)
        {
            if (pacote[i].idMensa < pacote[j].idMensa)
            {
                mensagem.mensagens[i] = pacote[j];
            }
            else if (pacote[i].idMensa == pacote[j].idMensa)
            {
                if (pacote[i].idPac < pacote[j].idPac)
                {
                    mensagem.mensagens[i] = pacote[j];
                }
            }
        }
    }
    return mensagem;
}
void imprimeMensagens(int qtd, tPacote pacotes[qtd])
{

    tMensagens mensagem = OrdenaMensagens(qtd, pacotes);
    int i, j, ant;
    for (i = 0; i < qtd; i++)
    {
        if (i - 1 >= 0 && mensagem.mensagens[i].idMensa == mensagem.mensagens[i - 1].idMensa)
        {
            if (i - 1 >= 0 && mensagem.mensagens[i - 1].idPac == mensagem.mensagens[i].idMensa - 1)
                printf("%s ", mensagem.mensagens[i].mens);
            else
                printf("##FALHA##");
        }
        else
            printf("%s ", mensagem.mensagens[i].mens);
        if (i < qtd && mensagem.mensagens[i].idMensa != mensagem.mensagens[i + 1].idMensa)
            printf("\n");
    }
}
int main()
{
    int qtd, i;
    scanf("%d\n", &qtd);
    tPacote pacotes[qtd];
    for (i = 0; i < qtd; i++)
    {
        pacotes[i] = LePacote();
    }
    imprimeMensagens(qtd, pacotes);

    return 0;
}