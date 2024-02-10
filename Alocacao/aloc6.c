#include <stdio.h>
#include <stdlib.h>


typedef struct{
    char nome_aluno[100];
    float nota1;
    float nota2;
} Aluno;

typedef struct{
    char nome_disciplina[100];
    int qtdalunos;
    Aluno *alunos;
} Disciplina;


int main(){
    int num_disciplinas;
    int i,j;

    printf("Quantas disciplinas: ");
    scanf("%d%*c", &num_disciplinas);

    Disciplina *disciplinas = (Disciplina*) malloc(num_disciplinas * sizeof(Disciplina));

    if (disciplinas == NULL){
        printf("ERRO");
        exit(1);
    }

    for (i = 0; i < num_disciplinas; i++){

        printf("Digite o nome da disciplina: ");
        gets(disciplinas[i].nome_disciplina);

        printf("Digite a quantidade de alunos na disciplina %s: ", disciplinas[i].nome_disciplina);
        scanf("%d%*c", &disciplinas[i].qtdalunos);

        disciplinas[i].alunos = (Aluno*) malloc(disciplinas[i].qtdalunos * sizeof(Aluno));

        if (disciplinas[i].alunos == NULL){
            printf("ERRO");
            exit(1);
        }
        
        for (j = 0; j < disciplinas[i].qtdalunos; j++){
            printf("Digite o nome do aluno %d da disciplina %s: ", j + 1, disciplinas[i].nome_disciplina);
            gets(disciplinas[i].alunos[j].nome_aluno);

            printf("Digite a nota 1 de %s: ", disciplinas[i].alunos[j].nome_aluno);
            scanf("%f%*c", &disciplinas[i].alunos[j].nota1);

            printf("Digite a nota 2 de %s: ", disciplinas[i].alunos[j].nome_aluno);
            scanf("%f%*c", &disciplinas[i].alunos[j].nota2);

        }
    }
    
    for (i = 0; i < num_disciplinas; i++){
        printf("Disciplina %s\n", disciplinas[i].nome_disciplina);

        for (j = 0; j < disciplinas[i].qtdalunos; j++){
            printf("Aluno: %s\n", disciplinas[i].alunos[j].nome_aluno);
            printf("Nota 1: %.2f\n", disciplinas[i].alunos[j].nota1);
            printf("Nota 2: %.2f\n", disciplinas[i].alunos[j].nota2);
            float media = (disciplinas[i].alunos[j].nota1 + disciplinas[i].alunos[j].nota2) / 2;
            printf("Media: %.2f\n", media);


        }
        printf("\n");
    }
    
    for (i = 0; i < num_disciplinas; i++){
        free(disciplinas[i].alunos);
    }
    free(disciplinas);
}