#include <stdio.h>
typedef struct
{
    int cod;
    float preco;
    int estoque;
} tProduto;
tProduto LeProduto()
{
    tProduto produto;

    scanf("%d;%f;%d", &produto.cod, &produto.preco, &produto.estoque);

    return produto;
}
int EhProduto1MaiorQ2(tProduto p1, tProduto p2)
{
    if (p1.preco > p2.preco)
        return 1;
    return 0;
}
int EhProduto1MenorQ2(tProduto p1, tProduto p2)
{
    if (p1.preco < p2.preco)
        return 1;
    return 0;
}
int TemProdutoEmEstoque(tProduto p)
{
    if (p.estoque > 0)
        return 1;
    return 0;
}
void ImprimeProduto(tProduto p)
{
    printf("COD %d, PRE %.2f, QTD %d\n", p.cod, p.preco, p.estoque);
}
int main()
{
    int i, n;
    tProduto produto, maior, menor;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        produto = LeProduto();
        if (i == 0)
        {
            maior = produto;
            menor = produto;
        }
        else
        {
            if (EhProduto1MaiorQ2(produto, maior))
            {
                maior = produto;
            }
            if (EhProduto1MenorQ2(produto, menor))
            {
                menor = produto;
            }
        }
        if (!TemProdutoEmEstoque(produto))
        {
            printf("FALTA:");
            ImprimeProduto(produto);
        }
    }
    printf("MAIOR:");
    ImprimeProduto(maior);
    printf("MENOR:");
    ImprimeProduto(menor);

    return 0;
}