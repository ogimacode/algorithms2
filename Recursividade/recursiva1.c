// faça um programa que imprima de um numero n ate 0
#include <stdio.h>

void imprimir(int x){
    if(x == 0){
        printf("%d ", x);
    } else{
        // para os valores serem imprimidos de forma crescente
        // tem que inverter o print com a funcao exemplo:
        // imprimir(x - 1);
        // printf("%d ", x);
        printf("%d ", x);
        imprimir(x - 1);
    }
}

int main(){
    int n;

    printf("Digite o numero: ");
    scanf("%d", &n);

    imprimir(n);

}