
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char texto[20];
    char texto2[5];
    int i;
    
    printf("Digite um texto:\n");
    gets(texto);
    
    printf("\n");
    
    // Exibindo 4 primeiras letras, modo #1:
    for(i=0; i<4; i++)
        printf("%c", texto[i]);
    printf("\n\n");
    
    // Exibindo 4 primeiras letras, modo #2:
    strncpy(texto2, texto, 4);
    puts(texto2);
    
}


        
        
    
