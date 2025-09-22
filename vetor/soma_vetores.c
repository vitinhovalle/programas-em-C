#include <stdio.h>
#include <stdlib.h>
int* somaVetores(int n, int* v1, int* v2){
    int* v3 = (int*) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++){
        v3[i] = v1[i] + v2[i];
    }
    return v3;
}
int main(){
    int n;
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &n);
    int* v1 = (int*) malloc(n * sizeof(int));
    int* v2 = (int*) malloc(n * sizeof(int));
    puts("Vetor 1");
    for (int i = 0; i < n; i++){
        printf("Elemento %d: ", i + 1);
        scanf("%d", &v1[i]);
    }
    puts("\nVetor 2");
    for (int i = 0; i < n; i++){
        printf("Elemento %d: ", i + 1);
        scanf("%d", &v2[i]);
    }
    int* v3 = somaVetores(n, v1, v2);
    puts("\nVetor Soma");
    for (int i = 0; i < n; i++){
        printf("%d ", v3[i]);
    }
    free(v1);
    free(v2);
    free(v3);
    return 0;
}
