#include <stdio.h>
int contarMatriz(int a, int b, int m[a][b], int num){
    int qtd = 0;
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
            if (m[i][j] == num)
                qtd++;
        }
    }
    return qtd;
}
int main(){
    int a, b, n;
    printf("Digite o tamanho da matriz('A' x 'B'): ");
    scanf("%d %d", &a, &b);
    int matriz[a][b];
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
            printf("Elemento[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    printf("\nNessa matriz temos %d numeros %d", contarMatriz(a, b, matriz, n), n);
    return 0;
}