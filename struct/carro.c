#include <stdio.h>
struct veiculo{
        char placa[8];
        int ano;
        int prioridade;    //   1 ou 0
    };
int main(){
    struct veiculo v[5];
    for (int c = 0; c < 5; c++){
        printf("Carro %d\n", c + 1);
        printf("Placa: ");
        scanf("%s", v[c].placa);
        printf("Ano: ");
        scanf("%d", &v[c].ano);
        printf("Prioridade: ");
        scanf("%d", &v[c].prioridade);
    }
    puts("LISTAGEM DE CARROS");
    for (int c = 0; c < 5; c++){
        if (v[c].prioridade == 1)
            printf("PLACA: %s  ANO: %d  PRIORIDADE: %d\n", v[c].placa, v[c].ano, v[c].prioridade);
    }
    for (int c = 0; c < 5; c++){
        if (v[c].prioridade == 0)
            printf("PLACA: %s  ANO: %d  PRIORIDADE: %d\n", v[c].placa, v[c].ano, v[c].prioridade);
    }
    return 0;
}
