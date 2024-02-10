
#include <stdio.h>

int main()
{
    int i, j, k;
    int a, b, c;
    
    printf("Multiplicar matriz a x b por matriz b x c\n\n");
    
    printf("Digite o valor de a: ");
    scanf("%d%*c", &a);
    
    printf("Digite o valor de b: ");
    scanf("%d%*c", &b);
    
    printf("Digite o valor de c: ");
    scanf("%d%*c", &c);
    
    // Criação das matrizes:
    int A[a][b], B[b][c], RES[a][c];
    
    // Digitação dos dados das matrizes:
    
    for(i=0; i<a; i++)
        for(j=0; j<b; j++)
        {
            printf("Matriz 1: digite o valor da linha %d coluna %d: ", i, j);
            scanf("%d%*c", &A[i][j]);
        }
        
    printf("\n\n");
        
    for(i=0; i<b; i++)
        for(j=0; j<c; j++)
        {
            printf("Matriz 2: digite o valor da linha %d coluna %d: ", i, j);
            scanf("%d%*c", &B[i][j]);
        }
        
    printf("\n\n");
        
    // Multiplicando...
    
    for(i=0; i<a; i++)
    {
        for(j=0; j<c; j++)
        {
            RES[i][j] = 0;
            for(k=0; k<b; k++)
            {
                RES[i][j] = RES[i][j] + A[i][k] * B[k][j];
            }
        }
    }
    
    // Exibindo as matrizes:
    
    printf("\n\nExibindo as matrizes...\n\n");
    
    printf("Matriz 1:\n\n");
    
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            printf("%3d ", A[i][j]);
        }    
        printf("\n");
    }
    
    printf("\n\nMatriz 2:\n\n");
    
    for(i=0; i<b; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%3d ", B[i][j]);
        }    
        printf("\n");
    }    
    
    printf("\n\nMatriz Resultante:\n\n");
    
    for(i=0; i<a; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%3d ", RES[i][j]);
        }
        printf("\n");
    }  
    
}



  
            
