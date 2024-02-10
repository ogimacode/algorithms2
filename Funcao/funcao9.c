#include <stdio.h>
#include <string.h>

int contar_caracter(char string[]){
    int tamanho = strlen(string);

    return tamanho;
}

int main(){
    char string[100];

    printf("Digite algo: ");
    gets(string);

    int resultado = contar_caracter(string);

    printf("O tamanho da string e: %d", resultado);
}