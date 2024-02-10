#include <stdio.h>
#include <stdbool.h>

int main(){
    int tamanho = 5;
    int vetor[5] = {20, 40, 50, 30, 10};

    int i, j, k, aux;
    //bool trocou = true;
    // moda antiga:
    int trocou = 1;
    

    printf("\nVetor original: ");
    for (k = 0; k < tamanho; k++){
        printf("%d ", vetor[k]);
    }
    
    //Bubble
    for (i = tamanho - 1; i >= 1 && trocou; i--){
        // trocou = false;
        trocou = 0;
        for (j = 0; j < i; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
                // trocou = true;
                trocou = 1;
            }
        }
    }
    
    printf("\nVetor ordenado: ");
    for (i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]);
    }
    
}