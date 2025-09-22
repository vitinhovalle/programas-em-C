#include <stdio.h>
#include <limits.h>
#include <time.h>

#define B 10002
#define C 5970
#define M 10001

int Particione(int A[], int p, int r){
    int x, i, temp;
    x = A[r];
    i = p - 1;
    for (int j = p; j < r; j++){
        if (A[j] <= x){
            i++;
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
    temp = A[i + 1];
    A[i + 1] = A[r];
    A[r] = temp;
    return i + 1;
}
void QuickSort(int A[], int p, int r){
    int q;
    if (p < r){
        q = Particione(A, p, r);
        QuickSort(A, p, q - 1);
        QuickSort(A, q + 1, r);
    }
}
int aleatorio(int *x){
    *x = (B * (*x) + C) % M;
    return *x;
}
int main(){
    int semente = 0, tam = 10000, v[tam];
    printf("Vetor original:"); 
    for (int i = 0; i < tam; i++){
        v[i] = aleatorio(&semente);
        printf(" %d ", v[i]);
    }
    clock_t inicio, fim;
    double tempo_cpu;
    inicio = clock();
    QuickSort(v, 0, tam - 1);
    fim = clock();
    tempo_cpu = ((double) (fim - inicio))/CLOCKS_PER_SEC;
    printf("\nVetor ordenado:"); 
    for (int i = 0; i < tam; i++){
        printf(" %d ", v[i]);
    }
    printf("\nTempo de execucao do QuickSort: %f segundos", tempo_cpu);
    return 0;
}
