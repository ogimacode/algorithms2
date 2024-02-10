
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

    // Preencher os campos da variável pessoa com valores
    strcpy(pessoa.nome, "João da Silva");
    pessoa.idade = 30;
    pessoa.salario = 5000.50;

    // Preencher o campo de endereço
    strcpy(pessoa.endereco.rua, "Rua Principal");
    pessoa.endereco.numero = 123;

    // Exibir os valores armazenados na struct Pessoa
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d anos\n", pessoa.idade);
    printf("Salário: R$%.2f\n", pessoa.salario);
    printf("Endereço: %s, %d\n", pessoa.endereco.rua, pessoa.endereco.numero);

}



