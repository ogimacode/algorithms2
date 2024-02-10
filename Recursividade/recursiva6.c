#include <stdio.h>
#include <string.h>

void recursiva(char string[],int inicio,int fim){
    if (inicio >= fim){
     return;   
    }
    char temp = string[inicio];
    string[inicio] = string[fim];
    string[fim] = temp;

    recursiva(string, inicio + 1, fim - 1);
}

int main(){
    char palavra[50];

    printf("Digite a palavra: ");
    gets(palavra);

    int tamanho = strlen(palavra);

    recursiva(palavra, 0, tamanho - 1);

    printf("%s", palavra);
}