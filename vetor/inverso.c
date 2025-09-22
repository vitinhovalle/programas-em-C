#include <stdio.h>
int main(){
    int aux, n;
    printf("Insira o tamanho do vetor: ");
    scanf("%d", &n);
    int v1[n];
    for (int c = 0; c < n; c++){
        printf("Elemento %d: ", c + 1);
        scanf("%d", &v1[c]);
    }
    for (int i = 0;  i < n; i++){
        for (int j = i; j < n; j++){
            if (v1[j] > v1[i]){
                aux = v1[i];
                v1[i] = v1[j];
                v1[j] = aux;
            }
        }
        printf("%d ", v1[i]);
    }
    return 0;
}
