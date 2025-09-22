#include <stdio.h>
#include <limits.h>
#include <time.h>

#define B 10002
#define C 5970
#define M 10001

void merge(int A[], int p, int q, int r){
    int n1 = q - p + 1, n2 = r - q;
    int L[n1 + 1], R[n2+ 1];
    for (int i = 0; i < n1; i++){
        L[i] = A[p + i];
    }
    for (int j = 0; j < n2; j++){
        R[j] = A[q + 1 + j];
    }
    L[n1] = INT_MAX;
    R[n2] = INT_MAX;
    int i = 0, j = 0;
    for (int k = p; k < r + 1; k++){
        if (L[i] <= R[j]){
            A[k] = L[i];
            i++;
        }
        else{
            A[k] = R[j];
            j++;
        }
    }
}

void mergeSort(int A[], int p, int r){
    int q;
    if (p < r){
        q = (p + r)/2;
        mergeSort(A, p, q);
        mergeSort(A, q + 1, r);
        merge(A, p, q, r);
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
    mergeSort(v, 0, tam - 1);
    fim = clock();
    tempo_cpu = ((double) (fim - inicio))/CLOCKS_PER_SEC;
    printf("\nVetor ordenado:"); 
    for (int i = 0; i < tam; i++){
        printf(" %d ", v[i]);
    }
    printf("\nTempo de execucao do MergeSort: %f segundos", tempo_cpu);
    return 0;
}
