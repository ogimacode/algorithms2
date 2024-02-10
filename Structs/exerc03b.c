
#include <stdio.h>

// Definir a struct Pessoa:

typedef struct {
    
    char nome[100];
    char email[100];
    int idade;
    float salario;
    
} Pessoa;

int main() {
    
    // Declarar um array de 5 estruturas Pessoa:
    
    Pessoa pessoas[5];

    // Preencher cada estrutura com dados digitados pelo usuário:
    
    for (int i = 0; i < 5; i++) {
        
        printf("Digite o nome da Pessoa %d: ", i + 1);
        gets(pessoas[i].nome);
        
        printf("Digite o email da Pessoa %d: ", i + 1);
        gets(pessoas[i].email);
        
        printf("Digite a idade da Pessoa %d: ", i + 1);
        scanf("%d%*c", &pessoas[i].idade);
        
        printf("Digite o salário da Pessoa %d: ", i + 1);
        scanf("%f%*c", &pessoas[i].salario);
    }

    // Imprimir os dados de todas as pessoas no array
    printf("\nDados das Pessoas:\n");
    for (int i = 0; i < 5; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Email: %s\n", pessoas[i].email);
        printf("Idade: %d anos\n", pessoas[i].idade);
        printf("Salário: R$%.2f\n", pessoas[i].salario);
        printf("\n");
    }
    
}


