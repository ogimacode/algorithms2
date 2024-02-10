#include <stdio.h>
#include <string.h>

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

    Pessoa temp;
    for (i = 0; i < 5 - 1; i++){
        for (int j = 0; j < 5 - i - 1; j++){
            if (pessoas[j].idade > pessoas[j + 1].idade){
                temp = pessoas[j];
                pessoas[j] = pessoas[j + 1];
                pessoas[j + 1] = temp;
            }
        }
        
    }
    printf("Nomes ordenados de acordo com a idade: \n");

    for (i = 0; i < 5; i++){
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Idade: %d\n", pessoas[i].idade);
    }

}