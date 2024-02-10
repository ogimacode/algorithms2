#include <stdio.h>
#include <string.h>

// Como funciona a funcao strcat para concatenar strings em C
int main(){

    char palavra1[20];
    char palavra2[20];
    printf("Digite palavra: ");
    gets(palavra1);
    printf("Digite palavra: ");
    gets(palavra2);

    // A primeira string como parametro e a que vai receber a concatenacao, a segunda sera concatenada na primeira
    strcat(palavra1, palavra2);

    printf("%s", palavra1);

}