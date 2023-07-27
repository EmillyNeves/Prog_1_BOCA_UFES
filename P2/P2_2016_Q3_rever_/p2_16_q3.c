#include <stdio.h>
#include <stdlib.h>

int EhProduto(char prd){
    if(prd >= 'A' && prd <= 'Z')
        return 1;
    else
        return 0;
}

int AcabaramOsProdutos(char prd);
int QtdDoProdutoMaisComprado(){
    char prod = '\n';
    char aux = '\n';
    int qtd = 0, maior_qtd = 0;
    int cont = 0;

    while(prod != '0'){
        scanf("%c", &prod);

        if(!(EhProduto(prod)))
            continue;

        if(cont == 0){
            aux = prod; 
            maior_qtd = qtd = 1;
        }
        else if(aux == prod){
            qtd++;
        }
        else{
            aux = prod;
            qtd = 1;
        }

        if(qtd > maior_qtd){
            maior_qtd = qtd;
        }

        cont++;
        //printf("[%c]\n", prod);
    }

    return maior_qtd;
}

int main(){
    int cliente, maior_cliente = -1, qtd = -1, maior_qtd = -1;

    while(1){
        scanf("%d", &cliente);

            if(cliente == -1)
                break;

        qtd = QtdDoProdutoMaisComprado();

        if(qtd > maior_qtd){
            maior_cliente = cliente;
            maior_qtd = qtd;
        }
    }

    printf("CLIENT:%d QTD:%d", maior_cliente, maior_qtd);
}