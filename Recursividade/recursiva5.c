#include <stdio.h>

int recursiva(int numero, int expoente){
    if (expoente == 0){
        return 1;
    } else{
        return numero * recursiva(numero, expoente - 1);
    }
    
}

int main(){
    int num, expo;
    printf("Digite um numero: ");
    scanf("%d%*c", &num);
    printf("Digite o expoente: ");
    scanf("%d%*c", &expo);

    int resultado = recursiva(num, expo);

    printf("%d", resultado);
}