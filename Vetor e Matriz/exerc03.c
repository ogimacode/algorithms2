
#include <stdio.h>

int main()
{
    // Criando a matriz:
    int P[3][3];
    
    // Inserindo valores:
    // Obs:
    //      - variável i usada para linha
    //      - variável j usada para coluna
    
    int i, j;
    
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Digite o valor da linha %d coluna %d da matriz: ", i, j);
            scanf("%d%*c", &P[i][j]);
        }
    }
    
    // Vamos percorrer todas as posições da matriz,
    // e usar a fórmula pra definir se a matriz é simétrica.
    // Vamos usar uma variável flag para indicar se alguns
    // dos testes foi falso.
    
    int flag = 0;
    
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            // Se o valor em i,j for diferente do valor em j,i
            // levantamos a bandeira, pra indicar que a matriz
            // não é simétrica:
            
            if( P[i][j] != P[j][i] )
                flag = 1;
        }
    }
    
    // Exibindo a matriz:
    
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d  ", P[i][j]);
        }
        
        // No final de cada linha, exibimos um \n
        // para pular para a próxima linha:
        printf("\n");
    }
    
    // Indicando se é matriz simétrica ou não:
    if(flag)
        printf("A matriz não é simétrica!\n");
    else
        printf("A matriz é simétrica!\n");
    
}
    
    
    
    
    
    
    
    
