#include <stdio.h>

typedef struct{
    char titulo[50];
    char autor[50];
    int ano;
} livro;

void imprime_livro(livro);

int main(){

    livro l;

    printf("Digite o titulo: ");
    gets(l.titulo);
    printf("Digite o autor: ");
    gets(l.autor);
    printf("Digite o ano: ");
    scanf("%d", &l.ano);

    imprime_livro(l);
}

void imprime_livro(livro l){
    printf("Titulo: %s\n", l.titulo);
    printf("Autor: %s\n", l.autor);
    printf("Ano: %d\n", l.ano);
}