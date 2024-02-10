
#include <stdio.h>
#include <string.h>

// Definir a struct Endereco com typedef:

typedef struct {
    
    char rua[100];
    int numero;
    
} Endereco;

// Definir a struct Pessoa com typedef, 
// que inclui um campo do tipo Endereco:

typedef struct {
    
    char nome[100];
    int idade;
    float salario;
    Endereco endereco;
    
} Pessoa;

int main() {
    
    // Declarar uma variável do tipo Pessoa
    Pessoa pessoa;
    
    // Declarar uma variável do tipo Endereco
    Endereco endereco;

    // Preencher os campos da variável pessoa com valores
    strcpy(pessoa.nome, "João da Silva");
    pessoa.idade = 30;
    pessoa.salario = 5000.50;
    
    // Preencher os campos da variável endereco com valores
    strcpy(endereco.rua, "Rua Principal");
    endereco.numero = 123;

    // Colocando o "endereco" na "pessoa":
    pessoa.endereco = endereco;

    // Exibir os valores armazenados na struct Pessoa
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d anos\n", pessoa.idade);
    printf("Salário: R$%.2f\n", pessoa.salario);
    printf("Endereço: %s, %d\n", pessoa.endereco.rua, pessoa.endereco.numero);

}



