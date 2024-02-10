#include <stdio.h>

typedef struct{
    double salario;
    char sexo;
    int idade;
    int filhos;
} pessoa;

int main(){
    pessoa pesquisa[10];
    int i;

    for (i = 0; i < 10; i++){
        printf("\nPessoa %d\n", i+1);
        printf("Salario: ");
        scanf("%lf%*c", &pesquisa[i].salario);
        printf("Sexo (M/F): ");
        scanf("%c%*c", &pesquisa[i].sexo);
        printf("Idade: ");
        scanf("%d%*c", &pesquisa[i].idade);
        printf("Numero de filhos: ");
        scanf("%d%*c", &pesquisa[i].filhos);
    }

    double media_salario = 0;
    for (i = 0; i < 10; i++){
        media_salario = media_salario + pesquisa[i].salario;
    }
    media_salario = media_salario / 10;
    printf("\nMedia de salario: %lf\n", media_salario);

    double media_filhos = 0;
    for (i = 0; i < 10; i++){
        media_filhos = media_filhos + pesquisa[i].filhos;
    }
    media_filhos = media_filhos / 10;
    printf("\nMedia de filhos: %lf\n", media_filhos);

    double maior_salario = pesquisa[0].salario;
    double menor_salario = pesquisa[0].salario;

    for (i = 0; i < 10; i++){
        if (pesquisa[i].salario > maior_salario){
            maior_salario = pesquisa[i].salario;
        }
        if (pesquisa[i].salario < menor_salario){
            menor_salario = pesquisa[i].salario;
        }
    }
    printf("\nMaior salario: %lf\n", maior_salario);
    printf("Menor salario: %lf\n", menor_salario);

    int total_mulheres = 0, contador = 0;

    for (i = 0; i < 10; i++){
        if (pesquisa[i].sexo == 'F'){
            total_mulheres++;
            if (pesquisa[i].salario > 1500.0){
                contador++;
            }
            
        }
    }
    double porcentagem = (double) contador/total_mulheres;

    printf("Temos %.2lf porcento de mulheres que ganham mais que 1500 ou acima", porcentagem * 100);   
}