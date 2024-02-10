#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função de comparação para qsort
// para a ordem ser decrescente é só trocar o a pelo b:
// return (*(int *)b - *(int *)a);
int compar(const void *a, const void *b){
    // ordem crescente:
    return (*(int *)a - *(int *)b);
}

int busca_binaria(int *vetor, int inicio, int fim, int chave){

    printf("Procurando de %d a %d.\n", inicio, fim);

    if (inicio <= fim){
        int meio = inicio + (fim - inicio) / 2;
        
        // condição de parada
        if (vetor[meio] == chave){
            return meio;
        }
        
        // se o meio  for maior que a chave, busca na metade esquerda do inicio para o meio
        if (vetor[meio] > chave){
            // novo fim = meio - 1
            return busca_binaria(vetor, inicio, meio - 1, chave);
        }
        
        // se a chave for maior que o meio, busca na metade direirta do meio para o fim
        // novo inicio = meio + 1
        return busca_binaria(vetor, meio + 1, fim, chave);

        
    }  
    // se a chave não estiver no vetor
        return -1;
}

int main(){
    // Seed para geração de números aleatórios
    srand(time(NULL));

    // Criar e inicializar o vetor com números aleatórios entre 0 e 100000
    int tamanho = 100000;
    int vetor[tamanho];
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = rand() % 100001;
    }

    int chave;
    printf("Digite o numero a ser procurado: ");
    scanf("%d%*c", &chave);


    qsort(vetor, tamanho, sizeof(int), compar);

    int resultado = busca_binaria(vetor, 0, tamanho - 1, chave);

    if (resultado != -1){
        printf("O numero %d foi encontrado na posicao: %d\n", chave, resultado);
    } else{
        printf("O numero %d nao foi encontrado no vetor\n", chave);
    }
    

}