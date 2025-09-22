#include <stdio.h>
int main(){
    int n;
    float h = 0; 
    printf("Digite um numero: ");
    scanf("%d", &n);
    for (float k = 1; k <= n; k++)
        h += 1/k;
    printf("O numero harmonico de %d eh %.2f", n, h);
    return 0;
}
