
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Número de cidades
#define NUM_CIDADES 4

// Função para calcular o custo total de uma rota
int calcularCusto(int grafo[NUM_CIDADES][NUM_CIDADES], int rota[]) {
    int custo = 0;
    for (int i = 0; i < NUM_CIDADES - 1; i++) {
        custo += grafo[rota[i]][rota[i + 1]];
    }
    custo += grafo[rota[NUM_CIDADES - 1]][rota[0]];  // Fechar o ciclo
    return custo;
}

// Função para trocar dois elementos em um array
void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função para encontrar a próxima permutação da rota
int proximaPermutacao(int rota[]) {
    int i = NUM_CIDADES - 2;
    while (i >= 0 && rota[i] > rota[i + 1]) {
        i--;
    }

    if (i == -1) {
        return 0;  // Todas as permutações foram geradas
    }

    int j = NUM_CIDADES - 1;
    while (rota[j] < rota[i]) {
        j--;
    }

    trocar(&rota[i], &rota[j]);

    int esquerda = i + 1;
    int direita = NUM_CIDADES - 1;

    while (esquerda < direita) {
        trocar(&rota[esquerda], &rota[direita]);
        esquerda++;
        direita--;
    }

    return 1;  // Nova permutação gerada com sucesso
}

// Função principal para resolver o TSP usando força bruta
void tspForcaBruta(int grafo[NUM_CIDADES][NUM_CIDADES]) {
    int rota[NUM_CIDADES];
    for (int i = 0; i < NUM_CIDADES; i++) {
        rota[i] = i;
    }

    int custoMinimo = INT_MAX;
    int melhorRota[NUM_CIDADES];

    do {
        int custoAtual = calcularCusto(grafo, rota);

        if (custoAtual < custoMinimo) {
            custoMinimo = custoAtual;
            for (int i = 0; i < NUM_CIDADES; i++) {
                melhorRota[i] = rota[i];
            }
        }
    } while (proximaPermutacao(rota));

    printf("Custo mínimo da rota: %d\n", custoMinimo);
    printf("Melhor rota: ");
    for (int i = 0; i < NUM_CIDADES; i++) {
        printf("%d ", melhorRota[i]);
    }
    printf("%d\n", melhorRota[0]);  // Para fechar o ciclo
}

int main() {
    
    // Grafo de exemplo (distâncias entre cidades)
    int grafo[NUM_CIDADES][NUM_CIDADES] = {
        {0, 10, 15, 20},
        {10, 0, 35, 25},
        {15, 35, 0, 30},
        {20, 25, 30, 0}
    };

    // Calcular e imprimir o custo mínimo usando força bruta
    tspForcaBruta(grafo);

}


