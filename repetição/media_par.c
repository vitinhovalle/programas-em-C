#include <stdio.h>
int main(){
    int cont_i = 0, cont_p = 0, n, x;
    float media_i = 0, media_p = 0; 
    printf("Digite um numero natural: ");
    scanf("%d", &n);
    if (n <= 0) return 1;
    printf("Agora digite %d numeros naturais:\n", n);
    for (int c = 1; c <= n; c++){
        printf("%d: ", c);
        scanf("%d", &x);
        if (x < 0)
            break;
        if (x % 2 == 1){
            cont_i++;
            media_i += x;
        }
        else{
            cont_p++;
            media_p += x;
        }
    }
    media_i /= cont_i;
    media_p /= cont_p;
    printf("Media dos impares = %.2f\n", media_i);
    printf("Media dos pares = %.2f\n", media_p);
    return 0;
}
