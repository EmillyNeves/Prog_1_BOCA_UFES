#include <stdio.h>
void imprimeQtd(int tam, int vet[tam]){
    int i, j, qtd=0;
    for(i=0;i<tam;i++){
        for (qtd =0, j = 0; j < tam; j++)
        {
            if(vet[i]<vet[j])
            qtd++;
        }
        printf("%d ", qtd);
    }
    printf("\n");
}
int main()
{
    int qtd, tam, i, j;
    scanf("%d", &qtd);
    for (i = 0; i < qtd; i++)
    {
        scanf("%d", &tam);
        int list[tam];
        for (j = 0; j < tam; j++)
        {
            scanf("%d", &list[j]);
        }
        imprimeQtd(tam, list);
    }

    return 0;
}