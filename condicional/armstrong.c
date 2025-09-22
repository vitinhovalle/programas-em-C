#include <stdio.h>
#include <math.h>
int main(){
    int N, c, d, u;
    printf("Insira um numero de 3 digitos: ");
    scanf("%d", &N);
    if (N < 100 || N > 999) printf("Numero invalido");    
    else{
        c = N/100;
        d = (N - c * 100)/10;
        u = N - c * 100 - d * 10;
        if(pow(c,3) + pow(d,3) + pow(u,3) == N)
            printf("Numero de Armstrong");
        else
            printf("Relacao insatisfeita"); 
    }
    return 0;
}
