
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,j;
    char aux[20];
    
    // Flag para identificar se houve troca ou não:
    int flag;
    
    // Vetor de strings (matriz de caracteres).
    // 10 nomes de no máximo 19 caracteres cada.
    char NOMES[10][20];
    
    // Preenchendo com os nomes:
    for(i=0; i<10; i++)
    {
        printf("Digite o %do nome: ", i+1);
        gets( NOMES[i] );
    }
        
    // Exibe o vetor criado:
    printf("\nNomes digitados:\n");
    for(i=0; i<10; i++)
        printf("%s\n", NOMES[i]);
    printf("\n\n");
        
    // Método de bolhas. Com certeza estará ordenado após 10 repetições:
    for(i=0; i<10; i++)
    {
        // Define bandeira abaixada:
        flag = 0;
        
        // O vetor tem posições de 0 a 9. Vamos percorrer de 0 a 8,
        // pois em cada posição, pegaremos a seguinte pra comparar.
        // Então quando for 8, pegaremos a seguinte, 9, que é a última.
        for(j=0; j<9; j++)
        {
            // Se o elemento j for maior que o elemento j+1, troca:
            if( strcmp(NOMES[j],NOMES[j+1]) > 0 ) 
            {
                strcpy(aux, NOMES[j]);
                strcpy(NOMES[j], NOMES[j+1]);
                strcpy(NOMES[j+1], aux);
                // Se houve troca, levanta a bandeira:
                flag = 1;
            }
        }
        
        // Se a bandeira chegou aqui abaixada, é porque não houve
        // nenhuma troca. Isto é, o vetor já está ordenado.
        // Vamos finalizar a repetição principal com break.
        if(!flag) break;
    }
    
    // Exibe o vetor ordenado:
    printf("\nNomes ordenados:\n");
    for(i=0; i<10; i++)
        printf("%s\n", NOMES[i]);
    printf("\n");
}


        
        
    
