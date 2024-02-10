
#include <stdio.h>

#define max(a, b) ((a > b) ? a : b)

// Função para resolver o Problema da Mochila usando programação dinâmica.



int mochila(int capacidade, int pesos[], int valores[], int num_itens, int incluidos[]) {
    
    int i, w;
    int tabela[num_itens + 1][capacidade + 1];

    // Inicialização da tabela:
    
    // Preenche a tabela dinamicamente considerando todas as combinações possíveis de itens e capacidades e, 
    // ao final, contém a solução ótima para o Problema da Mochila:
    
    for (i = 0; i <= num_itens; i++) {
        for (w = 0; w <= capacidade; w++) {
            if (i == 0 || w == 0)
                tabela[i][w] = 0;
            else if (pesos[i - 1] <= w)
                tabela[i][w] = max(valores[i - 1] + tabela[i - 1][w - pesos[i - 1]], tabela[i - 1][w]);
            else
                tabela[i][w] = tabela[i - 1][w];
        }
    }

    // Este trecho de código rastreia a solução ótima na tabela preenchida anteriormente, 
    // indicando quais itens estão incluídos na mochila para atingir o valor máximo. 
    // O array incluidos após a execução desse trecho representará a seleção de itens 
    // que maximiza o valor total, sem exceder a capacidade da mochila.
    
    int resultado = tabela[num_itens][capacidade];
    w = capacidade;
    for (i = num_itens; i > 0 && resultado > 0; i--) {
        if (resultado != tabela[i - 1][w]) {
            incluidos[i - 1] = 1; // Item i-1 está incluído na solução
            resultado -= valores[i - 1];
            w -= pesos[i - 1];
        } else {
            incluidos[i - 1] = 0; // Item i-1 não está incluído na solução
        }
    }

    // Retornar o valor máximo que pode ser obtido
    return tabela[num_itens][capacidade];
}

int main() {
    int capacidade = 10;
    int pesos[] = {2, 5, 1, 8, 3, 1};
    int valores[] = {10, 5, 12, 7, 2, 15};
    int num_itens = 6;

    int incluidos[num_itens];
    
    // Chama a função que resolve usando programação dinâmica:
    int resultado = mochila(capacidade, pesos, valores, num_itens, incluidos);

    printf("O valor máximo que pode ser obtido é: %d\n", resultado);
    
    printf("Itens incluídos na solução:\n");
    for (int i = 0; i < num_itens; i++) {
        if (incluidos[i]) {
            printf("Item %d (Peso %d, Valor %d)\n", i + 1, pesos[i], valores[i]);
        }
    }
}



