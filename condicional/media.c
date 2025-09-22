#include <stdio.h>
int main(){
    float a, b, c, media;
    printf("Insira tres notas: ");
    scanf("%f %f %f", &a, &b, &c);
    if ((a < 0 || a > 10) || (b < 0 || b > 10) || (c < 0 || c > 10))
        printf("Nota invalida");
    else{
        if (a <= b && a <= c){
            media = (b + c)/2;
            printf("Media: %.2f", media);       
        }
        else if (b <= a && b <= c){
            media = (a + c)/2;
            printf("Media: %.2f", media);       
        }
        else{
            media = (a + b)/2;
            printf("Media: %.2f", media);       
        }
    }
    return 0;
}
