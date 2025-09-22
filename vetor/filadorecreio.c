#include <stdio.h>
#include <stdlib.h>
int particione(int notas[], int p, int r){
    int pivo, i, temp;
    pivo = notas[r];
    i = p - 1;
    for (int j = p; j < r; j++){
        if (notas[j] >= pivo){
            i++;
            temp = notas[j];
            notas[j] = notas[i];
            notas[i] = temp;
        }
    }
    temp = notas[i + 1];
    notas[i + 1] = notas[r];
    notas[r] = temp;
    return i + 1;
}
void ordena(int notas[], int p, int r){
    int q;
    if (p < r){
        q = particione(notas, p, r);
        ordena(notas, p, q - 1);
        ordena(notas, q + 1, r);
    }
}
int vetor(int alunos){
    int *notas = (int*) malloc(alunos * sizeof(int));
    int *chegada = (int*) malloc(alunos * sizeof(int));
    int lugar = 0;
    for (int i = 0; i < alunos; i++){
        scanf("%d", &chegada[i]);
        notas[i] = chegada[i];
    }
    ordena(notas, 0, alunos - 1);
    for (int i = 0; i < alunos; i++){
        if (notas[i] == chegada[i])
            lugar++;
    }
    free(notas);
    free(chegada);
    return lugar;
}
int main(){
    int testes, alunos;
    scanf("%d", &testes);
    for(int i = 0; i < testes; i++){
        scanf("%d", &alunos);
        printf("%d\n", vetor(alunos));
    }
    return 0;
}