#include <stdio.h>
#define PENDENTE 0
#define ESCOVADO 1
#define ARRUMADA 2
#define PREPARADO 3

int EscovarDentes(int dentes)
{
    if (dentes == PENDENTE)
        printf("Escovando os dentes!\n");
    else
        printf("Isso ja foi feito!\n");
    return 1;
}
int ArrumarCama( int cama)
{
    if (cama == PENDENTE)
        printf("Arrumando a cama!\n");
    else
        printf("Isso ja foi feito!\n");
    return 1;
}
int PrepararCafe( int cafe)
{
    if (cafe == PENDENTE)
        printf("Preparando o cafe!\n");
    else
        printf("Isso ja foi feito!\n");
    return 1;
}
int main()
{
    int dentes, cafe, cama, acao;
    dentes = cafe = cama = PENDENTE;
    while (1)
    {
        scanf("%d", &acao);
        if (acao == 0)
        {
            if (dentes == PENDENTE || cama == PENDENTE || cafe == PENDENTE)
                printf("### Ainda ha tarefas pendentes! ###\n");
            else{
                printf("Saindo de casa!\n");
                break;
            }
        }
        else
        {
            if (acao == PREPARADO)
            {
                cafe = PrepararCafe(cafe);
            }
            else if (acao == ARRUMADA)
            {
                cama = ArrumarCama(cama);
            }
            else if (acao == ESCOVADO)
            {
                dentes = EscovarDentes(dentes);
            }
        }
    }

    return 0;
}