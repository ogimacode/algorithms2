
#include <stdio.h>

// Função para intercalar dois vetores em um terceiro vetor:

void intercalar(int *vetor1, int *vetor2, int *resultado) 
{
    for (int i = 0; i < 10; i++) 
    {
        resultado[i * 2] = vetor1[i];     // Coloca o valor do primeiro vetor
        resultado[i * 2 + 1] = vetor2[i]; // Coloca o valor do segundo vetor
    }
}

int main() {
    
    int vetor1[10], vetor2[10], resultado[20];

    printf("Digite os 10 valores do primeiro vetor:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d%*c", &vetor1[i]);
    }

    printf("Digite os 10 valores do segundo vetor:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d%*c", &vetor2[i]);
    }

    // Chame a função para intercalar os vetores
    intercalar(vetor1, vetor2, resultado);

    printf("\nValores intercalados no terceiro vetor:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", resultado[i]);
    }
    printf("\n");
}

