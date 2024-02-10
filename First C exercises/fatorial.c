#include <stdio.h>

int main(){
    int numero, fatorial, i;
    printf("Digite um numero: ");
    scanf("%d%*c", &numero);
    fatorial = 1;
    i = numero;
    while (i != 0){
        fatorial = fatorial * i;
        i--;
    }
    printf("O fatorial de %d e: %d", numero, fatorial);
}