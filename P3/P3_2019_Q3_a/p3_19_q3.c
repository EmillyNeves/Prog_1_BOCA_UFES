#include <stdio.h>
typedef struct
{
    int id;
    int qtdP;
    char tipo[100];
    int km;
} tCarro;
typedef struct
{
    int num;
    tCarro carros[100];

} tConcessionaria;
tCarro LeCarro()
{
    tCarro carro;
    scanf("%d %d %s %d\n", &carro.id, &carro.qtdP, carro.tipo, &carro.km);
    return carro;
}
void ImprimeCarro(tCarro carro)
{
    printf("CARRO (%d): %s de %d passageiros e com %d km\n", carro.id, carro.tipo, carro.qtdP, carro.km);
}
int ObtemNumPassageirosCarro(tCarro carro)
{
    return carro.qtdP;
}
int ObtemKmCarro(tCarro carro)
{
    return carro.km;
}
tConcessionaria LeCarrosConcessionaria()
{
    tConcessionaria concessionaria;
    int i = 0;
    scanf("%d\n", &concessionaria.num);
    for (i = 0; i < concessionaria.num; i++)
    {
        concessionaria.carros[i] = LeCarro();
    }
    return concessionaria;
}
void ListaCarrosConcessionaria(tConcessionaria concessionaria, int qtdPassageiros, int km)
{
    int i;
    for (i = 0; i < concessionaria.num; i++)
    {
        if (qtdPassageiros == ObtemNumPassageirosCarro(concessionaria.carros[i]))
        {
            if (km == -1)
                ImprimeCarro(concessionaria.carros[i]);
            else if (ObtemKmCarro(concessionaria.carros[i]) <= km)
                ImprimeCarro(concessionaria.carros[i]);
        }
        else if (qtdPassageiros == -1)
        {
            if (km == -1)
                ImprimeCarro(concessionaria.carros[i]);
            else if (ObtemKmCarro(concessionaria.carros[i]) <= km)
                ImprimeCarro(concessionaria.carros[i]);
        }
    }
}
int main()
{
    tConcessionaria concessionaria;

    concessionaria = LeCarrosConcessionaria();

    int qtdPassageiros, km, i = 0;
    while (scanf("%d,%d", &qtdPassageiros, &km) == 2)
    {
        printf("Caso %d:\n", ++i);
        ListaCarrosConcessionaria(concessionaria, qtdPassageiros, km);
    }

    return 0;
}