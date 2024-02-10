
#include <stdio.h>

// Função para permitir a digitação de notas 
// para todos os alunos em todas as disciplinas:

void digitarNotas(float matriz[3][5]) 
{
    for (int i=0; i < 3; i++) 
    {
        for (int j=0; j < 5; j++) 
        {
            printf("Disciplina %d - Digite a nota do aluno %d: ", i + 1, j + 1);
            scanf("%f%*c", &matriz[i][j]);
        }
    }
}

// Função para calcular as médias de notas de cada disciplina 
// e encontrar a maior nota:

float *calcularMediasEEncontrarMaiorNota(float matriz[3][5]) 
{
    float maior = matriz[0][0];
    float *enderecoMaior = &matriz[0][0];

    for (int i=0; i < 3; i++) 
    {
        float soma = 0.0;
        for (int j=0; j < 5; j++) 
        {
            soma = soma + matriz[i][j];
            
            if (matriz[i][j] > maior) 
            {
                maior = matriz[i][j];
                enderecoMaior = &matriz[i][j];
            }
        }
        
        printf("A média da disciplina %d é: %f\n", i, (soma/5) );
    }

    // Retorne o endereço da maior nota encontrada:
    return enderecoMaior;
}

int main() 
{
    // Cria matriz para notas (5 alunos) em 3 disciplinas:
    float notas[3][5];

    // Chame a função para permitir a digitação de notas
    digitarNotas(notas);

    // Chame a função para calcular as médias e encontrar a maior nota
    float *maiorNota = calcularMediasEEncontrarMaiorNota(notas);

    // Exiba a maior nota
    printf("\nA maior nota de todas é: %.2f\n", *maiorNota);
}



