#include <stdio.h>
struct funcionario{
    char nome [30];
    float salario;
    int idade;
};
int main(){
    struct funcionario f[5];
    for (int c = 0; c < 5; c++){
        printf("FUNCIONARIO %d\n", c + 1);
        printf("Nome: ");
        scanf("%s", f[c].nome);
        printf("Idade: ");
        scanf("%d", &f[c].idade);
        printf("Salario: R$");
        scanf("%f", &f[c].salario);
        printf("\n");
    }
    puts("Funcionarios acima de 40 anos com salario abaixo de R$2000: ");
    for (int c = 0; c < 5; c++){
        if(f[c].idade > 40 && f[c].salario < 2000)
            printf("%s\n", f[c].nome);
    }
    return 0;
}
