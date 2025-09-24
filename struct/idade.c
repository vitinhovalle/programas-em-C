#include <stdio.h>
struct pessoa{
    char nome[30];
    int idade;
};
struct pessoa *maisVelha(struct pessoa *p1, struct pessoa *p2){
    if(p1 -> idade >= p2 -> idade)
        return p1;
    else
        return p2;
}
int main(){
    struct pessoa p1;
    struct pessoa p2;
    printf("Digite o nome da primeira pessoa: ");
    scanf("%s", p1.nome);
    printf("Digite a idade da primeira pessoa: ");
    scanf("%d", &p1.idade);
    printf("\nDigite o nome da segunda pessoa: ");
    scanf("%s", p2.nome);
    printf("Digite a idade da segunda pessoa: ");
    scanf("%d", &p2.idade);
    struct pessoa *velha = maisVelha(&p1, &p2);
    printf("\nPessoa mais velha: %s, %d anos", velha -> nome, velha -> idade);
    return 0;
}