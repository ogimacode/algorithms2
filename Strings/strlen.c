#include <stdio.h>
#include <string.h>
// Como funciona o str len para ver o tamanho da string
int main(){

    char palavra[20];
    printf("Digite palavra: ");
    gets(palavra);

    printf("Tamanho: %d", strlen(palavra));
}