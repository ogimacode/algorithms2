#include <stdio.h>


int main(){
    typedef struct {
        char rua[100];
        int num;
    } Endereco;

    typedef struct {
        int idade;
        char nome[50];
        Endereco casa;
    } Pessoa;

    Pessoa p;

    printf("Digite seu nome: ");
    gets(p.nome);
    printf("Digite sua idade: ");
    scanf("%d%*c", &p.idade);
    printf("Digite sua rua: ");
    gets(p.casa.rua);
    printf("Digite o numero da sua casa: ");
    scanf("%d%*c", &p.casa.num);

    printf("Nome da pessoa: %s\n", p.nome);
    printf("Idade da pessoa: %d\n", p.idade);
    printf("Rua da pessoa: %s\n", p.casa.rua);
    printf("Numero da casa da pessoa: %d\n", p.casa.num);
}