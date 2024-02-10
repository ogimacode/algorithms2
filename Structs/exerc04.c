
#include <stdio.h>
#include <string.h>

// Declaração da struct Pessoa

struct Pessoa {
    char nome[100];
    char email[100];
    int idade;
    float salario;
};

int main() {
    
    // Declaração e inicialização de uma variável do tipo Pessoa
    struct Pessoa pessoa;

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
    
    printf("\nDigite o novo email: ");
    gets(pessoa.email);
        
    printf("Digite a nova idade: ");
    scanf("%d%*c", &pessoa.idade);
        
    printf("Digite o novo salário: ");
    scanf("%f%*c", &pessoa.salario);
    
    // Exiba os valores armazenados na struct
    
    printf("\nNome: %s\n", pessoa.nome);
    printf("Email: %s\n", pessoa.email);
    printf("Idade: %d anos\n", pessoa.idade);
    printf("Salário: R$%.2f\n", pessoa.salario);

}

