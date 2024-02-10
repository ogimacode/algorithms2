
#include <stdio.h>
#include <string.h>

// Definir a struct Endereco com typedef

typedef struct {
    char rua[100];
    int numero;
    
} Endereco;

// Definir a struct Pessoa com typedef, que inclui um campo do tipo Endereco

typedef struct {
    char nome[100];
    int idade;
    float salario;
    Endereco endereco;
    
} Pessoa;

int main() {
    
    // Declarar um array de 5 structs Pessoa
    Pessoa pessoas[5];

    // Preencher os campos das structs com dados digitados pelo usuário
    for (int i = 0; i < 5; i++) {
        printf("\nDigite o nome da Pessoa %d: ", i + 1);
        gets(pessoas[i].nome);

        printf("Digite a idade da Pessoa %d: ", i + 1);
        scanf("%d%*c", &pessoas[i].idade);

        printf("Digite o salário da Pessoa %d: ", i + 1);
        scanf("%f%*c", &pessoas[i].salario);

        printf("Digite o nome da rua da Pessoa %d: ", i + 1);
        gets(pessoas[i].endereco.rua);

        printf("Digite o número da casa da Pessoa %d: ", i + 1);
        scanf("%d%*c", &pessoas[i].endereco.numero);
    }

    // Exibir os dados de todas as Pessoas
    printf("\nDados das Pessoas:\n");
    for (int i = 0; i < 5; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Idade: %d anos\n", pessoas[i].idade);
        printf("Salário: R$%.2f\n", pessoas[i].salario);
        printf("Endereço: %s, %d\n", pessoas[i].endereco.rua, pessoas[i].endereco.numero);
        printf("\n");
    }
    
}


