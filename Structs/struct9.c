#include <stdio.h>

typedef struct{
    char nome[50];
    int ano;
} Livro;

int main(){
    Livro biblioteca[3][3];

    int i, j;
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("Digite o titulo do livro[%d][%d]: ", i, j);
            scanf("%s%*c", biblioteca[i][j].nome);
            printf("Digite o ano do livro[%d][%d]: ", i,j);
            scanf("%d%*c", &biblioteca[i][j].ano);
        }
        
    }

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("Livro[%d][%d] / Titulo: %s / ano: %d", i,j, biblioteca[i][j].nome, biblioteca[i][j].ano);
            printf(" | ");
        }
        printf("\n");
    }
    
}
