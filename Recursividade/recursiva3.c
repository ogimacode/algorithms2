#include <stdio.h>

int soma(int a, int b){
    if(b == 0){
        return a;
    } else{
        return soma(a + 1, b - 1);
    }
}

int main(){
    int a, b;

    printf("Digite A: ");
    scanf("%d", &a);
    
    printf("Digite B: ");
    scanf("%d", &b);


    int resultado = soma(a, b);
    printf("%d", resultado);
}