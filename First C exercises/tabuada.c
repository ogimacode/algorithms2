#include <stdio.h>

int main(){
    int i, j, resultado;

    for(i = 1; i <= 10; i++){
        for ( j = 0; j <= 10; j++){
            resultado = i * j;
            printf("%d x %d = %d\n", i, j, resultado);
        }
        resultado = 0;
    }
}