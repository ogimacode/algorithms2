#include <stdio.h>

int main(){

    typedef struct{
        char nome[50];
        char email[50];
        int idade;
        float salario;
    } Pessoa;
    
    Pessoa p;

    printf("Digite seu nome: ");
    gets(p.nome);
    printf("Digite seu e-mail: ");
    gets(p.email);
    printf("Digite sua idade: ");
    scanf("%d%*c", &p.idade);
    printf("Digite seu salario: ");
    scanf("%f%*c", &p.salario);

    printf("---------------------\n");
    printf("Nome : %s\n", p.nome);
    printf("E-mail: %s\n", p.email);
    printf("Idade: %d\n", p.idade);
    printf("Salario: %f\n", p.salario);
    printf("---------------------\n");

    int i;

    for (i = 5; i != 0; i++){
        printf("Digite 1 caso queira alterar seu nome \n");
        printf("Digite 2 caso queira alterar seu email \n");
        printf("Digite 3 caso queira alterar sua idade \n");
        printf("Digite 4 caso queira alterar seu salario \n");
        printf("Digite 0 caso nao queira alterar \n");
        printf("---------------------\n");
        printf("Digite sua opcao: ");
        scanf("%d%*c", &i);
        if (i == 0){
            break;
        }
        switch (i){
            case 0:
            break;
            case 1:
            printf("Digite seu novo nome: ");
            gets(p.nome);
            break;
            case 2:
            printf("Digite seu novo email: ");
            gets(p.email);
            break;
            case 3:
            printf("Digite sua nova idade: ");
            scanf("%d%*c", &p.idade);
            break;
            case 4:
            printf("Digite seu novo salario: ");
            scanf("%f%*c", p.salario);
            default:
            printf("Numero Invalido \n");
        }

        printf("-------Informacoes Atualizadas----------\n");
        printf("Nome : %s\n", p.nome);
        printf("E-mail: %s\n", p.email);
        printf("Idade: %d\n", p.idade);
        printf("Salario: %f\n", p.salario);
        printf("---------------------\n");
    }
    printf("--- Programa Encerrado ---");
}