#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char nomeCompleto[40];
    char nomeMAIU[40];
    char nomeMINU[40];
    int i;
    
    printf("Digite o nome completo:");
    gets(nomeCompleto);
    
    for(i=0; i < strlen(nomeCompleto); i++)
    {
        nomeMAIU[i] = toupper(nomeCompleto[i]);
        nomeMINU[i] = tolower(nomeCompleto[i]);
    }
    
    // Não esquece a questão dos terminadores!!!!!
    nomeMAIU[ strlen(nomeCompleto) ] = '\0';
    nomeMINU[ strlen(nomeCompleto) ] = '\0';
    
    printf("\nTudo em maiusculas: %s\n", nomeMAIU);
    printf("\nTudo em minusculas: %s\n", nomeMINU);
    
}


        
        
    
