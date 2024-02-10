#include <stdio.h>

int main(){
    int vetor_a[10];
    int vetor_b[10];
    int vetor_final[20];
    int  i;

    for(i = 0; i < 10; i++){
        printf("Digite o valor da posicao %d do vetor A: ", i);
        scanf("%d%*c", &vetor_a[i]);
    }
    for(i = 0; i < 10; i++){
        printf("Digite o valor da posicao %d do vetor B: ", i);
        scanf("%d%*c", &vetor_b[i]);
    }

    for(i = 0; i < 20; i++){
        if(i % 2 == 0){
            vetor_final[i] = vetor_a[i / 2];
        } else {
            vetor_final[i] = vetor_b[i / 2];
        }
    }

    for(i = 0; i < 20; i++){
        printf("%d\n", vetor_final[i]);
    }
}