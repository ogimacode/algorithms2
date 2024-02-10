
#include <stdio.h>

int main()
{
    int i, j, n;
    
    printf("Digite o valor de n: ");
    scanf("%d%*c", &n);
    
    int MAT[n][n];
    
    // Preenchendo a matriz:
    for( i=0; i<n; i++)
        for( j=0; j<n; j++)
        {
            printf("Digite o valor da linha %d, coluna %d: ", i, j);
            scanf("%d%*c", &MAT[i][j]);
        }
    
    // Exibindo a matriz digitada:
    printf("Matriz:\n\n");
    for( i=0; i<n; i++)
    {
        for( j=0; j<n; j++)
        {
            printf("%d ", MAT[i][j]);
        }
        printf("\n");
    }
    
    int flag = 0;

    for( i=0; i<n; i++)
    {
        for( j=0; j<n; j++)
        {
            if ( i == j )
            {
                if( MAT[i][j] != 1)
                    flag = 1;
            }
            else
            {
                if( MAT[i][j] != 0)
                    flag = 1;
            }
        }
    }
    
    if( flag == 1)
        printf("Matriz não é identidade\n");
    else
        printf("Matriz identidade\n");
        
}


