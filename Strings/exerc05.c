#include <stdio.h>
#include <string.h>

int main()
{
    char texto[20];
    
    printf("Digite um nome:\n");
    gets(texto);
    
    printf("\n");
    
    // Exibindo quantidade de caracteres, modo obvio:
    printf("%s tem %ld caracteres\n\n", texto, strlen(texto));
    
    // Exibindo quantidade de caracteres,
    // contando os caracteres até chegar no terminador:
    int qtd = 0;
    int indice = 0;
    
    while( texto[indice] != '\0' )
    {
        // se não for o terminador, soma 1 em quantidade de letras:
        qtd++;
        // soma 1 no indice, pra verificar o próximo caracter:
        indice++;
    }
    
    printf("%s tem %d caracteres\n\n", texto, qtd);
}


        
        
    
