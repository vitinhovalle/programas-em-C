#include <stdio.h>
float mediaMatriz(int a, int b, int m[a][b]){
    float media = 0;
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++)
            media += m[i][j];
    }
    media /= (a * b);
    return media;
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
    printf("Media: %.2f", mediaMatriz(a, b, matriz));
    return 0;
}
