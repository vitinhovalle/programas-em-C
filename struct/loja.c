#include <stdio.h>
struct produto{
    char nome[30];
    float preco;
    int qtd;
};
int main(){
    int maior, n, qtdgeral = 0;
    float valor = 0; 
    printf("Quantos produtos temos na loja? ");
    scanf("%d", &n);
    struct produto p[n];
    puts("Dados dos produtos: ");
    for (int c = 0; c < n; c++){
        printf("PRODUTO %d\n", c + 1);
        printf("Nome: ");
        scanf("%s", p[c].nome);
        printf("Preco: ");
        scanf("%f", &p[c].preco);   
        printf("Quantidade: ");
        scanf("%d", &p[c].qtd);
        printf("\n");
        qtdgeral += p[c].qtd;
        if (p[c].preco * p[c].qtd > valor){    
            valor = p[c].preco*p[c].qtd;
            maior = c;
        }
    }
    printf("Produto com maior valor em estoque: %s, %.2fR$\n", p[maior].nome, valor);
    printf("Total geral de produtos: %d", qtdgeral);
    return 0;
}
