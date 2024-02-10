
#include <stdio.h>
#include <string.h>

// Definir O TIPO DE DADOS "Pessoa":

typedef struct {
    char nome[100];
    char email[100];
    int idade;
    float salario;
} Pessoa;

int main() {
    
    // Declaração e inicialização de uma variável do tipo Pessoa
    Pessoa pessoa;

    // Preencha a variável com valores
    strcpy(pessoa.nome, "João da Silva");
    strcpy(pessoa.email, "joao@example.com");
    pessoa.idade = 30;
    pessoa.salario = 5000.50;

    // Exiba os valores armazenados na struct
    printf("Nome: %s\n", pessoa.nome);
    printf("Email: %s\n", pessoa.email);
    printf("Idade: %d anos\n", pessoa.idade);
    printf("Salário: R$%.2f\n", pessoa.salario);
}


