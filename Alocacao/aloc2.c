#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

Crie um vetor de strings, alocado dinamicamente.
Permita a digitação das strings, depois mostre elas na tela

*/

int main(){
    int num, i;

    printf("Digite a quantidade de strings a digitar: ");
    scanf("%d%*c", &num);

    char **vetorstrings = (char**) malloc(num * sizeof(char *));

    if (vetorstrings == NULL){
        printf("Algo deu errado");
        exit(1);
    }

    for (i = 0; i < num; i++){

        char string[50];
        
        printf("Digite a %d string: ", i + 1);
        gets(string);

        vetorstrings[i] = (char *) malloc(strlen(string) + 1);

        strcpy(vetorstrings[i], string);
    }
    
    for (i = 0; i < num; i++){
        printf("String %d: %s\n", i + 1, vetorstrings[i]);
    }
    
    for (i = 0; i < num; i++){
        free(vetorstrings[i]);
    }
    free(vetorstrings);
    
}