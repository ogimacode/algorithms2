#include <stdio.h>


void muda_valores(int *numero1, int *numero2){
    int aux;
    aux = *numero1;
    *numero1 = *numero2;
    *numero2 = aux;
}

int main(){
    int num1, num2;

    printf("Digite o valor 1: ");
    scanf("%d", &num1);
    printf("Digite o valor 2: ");
    scanf("%d", &num2);

    printf("Antes da funcao\n");
    printf("Valor 1 antes: %d\n", num1);
    printf("Valor 2 antes: %d\n", num2);

    muda_valores(&num1, &num2);

    printf("Dps da funcao\n");
    printf("Valor 1 dps: %d\n", num1);
    printf("Valor 2 dps: %d\n", num2);
}

