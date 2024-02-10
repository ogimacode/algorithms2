#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*

No programa principal, crie 2 strings com espaço para 19
caracteres (+ terminador). Permita a digitação dessas strings.
Crie uma função que receba essas strings, concatene elas, e
devolva o endereço inicial da string concatenada. Essa string deve
ter o tamanho exato dos textos concatenados. Exiba a string
concatenada no programa principal.


*/
char *concatena_string(char *str1,char *str2){
    int tamanho = strlen(str1) + strlen(str2);

    // não precisa de sizeoff pq o char ocupa apenas 1 byte
    char *strconcatenada = (char*) malloc(tamanho + 1);

    if (strconcatenada == NULL){
        printf("Algo deu errado");
        exit(1);
    }
    strcpy(strconcatenada, str1);

    strcat(strconcatenada, str2);

    return strconcatenada;
}

int main(){
    char str1[20];
    char str2[20];

    printf("Digite a primeira string: ");
    gets(str1);
    printf("Digite a segunda string: ");
    gets(str2);

   char *resultado = concatena_string(str1, str2);

    printf("Strings concatenadas: %s", resultado);

   free(resultado);
}