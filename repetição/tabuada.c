#include <stdio.h>
void tabuada(int n){
    for (int c = 1; c < 11; c++){
        printf("%dx%d = %d\n", n, c, n*c);
    }
}
int main(){
    int n;
    puts("-------TABUADA-------");
    printf("Insira um numero: ");
    scanf("%d", &n);
    tabuada(n);
    return 0;
}
