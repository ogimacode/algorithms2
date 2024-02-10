#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    float delta, x1, x2;
    printf("Insira o A: ", a);
    scanf("%d%*c", &a);
    printf("Insira o B: ", b);
    scanf("%d%*c", &b);
    printf("Insira o C: ", c);
    scanf("%d%*c", &c);

    delta = pow(b,2) - 4 * a * c;
    if (delta < 0){
        printf("Nao existe raizes reais");
    }
    else{
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        if (delta == 0){
            if (x1 > x2){
                printf("Tem uma raiz: %f", x1);

            }
            else{
                printf("Tem uma raiz: %f", x2);
            }
        }

    }
    if (delta > 0){
        printf("Raiz X1: %f", x1);
        printf("Raiz X2: %f", x2);
    }
}