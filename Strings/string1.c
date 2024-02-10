#include <stdio.h>
#include <string.h>

int main(){
    char nome[10][20];
    char aux[20];
    int flag;
    int i, j;

    for ( i = 0; i < 10; i++){
        printf("Digite o %d nome: ", i + 1);
        gets(nome[i]);
    }

    printf("\nNome digitados:\n");
    for (i = 0; i < 10; i++){
        printf("%s\n", nome[i]);
    }
    
    for (i = 0; i < 10; i++){
        flag = 0;
        for ( j = 0; j < 9; j++){
            if (strcmp(nome[j], nome[j + 1]) > 0){
                strcpy(aux, nome[j]);
                strcpy(nome[j], nome[j + 1]);
                strcpy(nome[j + 1], aux);
                flag = 1;
            }
        }

        if(!flag){
            break;
        }        
    }
    printf("\n\nNomes ordenados\n\n");
    for (i = 0; i < 10; i++){
        printf("%s\n", nome[i]);
    }
    
    
}