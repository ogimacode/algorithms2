#include <stdio.h>

int recursiva(int numero){
    if (numero == 0){
        return 0;
    } else{
        return numero + recursiva(numero - 1);
    }
    
}

int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d%*c", &num);

    int resultado = recursiva(num);

    printf("%d", resultado);
}