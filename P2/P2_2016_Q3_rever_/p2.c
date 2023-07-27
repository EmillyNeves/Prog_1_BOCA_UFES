#include <stdio.h>
int EhProduto(char prd)
{
    if (prd >= 'A' && prd <= 'Z')
        return 1;
    return 0;
}
int AcabaramOsProdutos(char prd)
{
    if (prd == '0')
        return 1;
    return 0;
}
int QtdDoProdutoMaisComprado()
{
    int qtd = 0, i = 0, maior = 0;
    char c2 = 'a', c1;
    while (1)
    {
        scanf("%c", &c1);
        if (AcabaramOsProdutos(c1))
            break;
        else
        {   
            if (EhProduto(c1))
            {   if(i==0){
                qtd = 1;
                i++;
                }
                else if (c1 == c2)
                {
                    qtd++;
                }
                else if (c1 != c2)
                {
                    if (qtd > maior)
                        maior = qtd;
                    i=0;
                }
                c2 = c1;
                printf("%c ",c1);
            }
        }
    }
    return maior;
}
int main()
{
    int id, guloso = 0, qtd, maiorQtd, i = 0;

    while (1)
    {
        scanf("%d ", &id);
        if (id == -1)
            break;
        qtd = QtdDoProdutoMaisComprado();
        if (i == 0)
        {
            i++;
            maiorQtd = qtd;
            guloso = id;
        }
        if (maiorQtd < qtd)
        {
            maiorQtd = qtd;
            guloso = id;
        }
    }
        printf("CLIENTE:%d QTD:%d", guloso, maiorQtd);

    return 0;
}