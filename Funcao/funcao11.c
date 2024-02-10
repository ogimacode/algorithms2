#include <stdio.h>
#include <string.h>
typedef struct {
    int num;
    float saldo;
    char titular[50];
} conta;

conta maior_saldo(conta[], int);

int main(){
    conta contas[2];

    for(int i = 0; i < 2; i++){
        printf("Digite o numero da conta %d: \n", i + 1);
        scanf("%d", &contas[i].num);
        printf("Digite o saldo da conta %d: \n", i + 1);
        scanf("%f", &contas[i].saldo);
        printf("Digite o titular da conta %d: \n", i + 1);
        gets(contas[i].titular);
    }

    conta guarda_maior = maior_saldo(contas, 2);

    printf("-- Conta com maior saldo -- \n");
    printf("Numero: %d\n", guarda_maior.num);
    printf("Saldo: %f\n", guarda_maior.saldo);
    printf("Titular: %s\n", guarda_maior.titular);

}

conta maior_saldo(conta contas[], int num_contas){
    conta maior = contas[0];
    for (int i = 0; i < num_contas; i++){
        if(contas[i].saldo > maior.saldo){
            maior = contas[i];
        }
    }
    return maior;
}
