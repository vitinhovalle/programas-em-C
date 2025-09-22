#include <stdio.h>
int verificarPrimo(int n){
    if (n < 2) return 0;
    for (int c = 1; c <= n/2; c++){
        if (n % c == 0 && c != 1) return 0;
    }
    return 1;
}
int main(){
    int a, b, p = 0;
    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);
    if (a <= b){
        for (int c = a; c <= b; c++)
            if (verificarPrimo(c)) p++;
        printf("Numero de primos no intervalo [%d,%d]: %d", a, b, p);
    }
    else{
        for (int c = b; c <= a; c++)
            if (verificarPrimo(c)) p++;
        printf("Numero de primos no intervalo [%d,%d]: %d", b, a, p);
    }
    return 0;
}
