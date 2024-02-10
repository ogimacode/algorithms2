#include <stdio.h>

int main(){
    float nota;
    int passou = 0, ira = 0, reprova = 0, i = 0;

    while (nota >= 0){
        printf("Digite a nota do aluno (ou valor negativo para sair): ");
        scanf("%f%*c", &nota);
        if (nota >= 6){
            passou++;
        }
        else if (nota >= 4){
            ira++;
        } else if (nota >= 0){
            reprova++;
        }
        i++;
    }
    printf("Quandidade de alunos que passaram: %d\n", passou);
    printf("Quantidade de alunos no IRA: %d\n", ira);
    printf("Quantidade de alunos que reprovaram: %d\n", reprova);
}