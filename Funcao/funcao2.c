#include <stdio.h>

void somab(int, int);

int main(){
    int a, b;

    printf("Digite a: ");
    scanf("%d%*c", &a);

    printf("Digite b: ");

    scanf("%d%*c", &b);

    somab(a, b);
}

void somab(int a, int b){
    int soma = 0;
    soma = a + b;

    printf("A soma e: %d", soma);
}