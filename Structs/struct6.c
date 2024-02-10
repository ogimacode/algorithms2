#include <stdio.h>


int main(){
    typedef struct {
        char rua[100];
        int num;
    } Endereco;

    typedef struct {
        int idade;
        char nome[50];
        Endereco casa;
    } Pessoa;

    Pessoa p[5];
    int i;

    for (i = 0; i < 5; i++){
        printf("Digite o nome da %d pessoa: ", i+1);
        gets(p[i].nome);
        printf("Digite a idade da %d primeira pessoa: ", i+1);
        scanf("%d%*c", &p[i].idade);
        printf("Digite a rua da %d pessoa: ", i+1);
        gets(p[i].casa.rua);
        printf("Digite o numero da %d pessoa: ", i+1);
        scanf("%d%*c", &p[i].casa.num);
    }

    for (i = 0; i < 5; i++){
        printf("Nome da pessoa %d: %s\n", i+1, p[i].nome);
        printf("Idade da pessoa %d: %d\n", i+1, p[i].idade);
        printf("Rua da pessoa %d: %s\n", i+1, p[i].casa.rua);
        printf("Numero da casa da pessoa %d: %d\n", i+1, p[i].casa.num);
        printf("----------------------");
    }
}