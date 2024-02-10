#include <stdio.h>

int main(){
    int numero, i;

    printf("Digite um numero: ");
    scanf("%d%*c", &numero);

    if(numero <= 1){
        printf("Nao e primo");
    }
    i = 2;
    do {
        if(numero % i == 0){
            printf("Nao e primo");
            break;
        }
        i++;
    } while (i < numero);

    if (numero == i){
        printf("E primo");
    }
}