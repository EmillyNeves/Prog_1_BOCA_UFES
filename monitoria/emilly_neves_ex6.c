#include <stdio.h>
float calculaValor(int atac, int niv, int def, int bonus)
{
    float valor;

    valor = ((atac + def) * 1.0) / 2;
    if (niv % 2 == 0)
        valor += bonus;

    return valor;
}
typedef struct
{
    int atac;
    int def;
    int niv;
    float valor;
} tJogador;
void resultado(tJogador j1, tJogador j2, int bonus)
{
    j1.valor = calculaValor(j1.atac, j1.niv, j1.def, bonus);
    j2.valor = calculaValor(j2.atac, j2.niv, j2.def, bonus);

    if (j1.valor == j2.valor)
        printf("Empate\n");
    else if (j1.valor > j2.valor)
        printf("Lucas\n");
    else
        printf("Luana\n");
}
int main()
{
    int qtdI, bonus, i;
    tJogador j1, j2;
    scanf("%d", &qtdI);
    for (i = 0; i < qtdI; i++)
    {
        scanf("%d", &bonus);
        scanf("%d %d %d", &j1.atac, &j1.def, &j1.niv);
        scanf("%d %d %d", &j2.atac, &j2.def, &j2.niv);
        resultado( j1, j2,bonus);
    }

    return 0;
}