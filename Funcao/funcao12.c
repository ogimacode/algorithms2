#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[50];
    float nota1;
    float nota2;
    char email[50];
} aluno;

int main(){
    aluno a;

    printf("Digete o nome: ");
    gets(a.nome);
    printf("Digite a nota 1: ");
    scanf("%f", a.nota1);
    printf("Digite a nota 2: ");
    scanf("%f", a.nota2);
    printf("Digite o email: ");
    gets(a.email);
    

}