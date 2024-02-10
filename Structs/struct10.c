#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

typedef struct{
    char nome[50];
    float notas[5];
} Aluno;

int main(){
    Aluno alunos[5];

    strcpy(alunos[0].nome, "juca");
    strcpy(alunos[1].nome, "lucas");
    strcpy(alunos[2].nome, "cleiton");
    strcpy(alunos[3].nome, "edmilton");
    strcpy(alunos[4].nome, "duny");

    int i, j;

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            printf("Digite a nota %d do aluno %s: ", j+1 , alunos[i].nome);
            scanf("%f%*c", &alunos[i].notas[j]);
        }
    }
    
    for (i = 0; i < 5; i++){
        float soma = 0;
        for (j = 0; j < 5; j++){
            soma = soma + alunos[i].notas[j];
        }
        float media = soma / 5;
        printf("Media do aluno %s: %.2f\n", alunos[i].nome, media);
        
    }
}
