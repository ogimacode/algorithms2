#include <stdio.h>
#include <stdlib.h>

int **criarMatriz(int linhas, int colunas) {
    int **matriz = (int **)malloc(linhas * sizeof(int *));

    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = (i + 1) * (j + 1);
        }
    }

    return matriz;
}

void imprimirMatriz(int **matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void liberarMatriz(int **matriz, int linhas) {
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
}

int main() {
    int linhas, colunas;

    printf("Digite a quantidade de linhas: ");
    scanf("%d%*c", &linhas);
    printf("Digite a quantidade de colunas: ");
    scanf("%d%*c", &colunas);

    int **matriz = criarMatriz(linhas, colunas);

    imprimirMatriz(matriz, linhas, colunas);

    liberarMatriz(matriz, linhas);
}
