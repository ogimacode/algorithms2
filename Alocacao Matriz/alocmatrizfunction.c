#include <stdio.h>
#include <stdlib.h>

void preencherMatriz(int **matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = (i + 1) * (j + 1);
        }
    }
}

int main() {
    int linhas, colunas;

    printf("Digite a quantidade de linhas: ");
    scanf("%d%*c", &linhas);
    printf("Digite a quantidade de colunas: ");
    scanf("%d%*c", &colunas);

    int **matriz = (int **)malloc(linhas * sizeof(int *));

    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
    }

    preencherMatriz(matriz, linhas, colunas);

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
}
