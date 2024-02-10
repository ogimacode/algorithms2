#include <stdio.h>

void bubble(int *vetor, int tamanho){
    //Bubble
    int trocou, aux, i, j;
    for (i = tamanho - 1; i >= 1 && trocou; i--){
        trocou = 0;
        for (j = 0; j < i; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
                trocou = 1;
            }
        }
    }
}

int main(){
    int tamanho;
    int i;

    printf("Digite o tamanho do vetor: ");
    scanf("%d%*c", &tamanho);

    int vetor[tamanho];

    for (i = 0; i < tamanho; i++){
        printf("Digite o numero da posicao %d do vetor: ", i);
        scanf("%d%*c", &vetor[i]);
    }
    
    bubble(vetor, tamanho);
    
    printf("\nVetor ordenado: ");
    for (i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]);
    }
    
}