#include <stdio.h>

// lembrar-se de usar funçoes void's apenas quando não retornar nenhum resultado
// Se sua função for retornar um numero, é necessário colocar o tipo de numero(float ou int)
void acha_num(int array[], int tamanho, int num){
    int i;
    int soma= 0;
    for (i = 0; i < tamanho; i++){
        if(num == array[i]){
            soma++;
        }
    }

    printf("A quantidade de vezes que aparece o %d e: %d", num, soma);
    
}

int main(){
    int tamanho;

    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);

    int array[tamanho];
    int i;
    for(i = 0; i < tamanho; i++){
        printf("Digite os numeros do array: ");
        scanf("%d", &array[i]);

    }
    // Nesse caso com a função returnando o resultado seria necessario colocar o tipo int na função
    // criar uma variavel para guardar o valor da funçao como no exemplo abaixo:
    // // int guarda_soma = acha_num(array, tamanho, num);
    // printf("A quantidade de vezes que aparece o %d e: %d", num, soma);
    int num;
    printf("Qual numero deseja procurar no array: ");
    scanf("%d", &num);

     
    acha_num(array, tamanho, num);
}

