#include <stdio.h>
typedef struct
{
    int id;
    int tam;
    int tabela[100][100];
} tCartela;
typedef struct
{
    int qtdCart;
    tCartela cartelas[100];
} tPartida;
tCartela LeCartela()
{
    tCartela cartela;
    scanf("%d %d\n", &cartela.id, &cartela.tam);
    int i, j;
    for (i = 0; i < cartela.tam; i++)
    {
        for (j = 0; j < cartela.tam; j++)
        {
            scanf("%d", &cartela.tabela[j][i]); // troca as linhas pelas colunas
        }
    }
    return cartela;
}
void ImprimeCartela(tCartela cartela)
{
    int i, j;
    printf("ID:%d\n", cartela.id);
    for (i = 0; i < cartela.tam; i++)
    {
        for (j = 0; j < cartela.tam; j++)
        {
            printf("%03d", cartela.tabela[i][j]); // colocar zeros a esquerda
            if (j < cartela.tam - 1)
                printf("|");
        }
        printf("\n");
    }
}
tPartida LeCartelasPartida()
{
    tPartida partida;
    int i;
    scanf("%d\n", &partida.qtdCart);
    for (i = 0; i < partida.qtdCart; i++)
    {
        partida.cartelas[i] = LeCartela();
    }
    return partida;
}
void ImprimeInvCartelasPartida(tPartida partida)
{
    int i;
    for (i = partida.qtdCart - 1; i >= 0; i--)
    {
        ImprimeCartela(partida.cartelas[i]);
    }
}
int main()
{
    tPartida partida;

    partida = LeCartelasPartida();

    ImprimeInvCartelasPartida(partida);

    return 0;
}