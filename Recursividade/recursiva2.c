#include <stdio.h>

int fatorial(int num){
    if (num == 0 || num == 1){
        return 1;
    } else {
        return num * fatorial(num - 1);
    }
}

int main(){
    int n;

    printf("Digite o numero: ");
    scanf("%d", &n);

    int resultado = fatorial(n);
    printf("%d", resultado);
}
