#include <stdio.h>

int main(){

    typedef struct{
        char nome[50];
        char email[50];
        int idade;
        float salario;
    } Pessoa;
    
    Pessoa p;

    printf("Digite seu nome: ");
    gets(p.nome);
    printf("Digite seu e-mail: ");
    gets(p.email);
    printf("Digite sua idade: ");
    scanf("%d%*c", &p.idade);
    printf("Digite seu salario: ");
    scanf("%f%*c", &p.salario);

    printf("Nome : %s\n", p.nome);
    printf("E-mail: %s\n", p.email);
    printf("Idade: %d\n", p.idade);
    printf("Salario: %f\n", p.salario);

}