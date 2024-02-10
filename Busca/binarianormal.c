
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Criar o vetor
    int vetor[] = {7, 11, 18, 22, 39, 41, 48, 55, 60, 73, 88, 89, 94, 97, 99};
    int tamanho = 15;
    // Número a ser procurado
    int chave = 39;

    // Variáveis para controle dos limites do vetor
    int inicio = 0;
    int fim = tamanho - 1;

    // Loop principal
    while (inicio <= fim) {
        
        printf("Procurando de %d a %d.\n", inicio, fim);
        
        int meio = inicio + (fim - inicio) / 2;
        
        // Se a chave estiver no meio
        if (vetor[meio] == chave) {
            printf("O numero %d foi encontrado na posicao %d do vetor.\n", chave, meio);
            exit(0);
        }
        // Se a chave for menor que o elemento do meio, ajustar o limite superior
        if (vetor[meio] > chave) {
            fim = meio - 1;
        }
        // Se a chave for maior que o elemento do meio, ajustar o limite inferior
        else {
            inicio = meio + 1;
        }
    }
    
    // Se a chave não estiver no vetor
    printf("O numero %d nao foi encontrado no vetor.\n", chave);
}

