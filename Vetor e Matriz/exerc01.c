
#include <stdio.h>

int main()
{
    int vetor_inicial[8];
    
    // Lembre-se que a memória pode conter valores aleatórios!
    // Então, crie os vetores zerando as posições!
    int positivos[8] = {0};
    int negativos[8] = {0};
    
    int i;
    int p=0, n=0;
    
    for(i = 0; i<8; i++)
    {
        printf("Digite o %dº elemento: ", i+1);
        scanf("%d%*c", &vetor_inicial[i]);
    }
    
    for(i = 0; i<8; i++)
    {
        if (vetor_inicial[i] >= 0)
        {
            positivos[p] = vetor_inicial[i];
            p++;
        }
        else
        {
            negativos[n] = vetor_inicial[i];
            n++;
        }
    }
    
    // Exibição dos vetores:
    
    printf("\n\nVetor inicial: ");
    for(i = 0; i<8; i++)
        printf("%d ", vetor_inicial[i]);
        
    // Lembrando que as variáveis p e n estão "apontando"
    // para a posição seguinte ao último número colocado
    // naquele vetor.
    // Então podemos usar essas variáveis como limite máximo
    // para exibir os valores, para não exibir os 'zeros'
    // que estão nas posições que não foram utilizadas.
        
    printf("\n\nVetor positivos: ");
    for(i = 0; i<p; i++)
        printf("%d ", positivos[i]);
        
    printf("\n\nVetor negativos: ");
    for(i = 0; i<n; i++)
        printf("%d ", negativos[i]);
        
}


        
        
