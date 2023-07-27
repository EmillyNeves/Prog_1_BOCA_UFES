#include <stdio.h>
typedef struct
{
    int id;
    int tam;
    int car[100][100];

} tCartela;
typedef struct
{
    tCartela cartelas[100];
    int qtd;
} tPartida;
tCartela LeCartela()
{
    tCartela cartela;
    int i = 0, j = 0;
    scanf("%d %d", &cartela.id, &cartela.tam);
    for (i = 0; i < cartela.tam; i++)
    {
        for (j = 0; j < cartela.tam; j++)
        {
            scanf("%d", &cartela.car[j][i]);
        }
    }
    return cartela;
}
void ImprimeCartela(tCartela cartela)
{
    printf("ID:%d\n", cartela.id);
    int i, j;
    for (i = 0; i < cartela.tam; i++)
    {
        for (j = 0; j < cartela.tam; j++)
        {
            printf("%03d", cartela.car[i][j]);
            if (j < cartela.tam - 1)
                printf("|");
        }
        printf("\n");
    }
}
tPartida LeCartelasPartida()
{
    tPartida partida;
    int i = 0;
    scanf("%d", &partida.qtd);
    for (i = 0; i < partida.qtd; i++)
    {
        partida.cartelas[i] = LeCartela();
    }
    return partida;
}
tCartela MarcaCartela(tCartela cartela, int num)
{
    int i, j;
    for (i = 0; i < cartela.tam; i++)
    {
        for (j = 0; j < cartela.tam; j++)
        {
            if (cartela.car[i][j] == num)
                cartela.car[i][j] = -1;
        }
    }
    return cartela;
}
int VenceuCartela(tCartela cartela)
{
    int i, j, pont = 0;
    for (i = 0; i < cartela.tam; i++)
    {
        for (j = 0; j < cartela.tam; j++)
        {
            if (cartela.car[i][j] == -1)
                pont++;
        }
    }
    if (pont == cartela.tam * cartela.tam)
        return 1;
    return 0;
}
tCartela ResetaCartela(tCartela cartela)
{
    return cartela;
}
tPartida ResetaPartida(tPartida partida)
{
    return partida;
}
void JogaPartida(tPartida partida)
{
    tPartida backup = partida;
    int i, n = 0, num;
    while (1)
    {
        scanf("%d", &num);
        if (num == -1)
            break;
        for (i = 0; i < partida.qtd; i++)
        {
            partida.cartelas[i] = MarcaCartela(partida.cartelas[i], num);
            if (VenceuCartela(partida.cartelas[i]))
            {
                n++;
            }
        }
    }
    if (n == 0)
    {
        printf("SEM VENCEDOR\n");
        partida = ResetaPartida(backup);
    }
    else
    {
        printf("COM VENCEDOR\n");
        for (i = 0; i < partida.qtd; i++)
        {
            if (VenceuCartela(partida.cartelas[i]))
            {
                partida.cartelas[i] = ResetaCartela(backup.cartelas[i]);
            }
            ImprimeCartela(partida.cartelas[i]);
        }
        partida = ResetaPartida(backup);
    }
}
int main()
{
    tPartida partida;
    int qtdPartidas, i;

    partida = LeCartelasPartida();

    scanf("%d", &qtdPartidas);
    for (i = 0; i < qtdPartidas; i++)
    {
        if (i != 0)
            printf("\n");
        printf("PARTIDA %d\n", i + 1);
        partida = ResetaPartida(partida);
        JogaPartida(partida);
    }
    return 0;
}