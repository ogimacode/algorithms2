#include <stdio.h>
#include <string.h>

int main()
{
    char nome[20];
    char sobrenome[20];
    char nomeCompleto[40];
    
    printf("Digite o nome:");
    gets(nome);
    
    printf("Digite o sobrenome:");
    gets(sobrenome);
    
    strcpy(nomeCompleto, nome);
    strcat(nomeCompleto, " ");
    strcat(nomeCompleto, sobrenome);
    
    printf("\nNome completo: %s\n", nomeCompleto);
    printf("Quantidade de letras: %ld\n", strlen(nomeCompleto));
    printf("Primeira letra: %c\n", nomeCompleto[0]);
    
    //  I   F   S   P \0
    // [0] [1] [2] [3] [4]
    // A ultima letra está na posição 3
    // A ultima letra está na posição (tamanho)-1
    printf( "Última letra: %c\n", nomeCompleto[ (strlen(nomeCompleto)-1) ] );
    
}


        
        
    
