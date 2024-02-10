#include <stdio.h>
// srdlib é a biblioteca utilizada para alocação dinamica
#include <stdlib.h>

int main(){
    int n, i;

    printf("Digite o tamanho do array: ");
    scanf("%d%*c", &n);

    // sizeof = mostra o tamanho do dado na memoria
    // Exemplo: o codigo multiplicara o n (numero que usuario digitou), com o tamanho de byts/bits que um int ocupa
    // Malloc: aloca um espaço na memoria para o dev.
    // O malloc vai devolver o endereço inicial da área alocada.
    // porém, vai devolver um endereço de tipo nulo = (void*). 
    // precisamos fazer o 'cast' para o tipo de endereço correto
    // como vamos armazenar inteiros nesta área, o tipo correto é 'endereço de inteiro', ou seja = (int*)
    //Malloc
    int *arr = (int*) malloc(n * sizeof(int));

    // estrutura para identificar se a alocação foi feita com sucesso.
    if (arr == NULL){
        printf("Erro na alocacao");

        //O comando abaixo finaliza o programa com codigo 0.
        exit(0);
    }

    //Se foi alocado corretamente, temos um ponteiro arr, logo podemos acessar como vetor normalmente.
    for (i = 1; i < n; i++){
        arr[i] = i * 2;
    }

    printf("\nElementos do array\n");
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    
    //comando para liberar o area alocada, utilizamos o comando free:
    free(arr);
    

    //Calloc
    // diferentemente do malloc, o calloc aloca uma area na memoria tbm, mas ela zera as posiçoes.
    // Comando Calloc: int *arr = (int*) calloc(n, sizeof(int));

    //Realloc
    // A função realloc é utilizada para alterar o tamanho de um bloco de memoria ja previamente alocado
    // Você só deve usar o comando free() no novo endereço (se realloc() foi bem sucedido) e não no antigo, pois o realloc já cuidou dele.
    // No realloc vc pode utilizar a mesma variavel, não precisando criar uma nova caso preferir.
    //Realloc comando: int *nova_variavel = (int*) realloc(variavel_antiga, novo_tamanho * sizeof(int));

}



