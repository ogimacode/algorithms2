#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *letra_maiscula(char *palavra,int tamanho){
    for (int i = 0; i < tamanho; i++){
        if (isupper(palavra[i])){
            return &palavra[i];
        }
        
    }
    return NULL;
}

int main(){
    char palavra[50];

    printf("Digite a palavra: ");
    gets(palavra);

    int tamanho = strlen(palavra);

    char *resultado = letra_maiscula(palavra, tamanho);

    if(resultado != NULL){
        printf("A letra maiscula e: %c", *resultado);
    } else{
        printf("Nao tem letra maiscula");
    }
}