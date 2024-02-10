#include <stdio.h>
#include <stdbool.h>

#define N 6 // Número de rainhas, você pode ajustar conforme necessário


// Prototipos:
void imprimirTabuleiro(int tabuleiro[N][N]);
bool ehSeguro(int tabuleiro[N][N], int l, int c);
bool resolverNQueens(int tabuleiro[N][N], int coluna);


int main() {
    int tabuleiro[N][N] = {0}; // Inicializa o tabuleiro

    // passa o tabuleiro e a coluna pra começar a resolver o problema
    // ( coluna 0 ):
    
    if (!resolverNQueens(tabuleiro, 0)) {
        printf("Não há solução para o problema das %d rainhas.\n", N);
    }

}



// Função para imprimir o tabuleiro
void imprimirTabuleiro(int tabuleiro[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%c ", tabuleiro[i][j] ? 'Q' : '.');
        }
        printf("\n");
    }
    printf("\n");
}

// Função para verificar se é seguro colocar uma rainha em tabuleiro[l][c]
bool ehSeguro(int tabuleiro[N][N], int l, int c) {
    // Verifica a linha à esquerda
    for (int i = 0; i < c; i++) {
        if (tabuleiro[l][i]) {
            return false;
        }
    }

    // Verifica a diagonal superior à esquerda
    for (int i = l, j = c; i >= 0 && j >= 0; i--, j--) {
        if (tabuleiro[i][j]) {
            return false;
        }
    }

    // Verifica a diagonal inferior à esquerda
    for (int i = l, j = c; i < N && j >= 0; i++, j--) {
        if (tabuleiro[i][j]) {
            return false;
        }
    }

    return true;
}

// Função principal para resolver o problema das N Rainhas usando backtracking
bool resolverNQueens(int tabuleiro[N][N], int coluna) {
    // Todas as rainhas estão colocadas, a solução foi encontrada
    if (coluna == N) {
        imprimirTabuleiro(tabuleiro);
        return true;
    }

    // Tenta colocar rainha em cada linha desta coluna
    for (int i = 0; i < N; i++) {
        if (ehSeguro(tabuleiro, i, coluna)) {
            tabuleiro[i][coluna] = 1; // Coloca a rainha
            imprimirTabuleiro(tabuleiro); // Exibe o tabuleiro em cada passo

            // Recursivamente tenta colocar rainhas nas colunas restantes
            if (resolverNQueens(tabuleiro, coluna + 1)) {
                return true; // Encontrou uma solução, para a execução
            }

            // Se colocar a rainha nesta posição não levar a uma solução, então retrocede
            tabuleiro[i][coluna] = 0; // Backtrack
        }
    }

    return false;
}