#include <stdio.h>

int main(){
    int vetor_inicial[8];
    int vetor_positivo[8];
    int vetor_negativo[8];
    int i;

    for(i = 0; i < 8; i++){
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d%*c", &vetor_inicial[i]);
    }
    int j = 0, k = 0;
    for( i = 0; i < 8; i++){
        if(vetor_inicial[i] < 0){
            vetor_negativo[j] = vetor_inicial[i];
            j++;
        } else{
            vetor_positivo[k] = vetor_inicial[i];
            k++;
        }
    }
    printf("Valores negativos:\n");
    for(i = 0; i < j; i++){
        printf("%d\n", vetor_negativo[i]);
    }
    printf("Valores positivos:\n");
    for (i = 0; i < k; i++){
        printf("%d\n", vetor_positivo[i]);
    }
}