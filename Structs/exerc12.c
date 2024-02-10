
#include <stdio.h>

int main()
{
    int i;
    
    struct pessoa {
        
        double salario;
        char sexo;
        int idade;
        int filhos;
    };
    
    // Vou simplificar para apenas 10 pessoas:
    struct pessoa pesquisa[10];
    
    printf("Digitação de dados:\n");
    
    for(i = 0; i<10; i++)
    {
        printf("\nPessoa %d\n", i+1);
        printf("Salario: ");
        scanf("%lf%*c", &pesquisa[i].salario);
        printf("Sexo (M/F): ");
        scanf("%c%*c", &pesquisa[i].sexo);
        printf("Idade: ");
        scanf("%d%*c", &pesquisa[i].idade);
        printf("Número de filhos: ");
        scanf("%d%*c", &pesquisa[i].filhos);
    }
    
    // Media de salários:
    // Percorre o vetor, vai acumulando os salários.
    // No final, divide por 10.
    
    double mediasal = 0;
    
    for(i=0; i<10; i++)
        mediasal = mediasal + pesquisa[i].salario;
    
    mediasal = mediasal / 10;
    
    printf("\nMédia dos salários: %lf\n", mediasal);
    
    // Número médio de filhos, vai acumulando o número de filhos,
    // no final divide por 10.
    
    double mediafilhos = 0;
    
    for(i=0; i<10; i++)
        mediafilhos = mediafilhos + pesquisa[i].filhos;
    
    mediafilhos = mediafilhos / 10;
    
    printf("\nMédia de filhos: %lf\n", mediafilhos);
    
    // Algoritmo básico para maior (ou menor).
    // - Variável para armazenar o maior (ou menor).
    // - Já coloca a primeira informação nesta variável.
    //   (enquanto não se avalia outros valores, o primeiro valor é o maior! (ou menor!)
    // - Percorre o resto dos dados.
    // - Se encontrar um valor maior (ou menor) do que o que foi guardado, troca.
    
    double maiorsal, menorsal;
    
    // Já coloca os valores da primeira pessoa nessas variáveis:
    maiorsal = pesquisa[0].salario;
    menorsal = pesquisa[0].salario;
    
    // Percorre o resto dos dados (começando na 2a pessoa):
    for(i=1; i<10; i++)
    {
        // Se o salário atual for maior que o que foi guardado,
        // troca o valor guardado!
        if(pesquisa[i].salario > maiorsal)
            maiorsal = pesquisa[i].salario;
            
        // Cuidado!!! Erro clássico aqui!!! Colocar 'else'!!!
        // A pergunta de cima (maior) não tem nada a ver com 
        // a pergunta de baixo! (menor)! Não tem sentido colocar 'else'!!!
        
        // Se o salário atual for menor que o que foi guardado,
        // troca o valor guardado!
        if(pesquisa[i].salario < menorsal)
            menorsal = pesquisa[i].salario;
    }
    
    // Exibe os dados:
    printf("\nMaior salário: %lf\n", maiorsal);
    printf("Menor salário: %lf\n", menorsal);
    
    // Percentual de mulheres com salário superior a 1500.
    // Percorre todos os dados.
    // Se sexo == 'F', soma 1 no totalmulheres.
    // Se sexo == 'F' *E* salario >= 1500, soma 1 no contador.
    // Porcentagem final: contador / totalmulheres ( vezes 100 ).
    
    int totalmulheres = 0, contador = 0;
    
    for(i=0; i<10; i++)
    {
        if(pesquisa[i].sexo == 'F')
        {
            totalmulheres++;
            
            if(pesquisa[i].salario >= 1500)
                contador++;
        }
    }
    
    // Lembrando: contador é inteiro, totalmulheres é inteiro.
    // Se apenas dividir um pelo outro, vai dar resultado inteiro.
    // Precisa converter para double, usando cast:
    double porcentagem = (double) contador/totalmulheres;
    
    // Para exibir o simbolo % no printf, precisa usar %%.
    printf("\nTemos %3.1lf\%% de mulheres que ganham 1500 ou acima.\n", porcentagem*100 );

}



