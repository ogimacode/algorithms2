#include <stdio.h>

float mult_num(int, float);

int main(){
    int num_int;
    float num_float;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num_int);
    printf("Digite um numero real: ");
    scanf("%f", &num_float);

    float resultado = mult_num(num_int, num_float);

    printf("O resultado e: %f", resultado);
}

float mult_num(int num_int, float num_float){

    float resultado = num_float * num_int;

    return resultado;
}