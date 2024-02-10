#include <stdio.h>
#include <string.h>

void concatena();

int main(){

    char palavra1[100];
    char palavra2[30];
    printf("Digite palavra: ");
    gets(palavra1);
    printf("Digite palavra: ");
    gets(palavra2);

    concatena(palavra1, palavra2);

    printf("%s", palavra1);
}

void concatena(char palavra1[], char palavra2[]){
    strcat(palavra1, palavra2);
}