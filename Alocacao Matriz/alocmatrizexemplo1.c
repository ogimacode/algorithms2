#include <stdio.h>
#include <stdlib.h>

int main(){
    int * vetor[3];

    int * area1 = (int*) malloc(4 * sizeof(int));
    int * area2 = (int*) malloc(4 * sizeof(int));
    int * area3 = (int*) malloc(4 * sizeof(int));

    vetor[0] = area1;
    vetor[1] = area2;
    vetor[2] = area3;

    int ** m = vetor;

    int i, j;
    for (i = 0; i < 3; i++){
        for (j = 0; j < 4; j++){
            m[i][j] = (i + 1)*(j + 1);
        }
        
    }

    for (i = 0; i < 3; i++){
        for (j = 0; j < 4; j++){
            printf("%d ", m[i][j]); 
        }
        printf("\n");
    }
    
     
}