#include <stdio.h>
int main(){
    int c, cc, n;
    printf("Insira um numero de linhas: ");
    scanf("%d", &n);
    if (n >= 0 && n <= 10){
        c = 0;
        while (n > 0){
            while (c < n){
                printf("*");
                c++;
                if (c == n - 1){
                    printf("*\n");
                    c++;
                }
            }
            c = 0;
            n--;
        }
    }
    else if (n <= 0 && n >= -10){
        cc = 1;
        c = n + cc;
        while (c <= 0){
            while (c > n){
                if (c == n + 1){
                    printf("*\n");
                    c--;
                }
                else{
                    printf("*");
                    c--;
                }
            }
            cc++;
            c = n + cc;
        }
    }
    else
        printf("Numero invalido");
    return 0;
}
