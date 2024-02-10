
#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[100];
    int idade;
} Pessoa;

int main() {
    // Declarar um array de 10 structs Pessoa:
    Pessoa pessoas[10];

    // Preencher o array com diferentes nomes e idades:
    strcpy(pessoas[0].nome, "João");        pessoas[0].idade = 30;
    strcpy(pessoas[1].nome, "Maria");       pessoas[1].idade = 25;
    strcpy(pessoas[2].nome, "Pedro");       pessoas[2].idade = 35;
    strcpy(pessoas[3].nome, "Ana");         pessoas[3].idade = 28;
    strcpy(pessoas[4].nome, "Carlos");      pessoas[4].idade = 30;
    strcpy(pessoas[5].nome, "Sara");        pessoas[5].idade = 25;
    strcpy(pessoas[6].nome, "Miguel");      pessoas[6].idade = 35;
    strcpy(pessoas[7].nome, "Lúcia");       pessoas[7].idade = 28;
    strcpy(pessoas[8].nome, "Pedro");       pessoas[8].idade = 25;
    strcpy(pessoas[9].nome, "Laura");       pessoas[9].idade = 40;

    // Solicitar ao usuário que insira uma idade
    int idadeProcurada;
    printf("Digite uma idade para encontrar pessoas: ");
    scanf("%d%*c", &idadeProcurada);

    // Encontrar e imprimir os nomes das pessoas com a idade inserida:
    printf("Nomes das pessoas com %d anos:\n", idadeProcurada);
    for (int i = 0; i < 10; i++)
        if (pessoas[i].idade == idadeProcurada)
            printf("%s\n", pessoas[i].nome);
}


