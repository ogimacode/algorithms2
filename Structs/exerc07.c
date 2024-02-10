
#include <stdio.h>
#include <string.h>

// Definir a struct Pessoa com typedef

typedef struct {
    
    char nome[100];
    int idade;
    
} Pessoa;

int main()
{
    // Declarar um array de 5 structs Pessoa
    Pessoa pessoas[5];

    // Preencher o array com diferentes nomes e idades:
    strcpy(pessoas[0].nome, "João");     pessoas[0].idade = 30;
    strcpy(pessoas[1].nome, "Maria");    pessoas[1].idade = 25;
    strcpy(pessoas[2].nome, "Pedro");    pessoas[2].idade = 35;
    strcpy(pessoas[3].nome, "Ana");      pessoas[3].idade = 28;
    strcpy(pessoas[4].nome, "Carlos");   pessoas[4].idade = 40;

    // Algoritmo de ordenação de bolhas para ordenar por idade:
    for (int i = 0; i < 5 - 1; i++)
        for (int j = 0; j < 5 - i - 1; j++)
            if (pessoas[j].idade > pessoas[j + 1].idade)
            {
                Pessoa temp = pessoas[j];
                pessoas[j] = pessoas[j + 1];
                pessoas[j + 1] = temp;
            }

    // Imprimir nomes e idades em ordem crescente de idade:
    printf("Nomes e Idades em Ordem Crescente de Idade:\n");
    
    for (int i = 0; i < 5; i++) {
        printf("Nome: %s, Idade: %d anos\n", pessoas[i].nome, pessoas[i].idade);
    }
}


