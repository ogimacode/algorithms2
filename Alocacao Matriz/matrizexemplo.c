#include <stdio.h>


int main(){
    int vetor[3][3];
    int i, j;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite o numero da linha [%d] coluna[%d]: ", i, j);
            scanf("%d%*c", &vetor[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", vetor[i][j]);
        }
        printf("\n");
    }

     
}