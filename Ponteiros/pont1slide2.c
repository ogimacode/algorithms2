#include <stdio.h>

int tamanho(char *ponteiro){
    int t = 0;
    while (*ponteiro != '\0'){
        t = t + 1;
        ponteiro++;
    }

    return t;
}

int main(){
    char palavra[50];
    printf("Digite a palavra: ");
    gets(palavra);

    int resultado = tamanho(palavra);
    printf("O tamanho da palavra e: %d", resultado);
}
