#include <stdio.h>

void digitar_notas(float matriz[3][5]){
    int i, j;
    for (i = 0; i < 3; i++){
        for (j = 0; j < 5; j++){
            printf("Digite a nota da materia %d, do aluno %d: ", i + 1, j + 1);
            scanf("%f%*c", &matriz[i][j]);
        }
    }
}

void *media_notas(float matriz[3][5]){
    float maior = matriz[0][0];
    float *endereco_maior = &matriz[0][0];
    float acumulador = 0;
    int i,j;
    for (i = 0; i < 3; i++){
        acumulador = 0;
        for (j = 0; j < 5; j++){
            if (matriz[i][j] > maior){
                maior = matriz[i][j];
                endereco_maior = &matriz[i][j];
            }
            acumulador = acumulador + matriz[i][j];
        }
        float media = acumulador / 5;
        printf("A media da disciplina %d e: %.2f\n", i + 1, media);
    }
    return endereco_maior;
    
}
int main(){
    float matriz[3][5];

    digitar_notas(matriz);

    /* for (int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++){
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
     } */

     float *endereco = media_notas(matriz);
    
    printf("A maior nota e: %.2f", *endereco);
}