#include <stdio.h>
int inverso(int n){
    int inv = 0, x;
    while(n/10 != 0){
        x = n%10;
        inv *= 10;
        inv += x;
        n = n/10;
    }
    inv *= 10;
    inv += n;
    return inv;
}
int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    if (n < 0){
        n *= -1;
        printf("Inverso: %d", inverso(n));
        printf("-\n");
    }
    else
        printf("Inverso: %d\n", inverso(n));
    if (inverso(n) == n)
        printf("palindromo!!!");
    return 0;
}
