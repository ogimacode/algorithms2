#include <stdio.h>
#include <stdlib.h>

int main(){
    int linhas, colunas;
    int i, j;

    printf("Digite a quantidade de linhas: ");
    scanf("%d%*c", &linhas);
    printf("Digite a quantidade de colunas: ");
    scanf("%d%*c", &colunas);

    int **matriz = (int**) malloc(linhas * sizeof(int*));

    for (i = 0; i < linhas; i++){
        matriz[i] = (int*) malloc(colunas * sizeof(int));
    }
    

    for(i = 0; i < linhas; i++){
        for (j = 0; j < colunas; j++){
            matriz[i][j] = (i + 1)*(j + 1); 
        }
        
    }

    for(i = 0; i < linhas; i++){
        for (j = 0; j < colunas; j++){
            printf("%d ", matriz[i][j]); 
        }
        printf("\n");
    }

    for (i = 0; i < linhas; i++){
        free(matriz[i]);
    }
    free(matriz);
}