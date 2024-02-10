#include <stdio.h>

int acha_maior(int array[], int tamanho){
    int maior = array[0];
    for (int i = 0; i < tamanho; i++){
        if(array[i] > maior){
            maior = array[i];
        }
    }
    return maior;
}

int main(){
    int tamanho;

    printf("Digite o tamanho do array: ");
    scanf("%d%*c", &tamanho);

    int array[tamanho];
    int i;
    printf("Digite os numeros do array \n");
    for (i = 0; i < tamanho; i++){
        printf("Numero do indice %d: ", i);
        scanf("%d%*c", &array[i]);
    }

    int maior = acha_maior(array, tamanho);

    printf("O maior numero do array e: %d", maior);
}