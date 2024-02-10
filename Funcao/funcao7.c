#include <stdio.h>

float soma_array(float array[],int tamanho){
    float soma = 0;
    for (int i = 0; i < tamanho; i++){
        soma = soma + array[i];
    }
    return soma;
}

int main(){
    int tamanho;
    printf("Digite o tamanho: ");
    scanf("%d", &tamanho);

    float array[tamanho];

    for (int i = 0; i < tamanho; i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &array[i]);
    }
    
    float resultado = soma_array(array, tamanho);
    printf("A soma do array e: %f", resultado);
}