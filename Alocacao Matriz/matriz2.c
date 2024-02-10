#include <stdio.h>

int main(){
    int n, i, j;
    int matriz[n][n];
    int flag = 0;

    printf("Digite a dimensao da matriz: ");
    scanf("%d%*c", &n );

    for (i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("Digite o numedo da linha [%d] e coluna[%d]: ", i, j);
            scanf("%d%*c", &matriz[i][j]);
        }
    }
    
    for(i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if(i == j && matriz[i][j] != 1){
                flag = 1;
                break;
            } else if(i != j && matriz[i][j] != 0){
                flag = 1;
                break;
            }
        }
        if(flag){
            break;
        }
    }
    if(!flag){
        printf("E identidade");
    } else{
        printf("Nao e identidade");
    }

}