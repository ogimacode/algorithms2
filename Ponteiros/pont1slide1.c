#include <stdio.h>

int main(){
    int x = 7;
    int *ponteiro = &x;
    // a mascara do print f pode ser trocada por "%p" de ponteiro
    printf("O conteudo da variavel x e: %d\n", *ponteiro);
    printf("O endereco do ponteiro da variavel x e: %d\n", &ponteiro);
    printf("O endereco da variavel x e: %d\n", &x);

}