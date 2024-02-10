#include <stdio.h>

int main(){


    typedef struct {
        int idade;
        char nome[50];
    } Pessoa;

    Pessoa pessoas[5];

    int i;
    for (i = 0; i < 5; i++){
        printf("Digite seu nome: ");
        gets(pessoas[i].nome);
        printf("Digite sua idade: ");
        scanf("%d%*c", &pessoas[i].idade);
    }


    for (i = 0; i < 5; i++){
        printf("Nome da %d Pessoa: %s\n", i+1, pessoas[i].nome);
        printf("Idade da %d Pessoa: %d\n", i+1, pessoas[i].idade);
        printf("-----------------\n");
    }
}