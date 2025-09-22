#include <stdio.h>
void caixaEletronico(int n){
    int notas100 = 0, notas50 = 0, notas20 = 0, notas10 = 0;
    int vetor[4] = {notas100, notas50, notas20, notas10};
    for (int c=100, i=0; i<4; i++){
            vetor[i] = n/c;
            n -= vetor[i]*c;
            if (vetor[i] != 0)
                printf("%dx%d ", vetor[i], c);
            c = c/20*10;
        } 
}
int main(){
    int valor;
    printf("Saque: R$");
    scanf("%d", &valor);
    if (valor%10 != 0 || valor <= 0)
        puts("Valor invalido");
    else
        caixaEletronico(valor);
    return 0;
}
