
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// Definir a struct Aluno com typedef:

typedef struct {
    char nome[100];
    float notas[5];
} Aluno;

int main() 
{
    int numeroAleatorio;
    float nota;
    
    // Inicialize a semente para a função rand() com base no tempo atual:
    srand(time(NULL));
    
    // Declarar um array de 5 structs Aluno
    Aluno alunos[5];

    // Preencher o array com informações fictícias de alunos e notas:
    
    strcpy(alunos[0].nome, "João");
    strcpy(alunos[1].nome, "Maria");    
    strcpy(alunos[2].nome, "Pedro");
    strcpy(alunos[3].nome, "Ana");
    strcpy(alunos[4].nome, "Carlos");
    
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            
            // Gere um número aleatório entre 0 e RAND_MAX (um número inteiro)
            numeroAleatorio = rand();
            // Converta o número inteiro para um número decimal entre 0 e 10.0
            alunos[i].notas[j] = (float) numeroAleatorio / RAND_MAX * 10.0;
        }
    }

    // Calcular e imprimir a média de cada aluno:
    
    printf("Média das Notas dos Alunos:\n");
    for (int i = 0; i < 5; i++) {
        float somaNotas = 0.0;
        for (int j = 0; j < 5; j++) {
            somaNotas += alunos[i].notas[j];
        }
        float media = somaNotas / 5.0;
        printf("Aluno: %7s, Média: %.2f\n", alunos[i].nome, media);
    }
}


