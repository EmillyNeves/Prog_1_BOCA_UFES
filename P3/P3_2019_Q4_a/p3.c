#include <stdio.h>

typedef struct {
    int id;
    int qtdP;
    char tipo[100];
    int km;
    int estado;
    int idCliente;
} tCarro;

typedef struct {
    int num;
    tCarro carros[100];
} tConcessionaria;

tCarro LeCarro() {
    tCarro carro;
    scanf("%d %d %s %d\n", &carro.id, &carro.qtdP, carro.tipo, &carro.km);
    carro.estado = 0;
    carro.idCliente = -1;
    return carro;
}

void ImprimeCarro(tCarro carro) {
    printf("CARRO (%d): %s de %d passageiros e com %d km\n", carro.id, carro.tipo, carro.qtdP, carro.km);
}

int ObtemClienteAlugouCarro(tCarro carro) {
    return carro.idCliente;
}

int EstaDisponivelCarro(tCarro carro) {
    if (carro.estado == 0)
        return 1;
    return 0;
}

tCarro AlugaCarro(tCarro carro, int cliente) {
    carro.estado = 1;
    carro.idCliente = cliente;
    return carro;
}

tCarro DevolveCarro(tCarro carro) {
    carro.estado = 0;
    carro.idCliente = -1;
    return carro;
}

int ObtemNumPassageirosCarro(tCarro carro) {
    return carro.qtdP;
}

int ObtemKmCarro(tCarro carro) {
    return carro.km;
}

tConcessionaria LeCarrosConcessionaria() {
    tConcessionaria concessionaria;
    int i = 0;
    scanf("%d\n", &concessionaria.num);
    for (i = 0; i < concessionaria.num; i++) {
        concessionaria.carros[i] = LeCarro();
    }
    return concessionaria;
}
tConcessionaria AlugaCarroConcessionaria(tConcessionaria concessionaria, int cliente, int pass, int km) {
    int i, j = 0;
    for (i = 0; i < concessionaria.num; i++) {
        if (EstaDisponivelCarro(concessionaria.carros[i])) {
            if (pass == ObtemNumPassageirosCarro(concessionaria.carros[i]) || pass == -1) {
                if (km == -1 || ObtemKmCarro(concessionaria.carros[i]) <= km) {
                    j = 1;
                    concessionaria.carros[i] = AlugaCarro(concessionaria.carros[i], cliente);
                    printf("Alugado (cliente %d) -> ", ObtemClienteAlugouCarro(concessionaria.carros[i]));
                    ImprimeCarro(concessionaria.carros[i]);
                    break;
                }
            }
        }
    }
    if (j == 0)
        printf("Carro Indisponivel\n");

    return concessionaria;
}

tConcessionaria DevolveCarroConcessionaria(tConcessionaria concessionaria, int cliente) {
    int i;
    for (i = 0; i < concessionaria.num; i++) {
        if (ObtemClienteAlugouCarro(concessionaria.carros[i]) == cliente) {
            printf("Devolvido (cliente %d) -> ", ObtemClienteAlugouCarro(concessionaria.carros[i]));
            ImprimeCarro(concessionaria.carros[i]);
            concessionaria.carros[i] = DevolveCarro(concessionaria.carros[i]);
        }
    }
    return concessionaria;
}
int main() {
    tConcessionaria concessionaria;

    concessionaria = LeCarrosConcessionaria();

    int cliente, pass, km, i = 0;
    char acao;

    while (scanf("%d,%c\n", &cliente, &acao) == 2) {
        if (acao == 'A') {
            scanf("%d,%d\n", &pass, &km);
            concessionaria = AlugaCarroConcessionaria(concessionaria, cliente, pass, km);
        } else if (acao == 'D') {
            concessionaria = DevolveCarroConcessionaria(concessionaria, cliente);
        }
    }

    return 0;
}
