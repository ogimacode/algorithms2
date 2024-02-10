
#include <stdio.h>

// Função que retorna o endereço da 1ª letra da 2ª palavra em uma string:

char *enderecoPrimeiraLetraSegundaPalavra(char *str) 
{
    // Inicialize um ponteiro para percorrer a string:
    char *ponteiro = str;
    
    // Percorra a string até encontrar o espaço em branco:
    while (*ponteiro != ' ') 
    {
        ponteiro++;
    }
    
    // Avance para a primeira letra da segunda palavra:
    ponteiro++;
    
    // Retorne o ponteiro para a primeira letra da segunda palavra
    return ponteiro;
}

int main() {
    
    char frase[100];
    
    printf("Digite uma frase com duas palavras separadas por UM espaço: ");
    gets(frase);

    // Chame a função para obter o endereço da primeira letra da segunda palavra
    char *endereco = enderecoPrimeiraLetraSegundaPalavra(frase);

    // Exiba a segunda palavra a partir do endereço retornado pela função
    printf("A segunda palavra da frase é: %s\n", endereco);
}

    
