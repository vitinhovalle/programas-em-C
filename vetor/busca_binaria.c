#include <stdio.h>
int buscaBinaria(int *vet, int tam, int chave){
    int inicio = 0, fim = tam - 1, meio;
    while(fim >= inicio){
        meio = (inicio + fim)/2;
        if (vet[meio] == chave) return meio + 1;
        else if (vet[meio] > chave) fim = meio - 1;
        else inicio = meio + 1;
    }
    return -1;
}
int main(){
    int chave, tam;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    int vet[tam];
    for (int c = 0; c < tam; c++){
        printf("Elemento %d: ", c + 1);
        scanf("%d", &vet[c]);
    }
    printf("\nDigite o valor a ser buscado: ");
    scanf("%d", &chave);
    printf("Posicao do valor: %d", buscaBinaria(vet, tam, chave));
    return 0;
}