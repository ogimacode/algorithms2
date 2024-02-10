#include <stdio.h>

void maior_valor(int, int, int, int*);

int main(){
    int num1, num2, num3, ref;
    
    printf("Digite o valor 1: ");
    scanf("%d", &num1);
    printf("Digite o valor 2: ");
    scanf("%d", &num2);
    printf("Digite o valor 3: ");
    scanf("%d", &num3);

    maior_valor(num1, num2, num3, &ref);

    printf("Maior valor: %d", ref);

}

/* Modo como eu fiz: (por passagem para um vetor)
void maior_valor(int n1, int n2, int n3, int *referencia){
    int numeros[] = {n1, n2, n3};
    int maior = numeros[0];
    for (int i = 0; i < 3; i++){
        if (numeros[i] > maior){
            maior = numeros[i];
        }
    }
    *referencia = maior;
}
*/
// modo como o professor fez: (apenas um if else comum)
void maior_valor(int n1, int n2, int n3, int *referencia){
    if (n1 >= n2 && n1 >= n3){
        *referencia = n1;
    } else if(n2 >= n1 && n2 >= n3){
        *referencia = n2;
    } else{
        *referencia = n3;
    }
    
}