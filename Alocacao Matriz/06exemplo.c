
#include <stdio.h>

void f(int l, int c, int MM[l][c])
{
    for(int i=0; i<l; i++) {
        for(int j=0; j<c; j++) {
            printf("%02d ", MM[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
    
int main()
{
    int l, c;
    
    printf("Digite o número de linhas:");
    scanf("%d%*c", &l);
    printf("Digite o número de colunas:");
    scanf("%d%*c", &c);
    
    // Criando a matriz com base nos dados digitados:
    int M[l][c];
    
    for(int i=0; i<l; i++) {
        for(int j=0; j<c; j++) {
            M[i][j] = (i*10)+j;
            printf("%02d ", M[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    f(l, c, M);
}
    
    
