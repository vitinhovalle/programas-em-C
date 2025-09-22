#include <stdio.h>
int main(){
    float x, y;
    printf("Insira as coordenadas de um ponto (x,y): ");
    scanf("%f %f", &x, &y);
    if (x > 0){
        if (y > 0)
            printf("quadrante 1");
        else if (y < 0)
            printf("quadrante 4");
        else
            printf("eixo y");
    }
    else if (x < 0){
        if (y > 0)
            printf("quadrante 2");
        else if (y < 0)
            printf("quadrante 3");
        else
            printf("eixo y");
    }
    else
        printf("eixo x e eixo y");
    return 0;
}
