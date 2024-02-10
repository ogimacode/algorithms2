
#include <stdio.h>

void f(int ll, int cc, int pp, int MMM[ll][cc][pp])
{
    for(int i = 0; i < ll; i++)
    {
        for(int j = 0; j < cc; j++)
        {
            for(int k = 0; k < pp; k++)
            {
                printf("%03d ", MMM[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n");
}
    
int main()
{
    int l, c, p;
    
    printf("Digite o número de linhas:");
    scanf("%d%*c", &l);
    printf("Digite o número de colunas:");
    scanf("%d%*c", &c);
    printf("Digite o número de profundidade:");
    scanf("%d%*c", &p);
    
    int MMM[l][c][p];
    
    for(int i = 0; i < l; i++) {
        for(int j = 0; j < c; j++) {
            for(int k = 0; k < p; k++)
            {
                MMM[i][j][k] = (i * 100) + (j * 10) + k;
                printf("%03d ", MMM[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n");
    
    f(l, c, p, MMM);
}

