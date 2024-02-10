
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Criando os vetores:
    int vetorA[10], vetorB[10], vetorC[20];
    
    // Criando variáveis para usar como índices:
    int i, iC;
    
    
    // Preenchendo os vetores A e B com valores aleatórios:
    
    // Criando a semente aleatória:
    srand( time(NULL) );
    
    for(i=0; i<10; i++)
    {
        vetorA[i] = ( rand() % 100 );
        vetorB[i] = ( rand() % 100 );
    }
    
    // Percorrendo os vetores A e B,
    // pegando os valores e colocando no vetor C:
    
    for(i=0; i<10; i++)
    {
        // Pegando de A, colocando em C:
        iC = i*2;
        vetorC[iC] = vetorA[i];
        
        // Pegando de B, colocando em C:
        iC = i*2 + 1;
        vetorC[iC] = vetorB[i];
    }
    
    // Exibindo os vetores:
    
    printf("Vetor A: ");
    for(i=0; i<10; i++)
        printf("%d ", vetorA[i]);
    printf("\n\n");
    
    printf("Vetor B: ");
    for(i=0; i<10; i++)
        printf("%d ", vetorB[i]);
    printf("\n\n");
    
    printf("Vetor C: ");
    for(i=0; i<20; i++)
        printf("%d ", vetorC[i]);
    printf("\n\n");
        
}
    
    
    
    
    
    
    
    
