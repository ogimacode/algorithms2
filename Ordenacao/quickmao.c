#include <stdio.h>

void exibe(int *vetor, int inicio, int fim){
    for(int i= inicio; i<= fim; i++)
        printf("%d ", vetor[i]);
    printf("\n");
}

void quicksort(int *vetor, int inicio, int fim){

    if (inicio == fim){
        return;
    }
    int pivot = inicio;
    int i = inicio;
    int j;
    int aux;

    //laço para o j percorrer a lista para direita
    for (j = i + 1; j <= fim; j++){
        // Se o número em j for menor que o pivot,
        // anda i, e troca com ele:
        if (vetor[j] < vetor[pivot]){
            i++;
            aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
        }
        
    }
    
    aux = vetor[i];
    vetor[i] = vetor[pivot];
    vetor[pivot] = aux;


    if (i - 1 >= inicio){
        quicksort(vetor, inicio, i - 1);
    }
    if (i + 1 <= fim){
        quicksort(vetor, i + 1, fim);
    }
    
    

}

int main(){
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d%*c", &tamanho);

    int vetor[tamanho];

    for (int i = 0; i < tamanho; i++){
        printf("Digite o numero da posicao %d: ", i);
        scanf("%d%*c", &vetor[i]);
    }
    
    
    quicksort(vetor, 0, tamanho - 1);

    exibe(vetor, 0, tamanho - 1);

    /*
        for (i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]);
    }
    */

}
