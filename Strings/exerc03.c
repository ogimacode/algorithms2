
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, tamanho, destino;
    char original[20], invertida[20];
    
    printf("Digite uma palavra: ");
    gets(original);
    
    // Pegar a quantidade de caracteres da string original:
    tamanho = strlen(original);
    
    // Percorrer os caracteres da string original:
    for(i=0; i<tamanho; i++)
    {
        // calcular o índice destino:
        destino = (tamanho-1) - i;
        // copiar o caracter da origem para o destino:
        invertida[destino] = original[i];
    }
    
    // Colocar o terminador no destino:
    invertida[tamanho] = '\0';
    
    printf("\nString original : %s\n", original);
    printf("\nString invertida: %s\n\n", invertida);
    
    // Verificar se são iguais:
    if( strcmp(original, invertida) == 0 )
        printf("As strings são palindromos!\n");
    else
        printf("As strings NÃO são palindromos!\n");

}


        
        
    
