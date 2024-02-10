
#include <stdio.h>

// Função recursiva para busca binária
int buscaBinaria(int vetor[], int inicio, int fim, int chave) {
    
    printf("Procurando de %d a %d.\n", inicio, fim);
    
    if (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;

        // Se a chave estiver no meio
        if (vetor[meio] == chave) {
            return meio;
        }

        // Se a chave for menor que o elemento do meio, buscar na metade esquerda
        if (vetor[meio] > chave) {
            return buscaBinaria(vetor, inicio, meio - 1, chave);
        }

        // Se a chave for maior que o elemento do meio, buscar na metade direita
        return buscaBinaria(vetor, meio + 1, fim, chave);
    }

    // Se a chave não estiver no vetor
    return -1;
}

int main() {
    // Criar o vetor
    int vetor[] = {7, 11, 18, 22, 39, 41, 48, 55, 60, 73, 88, 89, 94, 97, 99};
    int tamanho = 15;

    // Número a ser procurado
    int chave;
    printf("Digite a chave: ");
    scanf("%d%*c", &chave);

    // Chamar a função de busca binária
    int resultado = buscaBinaria(vetor, 0, tamanho - 1, chave);

    // Exibir o resultado
    if (resultado != -1) {
        printf("O numero %d foi encontrado na posicao %d do vetor.\n", chave, resultado);
    } else {
        printf("O numero %d nao foi encontrado no vetor.\n", chave);
    }
}


