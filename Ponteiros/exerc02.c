
#include <stdio.h>

// Função para encontrar o maior valor 
// entre três números e armazená-lo por referência:

void encontrarMaior(int a, int b, int c, int *maior) 
{
    if (a >= b && a >= c) 
    {
        *maior = a;
    } 
    else 
        if (b >= a && b >= c) 
        {
            *maior = b;
        } 
        else 
        {
            *maior = c;
        }
}

int main() {
    int num1, num2, num3, maior;

    printf("Digite o primeiro número: ");
    scanf("%d%*c", &num1);

    printf("Digite o segundo número: ");
    scanf("%d%*c", &num2);

    printf("Digite o terceiro número: ");
    scanf("%d%*c", &num3);

    // Chame a função para encontrar o maior valor e armazená-lo em 'maior':
    encontrarMaior(num1, num2, num3, &maior);

    printf("O maior valor entre %d, %d e %d é: %d\n", num1, num2, num3, maior);

}


