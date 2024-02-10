
#include <stdio.h>

void f(int MM[][3])
{
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ", MM[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
    
int main()
{
    int M[2][3] = { {1,2,3} , {4,5,6} };
    
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    f(M);
}
    
    
