
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,j;
    int flag;
    char letra;
    
    // Vetor de strings (matriz de caracteres).
    // 10 nomes de no máximo 19 caracteres cada.
    char NOMES[10][20];
    
    // Preenchendo com os nomes:
    for(i=0; i<10; i++)
    {
        printf("Digite o %do nome: ", i+1);
        gets( NOMES[i] );
    }
    
    // Perguntar a letra:
    printf("Digite uma letra pra procurar: ");
    scanf("%c%*c", &letra);
        
    // Exibe o vetor criado:
    printf("\nNomes digitados:\n");
    for(i=0; i<10; i++)
        printf("%s\n", NOMES[i]);
    printf("\n\n");
        
    // Define bandeira abaixada:
    flag = 0;
        
    // Percorrer o vetor de strings:
    for(i=0; i<10; i++)
    {
        // Percorrer as letras dessa string.
        // Note que vamos apenas até a posição 18,
        // pois são no máximo 18 letras mais o terminador \0. 
        for(j=0; j<19; j++)
        {
            // Ver se o caracter atual é igual a letra procurada:
            if(NOMES[i][j] == letra)
            {
                // Se for, exibe a string:
                printf("==> %s\n", NOMES[i]);
                // Levanta a bandeira:
                flag = 1;
                // Podemos finalizar este laço que percorre letras,
                // e já ir pra próxima string.
                break;
            }
        }
    }
    
    // Se chegou aqui com a bandeira abaixada, 
    // é porque não achou a letra nenhuma vez:
    if( !flag ) printf("\nLetra não encontrada!\n");
    
}


        
        
    
