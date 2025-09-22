#include <stdio.h>
void matrizTransposta(int a, int b, int m[a][b]){
    int t[b][a];
    for (int j = 0; j < b; j++){
        for (int i = 0; i < a; i++){
            t[j][i] = m[i][j];
        }
    }
    puts("Matriz transposta");
    for (int j = 0; j < b; j++){
        for (int i = 0; i < a; i++){
            printf("%d ", t[j][i]);
        }
        printf("\n");
    }
}
int main(){
    int a, b;
    printf("Tamanho da matriz('A' x 'B'): ");
    scanf("%d %d", &a, &b);
    int matriz[a][b];
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
            printf("Elemento[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }
    matrizTransposta(a, b, matriz);
    return 0;
}