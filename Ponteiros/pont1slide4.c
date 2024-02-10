#include <stdio.h>

int *acha_maior(int *vetor, int tamanho){
    int posicao_maior = 0;

    for (int i = 0; i < tamanho; i++){
        if (vetor[i] > vetor[posicao_maior]){
            posicao_maior = i;
        }
    }
    return &vetor[posicao_maior];
    
}

int main(){
    int vetor[5] = {1, 2, 3, 4, 5};

    int *resultado = acha_maior(vetor, 5);

    printf("O maior valor e: %d", *resultado);
}