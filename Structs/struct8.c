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

    int idade_procurada;
    printf("Digite a idade procurada: ");
    scanf("%d%*c", &idade_procurada);

    for (i = 0; i < 5; i++){
        if (idade_procurada == pessoas[i].idade){
            printf("%s\n", pessoas[i].nome);
        }
        
    }
    

}