
#include <stdio.h>

// Função para trocar os valores de duas variáveis 
// por referência:
void trocarValores(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d%*c", &num1);
    printf("Digite o segundo número: ");
    scanf("%d%*c", &num2);

    printf("\nValores antes da troca:\n");
    printf("Primeiro número: %d\n", num1);
    printf("Segundo número: %d\n", num2);

    // Chame a função para trocar os valores:
    trocarValores(&num1, &num2);

    printf("\nValores depois da troca:\n");
    printf("Primeiro número: %d\n", num1);
    printf("Segundo número: %d\n", num2);
}

