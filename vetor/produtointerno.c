#include <stdio.h>
float produtoInterno(int r, float v1[r], float v2[r]){
    float p = 0;
    for (int c = 0; c < r; c++)
        p += (v1[c] * v2[c]);
    return p;
}
int main(){
    int r;
    float v1[10], v2[10];
    printf("Dimensoes: ");
    scanf("%d", &r);
    if (r < 1 || r > 10){
        printf("Dimensao invalida");
        return 1;
    } 
    puts("Primeiro vetor: ");
    for (int c = 0; c < r; c++){
        printf("Elemento %d: ", c+1);
        scanf("%f", &v1[c]);
    }
    puts("\nSegundo vetor: ");
    for (int c = 0; c < r; c++){
        printf("Elemento %d: ", c+1);
        scanf("%f", &v2[c]);
    }
    printf("%.1f", produtoInterno(r, v1, v2));
    return 0;
}
