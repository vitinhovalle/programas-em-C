#include <stdio.h>
int fibonacci(int n){
    if (n == 1) return 1;
    else if (n == 2) return 1;
    else return fibonacci(n - 1) + fibonacci(n - 2);
}
int main(){
    int n;
    puts("---------FIBONACCI---------");
    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);
    for (int i = 1; i < n + 1; i++)
        printf("%d ", fibonacci(i));
    return 0;
}
