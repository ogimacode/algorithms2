#include <stdio.h>


int main() {
    int idade, jogadores, times, i, j, menos18 = 0, soma_idade = 0;
    float peso, altura, altura_media_total = 0.0, media_time, kgmaior = 0.0, peso_porcento;
    jogadores = 3;
    times = 3;
    i = 1;
    
    while (i <= times){
        for(j = 0; j < jogadores; j++){
            printf("Digite sua idade: ");
            scanf("%d%*c", &idade);
            printf("Digite sua altura: ");
            scanf("%f%*c", &altura);
            printf("Digite seu peso: ");
            scanf("%f%*c", &peso);
            altura_media_total = altura_media_total + altura;
            soma_idade = soma_idade + idade;
            if(idade < 18){
                menos18 = menos18 + 1;
            }
            if(peso > 80){
                kgmaior = kgmaior + 1;
            }
        }
        media_time = (float)soma_idade / jogadores;
        printf("A media do time %d e: %f\n", i, media_time);
        soma_idade = 0;
        i++;
    }
    peso_porcento = (kgmaior / (times * jogadores)) * 100;
    altura_media_total = altura_media_total / (times * jogadores);
    printf("Quantidade de alunos -18: %d\n", menos18);
    printf("Altura media de todos os jogadores: %f\n", altura_media_total);
    printf("A porcentagem de jogadores com +80kg e: %f", peso_porcento);
}