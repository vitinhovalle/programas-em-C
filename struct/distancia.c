#include <stdio.h>
#include <math.h>
struct Ponto{
    double x, y;
};
double calcularDistancia(struct Ponto* p1, struct Ponto* p2){
    double d, somax, somay;
    somax = pow((p1 -> x - p2 -> x), 2); 
    somay = pow((p1 -> y - p2 -> y), 2);
    d = sqrt(somax + somay);
    return d;
}
int main(){
    struct Ponto p1, p2;
    printf("Coordenadas do primeiro ponto (x,y): ");
    scanf("%lf %lf", &p1.x, &p1.y);
    printf("Coordenadas do segundo ponto (x,y): ");
    scanf("%lf %lf", &p2.x, &p2.y);
    printf("Distancia entre (%.2lf,%.2lf) e (%.2lf,%.2lf): %.2lf", p1.x, p1.y, p2.x, p2.y, calcularDistancia(&p1, &p2));
    return 0;
}
