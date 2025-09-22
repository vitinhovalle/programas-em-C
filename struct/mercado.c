#include <stdio.h>
struct produto{
    char nome[30];
    float preco;
};
int main(){
    struct produto p[10];
    for (int c = 0; c < 10; c++){
        printf("PRODUTO %d\n", c + 1);
        printf("Nome: ");
        scanf("%s", p[c].nome);
        printf("Preco: ");
        scanf("%f", &p[c].preco);
    }
    puts("\nPRODUTOS ABAIXO DE R$20");
    for (int c = 0; c < 10; c++){
        if (p[c].preco < 20)
            printf("%s: R$%.2f\n", p[c].nome, p[c].preco);
    }
    puts("\nPRODUTOS ENTRE R$20 E R$100");
    for (int c = 0; c < 10; c++){
        if (p[c].preco >= 20 && p[c].preco <= 100)
            printf("%s: R$%.2f\n", p[c].nome, p[c].preco);
    }
    puts("\nPRODUTOS ACIMA DE R$100");
    for (int c = 0; c < 10; c++){
        if (p[c].preco > 100)
            printf("%s: R$%.2f\n", p[c].nome, p[c].preco);
    }
    return 0;
}
