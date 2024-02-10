
#include <stdio.h>
#include <stdlib.h>
/*

Crie uma função que crie um inteiro (alocado dinamicamente),
receba seu conteúdo por digitação, e devolva para o programa
principal seu endereço de memória. Exiba seu conteúdo no
programa principal.

*/

int *criarInteiro() {
    
    int *ptr = (int *) malloc( sizeof(int) );

    if (ptr == NULL) {
        // Tratamento de erro, não foi possível alocar memória
        exit(1);
    }

    printf("Digite um número inteiro: ");
    scanf("%d", ptr);

    return ptr;
}

int main() 
{
    int *inteiroPtr = criarInteiro();

    printf("Endereço de memória: %p\n", inteiroPtr);
    printf("Conteúdo: %d\n", *inteiroPtr);

    // Libere a memória alocada dinamicamente
    free(inteiroPtr);
}

