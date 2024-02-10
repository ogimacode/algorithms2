
#include <stdio.h>
#include <string.h>

typedef struct {
    char titulo[100];
    int anoPublicacao;
} Livro;

int main() {
    
    // Declarar uma matriz de 3x3 de estruturas Livro
    Livro biblioteca[3][3];

    // Preencher a matriz com informações de livros fictícios
    strcpy(biblioteca[0][0].titulo, "Livro 1");   biblioteca[0][0].anoPublicacao = 2000;
    strcpy(biblioteca[0][1].titulo, "Livro 2");   biblioteca[0][1].anoPublicacao = 2010;
    strcpy(biblioteca[0][2].titulo, "Livro 3");   biblioteca[0][2].anoPublicacao = 2020;
    strcpy(biblioteca[1][0].titulo, "Livro 4");   biblioteca[1][0].anoPublicacao = 1995;
    strcpy(biblioteca[1][1].titulo, "Livro 5");   biblioteca[1][1].anoPublicacao = 2005;
    strcpy(biblioteca[1][2].titulo, "Livro 6");   biblioteca[1][2].anoPublicacao = 2015;
    strcpy(biblioteca[2][0].titulo, "Livro 7");   biblioteca[2][0].anoPublicacao = 1990;
    strcpy(biblioteca[2][1].titulo, "Livro 8");   biblioteca[2][1].anoPublicacao = 2002;
    strcpy(biblioteca[2][2].titulo, "Livro 9");   biblioteca[2][2].anoPublicacao = 2019;

    // Exibir as informações armazenadas na matriz
    printf("Informações dos Livros na Biblioteca:\n\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("[Liv %d-%d ", i + 1, j + 1);
            printf("Tít: %s ", biblioteca[i][j].titulo);
            printf("Ano: %d]", biblioteca[i][j].anoPublicacao);
            printf("  ");
        }
        printf("\n\n");
    }
}



