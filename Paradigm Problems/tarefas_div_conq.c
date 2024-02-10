
#include <stdio.h>
#include <stdlib.h>

// Definição de uma atividade
typedef struct {
    int inicio, fim;
} Atividade;

// Função para comparar duas atividades com base no tempo de término.
// Necessária para utilizar a função qsort.
int compararAtividades(const void *a, const void *b) {
    return ((Atividade *)a)->fim - ((Atividade *)b)->fim;
}

// Função recursiva para seleção de atividades
void selecionarAtividades(Atividade atividades[], int inicio, int fim) {
    
    // Imprime a atividade no inicio (selecionada):
    printf("{ inicio %d fim %d }\n", atividades[inicio].inicio, atividades[inicio].fim);

    // Encontrar a próxima atividade que não se sobrepõe a atividade 'inicio':
    
    // proximaAtividade aponta para a atividade seguinte:
    int proximaAtividade = inicio + 1;
    
    // Enquanto:
    //     proximaAtividade <= fim (pq se passar do fim, ta errado)
    //     e o inicio dessa proximaAtividade for menor que o final da atividade inicial desta chamada
    //     (ou seja, o inicio dessa proxima atividade eh antes do final da inicial desta chamada,
    //      entao ta sobrepondo!)
    // ... vai para a proximaAtividade!
    while (proximaAtividade <= fim && atividades[proximaAtividade].inicio < atividades[inicio].fim) {
        proximaAtividade++;
    }
    
    // Nesse momento, proximaAtividade aponta para a proxima atividade que nao se sobrepoe.
    // Chamamos entao novamente esta funcao, recursivamente,
    // com range proximaAtividade até a última:

    if (proximaAtividade <= fim) {
        selecionarAtividades(atividades, proximaAtividade, fim);
    }
}

int main() {
    
    // Exemplo de uso
    Atividade atividades[] = { {8, 10}, {1, 3}, {2, 5}, {3, 8}, {5, 7}, {11, 14}, {9, 12} };
    int n = 7;  // 7 atividades

    printf("Atividades selecionadas:\n");

    // Ordena as atividades com base no tempo de término.
    // Utiliza a função 'compararAtividades' definida lá no início:
    qsort(atividades, n, sizeof(Atividade), compararAtividades);
    
    // Por que pegar ordenar as atividades pelo tempo de término?
    // Porque queremos que a próxima atividade que vamos selecionar
    // acabe o mais cedo possível.

    // Chama a função recursiva para selecionar atividades
    // Range: 0 até a ultima
    selecionarAtividades(atividades, 0, n - 1);
}

