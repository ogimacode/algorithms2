#include <stdio.h>

int main(){
    int numero, i;

    printf("Digite um numero: ");
    scanf("%d%*c", &numero);

    if(numero <= 1){
        printf("nao e primo");
    }
    else {
        for(i = 2; i < numero; i++){
            if(numero % i == 0){
                printf("Nao e primo");
                break;
            }
        }
    }
    if(numero == i){
        printf("E primo");
    }

}