
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função de comparação para qsort
// para a ordem ser decrescente é só trocar o a pelo b:
// return (*(int *)b - *(int *)a);
int comparacao(const void *a, const void *b) {
    //ordem crescente
    return (*(int *)a - *(int *)b);
}

// Função para busca sequencial
int buscaSequencial(int vetor[], int tamanho, int chave) 
{
    int repeticoes = 0;

    for (int i = 0; i < tamanho; i++) {
        repeticoes++;
        if (vetor[i] == chave) {
            return repeticoes;
        }
    }

    return repeticoes;
}

// Função para busca binária recursiva
int buscaBinariaRecursiva(int vetor[], int inicio, int fim, int chave, int repeticoes) 
{
    if (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;
        repeticoes++;

        if (vetor[meio] == chave) {
            return repeticoes;
        } else if (vetor[meio] > chave) {
            return buscaBinariaRecursiva(vetor, inicio, meio - 1, chave, repeticoes);
        } else {
            return buscaBinariaRecursiva(vetor, meio + 1, fim, chave, repeticoes);
        }
    }

    return repeticoes;
}

int main() 
{
    // Seed para geração de números aleatórios
    srand(time(NULL));

    // Criar e inicializar o vetor com números aleatórios entre 0 e 100000
    int tamanho = 100000;
    int vetor[tamanho];
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = rand() % 100001;
    }

    // Pedir ao usuário o número a ser procurado
    int chave;
    printf("Digite o numero a ser procurado: ");
    scanf("%d", &chave);

    // Realizar a busca sequencial
    int repeticoesSequencial = buscaSequencial(vetor, tamanho, chave);
    if (repeticoesSequencial > tamanho) {
        printf("Numero nao encontrado na busca sequencial.\n");
    } else {
        printf("Busca sequencial: %d repeticoes\n", repeticoesSequencial);
    }

    // Ordenar o vetor para a busca binária
    qsort(vetor, tamanho, sizeof(int), comparacao);

    // Realizar a busca binária recursiva
    int repeticoesBinaria = buscaBinariaRecursiva(vetor, 0, tamanho - 1, chave, 0);
    if (repeticoesBinaria > tamanho) {
        printf("Numero nao encontrado na busca binaria recursiva.\n");
    } else {
        printf("Busca binaria recursiva: %d repeticoes\n", repeticoesBinaria);
    }
}
