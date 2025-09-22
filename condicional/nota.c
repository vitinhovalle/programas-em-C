#include <stdio.h>
int main(){
    const int m = 7;
    float a, b, media;
    printf("Insira duas notas: ");
    scanf("%f %f", &a, &b);
    media = (a + b)/2;
    if (media >= m)
        printf("Aprovado");
    else
        printf("Reprovado");
    return 0;
}
