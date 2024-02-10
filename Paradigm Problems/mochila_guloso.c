
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int peso;
    int valor;
} Item;

// Função de comparação para o qsort
int compararItens(const void *a, const void *b) {
    double razaoA = ((Item *)a)->valor / (double)((Item *)a)->peso;
    double razaoB = ((Item *)b)->valor / (double)((Item *)b)->peso;
    return (razaoB > razaoA) - (razaoB < razaoA);
}

// Função para resolver o Problema da Mochila usando um algoritmo guloso.

// A função mochilaGulosa ordena os itens com base em sua taxa valor/peso, 
// em seguida, itera sobre os itens ordenados e os inclui na mochila 
// até atingir a capacidade máxima.

void mochilaGulosa(int capacidade, Item itens[], int num_itens) {
    
    // Ordenar os itens por taxa valor/peso em ordem decrescente
    qsort(itens, num_itens, sizeof(Item), compararItens);

    // Inicializar variáveis
    int pesoAtual = 0;
    double valorTotal = 0.0;

    // Preencher a mochila
    for (int i = 0; i < num_itens; i++) {
        if (pesoAtual + itens[i].peso <= capacidade) {
            // Incluir o item na mochila
            pesoAtual += itens[i].peso;
            valorTotal += itens[i].valor;
            printf("Incluído: Peso %d, Valor %d\n", itens[i].peso, itens[i].valor);
        }
    }

    // Imprimir o valor total obtido
    printf("Valor total obtido: %.2f\n", valorTotal);
}

int main() {
    
    int capacidade = 10;

    // Exemplo de itens (peso, valor)
    Item itens[] = { {2, 10}, {5, 5}, {1, 12}, {8, 7}, {3, 2}, {1, 15} };
    int num_itens = 6;

    // Resolver o Problema da Mochila usando o algoritmo guloso
    mochilaGulosa(capacidade, itens, num_itens);
}


