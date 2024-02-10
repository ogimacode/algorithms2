
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

Crie uma função que receba uma string contendo duas palavras
separadas por espaço, e retorne o endereço inicial da 2a
 palavra.
OBS: criar uma área alocada dinamicamente para armazenar a 2a
palavra, e retornar seu endereço (cuidado, não é o mesmo
exercício que vimos anteriormente!!)

*/

char *enderecoSegundaPalavra(char *input) 
{
    // Copia o endereço em input para espaco,
    // pra gente poder usar aritimética de ponteiros
    // sem 'cagar' o valor de input:
    char *espaco = input;

    // Encontrando o primeiro espaço em branco.
    // OBS: Estamos admitindo que sempre vamos encontrar
    // o espaço em branco!!!
    while (*espaco != ' ') {
        espaco++;
    }

    // A segunda palavra começa após o espaço em branco:
    espaco++;

    // Calcule o tamanho da segunda palavra.
    // NOTE!! strlen conta caracteres a partir do endereço informado,
    //        até chegar no terminador!
    int tamanhoSegundaPalavra = strlen(espaco);

    // Aloque memória dinamicamente para a segunda palavra
    // (o tamanho calculado, +1 para o terminador):
    char *segundaPalavra = (char *) malloc( tamanhoSegundaPalavra + 1 );

    // Se não deu problema na alocação, copiar os caracteres
    // a partir do endereço 'espaco' até o terminador,
    // para a área que começa no endereço 'segundaPalavra':
    if (segundaPalavra != NULL) {
        strcpy(segundaPalavra, espaco);
    }
    else {
        printf("Erro de alocação de memória\n");
        exit(1);
    }

    // Devolve o endereço da área alocada, com a 2a palavra:
    return segundaPalavra;
}

int main() 
{
    char input[100];
    
    printf("Digite duas palavras separadas por espaço: ");
    gets(input);

    char *segundaPalavra = enderecoSegundaPalavra(input);

    printf("Endereço da segunda palavra: %p\n", segundaPalavra);
    
    printf("Segunda palavra: %s\n", segundaPalavra);

    // Libere a memória alocada dinamicamente quando não for mais necessária:
    free(segundaPalavra);

}


