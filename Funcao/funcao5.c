#include <stdio.h>

void media_array(float array[],int tamanho){
    float media = 0;
    float acumulador = 0;
    for (int i = 0; i < tamanho; i++){
        acumulador = acumulador + array[i];
    }
    media = acumulador / tamanho;
    
    printf("A media e: %f", media);
}

int main(){
    int tamanho;

    printf("Digite o tamanho: ");
    scanf("%d%*c", &tamanho);

    float array[tamanho];

    printf("Digite os elementos do array:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%f", &array[i]);
    }

    media_array(array, tamanho);
}