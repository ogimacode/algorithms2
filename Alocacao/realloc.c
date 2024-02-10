#include <stdio.h>
#include <stdlib.h>

int main(){
    int *array;
    int *novo_array;

    int tamanho_inicial = 5;
    int tamanho_novo = 10;


    array = (int*) malloc(tamanho_inicial * sizeof(int));

    if (array == NULL){
        printf("ERRO");
        exit(0);
    }
    
    printf("Alocou espaco na memoria para %d inteiros.\n", tamanho_inicial);

    int i;
    for (i = 0; i < tamanho_inicial; i++){
        array[i] = i;
    }

    printf("Valores Originais: ");
    for (i = 0; i < tamanho_inicial; i++){
        printf("%d ", array[i]);
    }
    printf("\n");

    novo_array = (int*) realloc(array, tamanho_novo * sizeof(int));

    if (novo_array == NULL){
        printf("Erro tamanho novo");
        exit(0);
    }
    
    for (i = tamanho_inicial; i < tamanho_novo; i++){
        novo_array[i] = i * 2;
    }
    
    printf("Novos valores: ");
    for (i = 0; i < tamanho_novo; i++){
        printf("%d ", novo_array[i]);
    }
    
    free(novo_array);
    
}