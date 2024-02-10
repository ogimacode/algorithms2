#include <stdio.h>

char *endereco_primeira_letra2frase(char *palavra){
    while(*palavra != ' '){
        palavra++;
    }
    palavra++;
    return palavra;
}

int main(){
    char palavra[50];

    printf("Digite duas palavras separadas por espaco: ");
    gets(palavra);

    char *endereco = endereco_primeira_letra2frase(palavra);
    printf("A segunda palavra e: %s", endereco);
}