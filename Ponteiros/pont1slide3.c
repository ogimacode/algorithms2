#include <stdio.h>

int tamanho_vetor(int *ponteiro,int tamanho){
    int soma = 0;

    for (int i = 0; i < tamanho; i++){
        /* O operador de índice ([]) tem uma precedência mais alta do que o operador de desreferenciamento (*). 
        Portanto, ponteiro[i] é equivalente a *(ponteiro[i]). No entanto, ponteiro[i] já é um valor inteiro (o conteúdo do elemento do vetor), 
        então você não precisa desreferenciá-lo novamente usando '*'. */
        soma = soma + ponteiro[i];
    }
    return soma;
}

int main(){
    int vetor[5] = {1, 2, 3, 4, 5};

    int resultado = tamanho_vetor(vetor, 5);
    
    printf("A soma e: %d", resultado);
}