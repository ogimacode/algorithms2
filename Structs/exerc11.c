
#include <stdio.h>
#include <string.h>

int main()
{
    // Estrutura funcionario:
    struct funcionario
    {
        int    codigo;
        char   cargo[20];
        char   nome[30];
        int    dependentes;
        double salario;
    };
    
    // Variáveis diversas:
    char lixo[2];
    int flag;
    char buscarnome[30];
    int i;
    struct funcionario equipe[100];
    
    // Variável que indica a próxima posição livre no vetor:
    int livre = 0;
    
    // Variável para receber a opção do menu.
    // Inicializada com um valor diferente do '5 - Fim do programa'.
    int opcao = 0;
    
    // Enquanto a opcao não for 5 (finalizar)...
    while(opcao != 5)
    {
        // Exibe o menu de opções:
        printf("\n\nMenu de opções:\n\n");
        printf("1 - Cadastrar um funcionário\n");
        printf("2 - Consultar dados de um funcionário\n");
        printf("3 - Imprimir todos os funcionários\n");
        printf("4 - Alterar dados de um funcionário\n");
        printf("5 - FIM DO PROGRAMA\n\n");
        printf("Digite a opção desejada: ");
        
        // Recebe a opção do usuário, e fica recebendo,
        // enquanto o usuário não digitar um valor válido
        // previsto no menu de opções:
        scanf("%d%*c", &opcao);
        while(opcao < 1 || opcao > 5) {
            printf("**opção inválida!**\n");
            printf("Digite a opção desejada: ");
            scanf("%d%*c", &opcao);
        }
        
        // Se chegou aqui, recebemos uma opção válida!
        
        switch(opcao)
        {
            case 1:
                printf("\nCADASTRAMENTO DE NOVO FUNCIONARIO\n\n");
                
                // Recebendo os dados do funcionario.
                // Lembrando que a variável 'livre' indica a próxima
                // posição livre no vetor:
                printf("Digite o código: ");
                scanf("%d%*c", &equipe[livre].codigo);
                printf("Digite o cargo: ");
                gets(equipe[livre].cargo);
                printf("Digite o nome: ");
                gets(equipe[livre].nome);
                printf("Digite a quantidade de dependentes: ");
                scanf("%d%*c", &equipe[livre].dependentes);
                printf("Digite o valor do salário: ");
                scanf("%lf%*c", &equipe[livre].salario);
                
                printf("\n\nDados inseridos:\n");
                printf("Código: %d - %s\n", equipe[livre].codigo, equipe[livre].nome);
                printf("Cargo: %s - Salario: %lf\n", equipe[livre].cargo, equipe[livre].salario);
                printf("Dependentes: %d\n\n", equipe[livre].dependentes);
                
                // Incrementa a variável livre, para 'apontar' para o próximo
                // item livre no vetor:
                livre++;
                
                printf("Tecle <enter> para continuar...");
                gets(lixo);
                break;
                
            case 2:
                printf("\nCONSULTA DE FUNCIONARIO\n\n");
                
                // Recebendo o nome do funcionario a consultar:
                printf("Digite o nome do funcionario a consultar: ");
                gets(buscarnome);
                
                // Vamos percorrer o vetor, procurando pelo nome.
                // Vamos usar variável flag, pra indicar lá no final se não foi encontrado.
                // Não precisa percorrer o vetor inteiro. Lembre que a variável 'livre' indica
                // a próxima posição vazia. Então só temos que percorrer até a posição (livre-1).
                // Bandeira começa abaixada.
                flag = 0;
                
                for(i=0; i<livre; i++)
                {
                    if( strcmp(buscarnome, equipe[i].nome) == 0 )
                    {
                        // Se achou, exibe dados:
                        printf("Código: %d - %s\n", equipe[i].codigo, equipe[i].nome);
                        printf("Cargo: %s - Salario: %lf\n", equipe[i].cargo, equipe[i].salario);
                        printf("Dependentes: %d\n\n", equipe[i].dependentes);
                        
                        // Levanta a bandeira, pra indicar que achou:
                        flag = 1;
                    }
                }
                
                // Se a bandeira chegou aqui abaixada, é porque não achou nenhum funcionário:
                if( !flag )
                    printf("Registro de %s não encontrado!\n", buscarnome);
                
                printf("Tecle <enter> para continuar...");
                gets(lixo);
                break;                
    
            case 3:
                printf("\nIMPRIMIR TODOS OS FUNCIONÁRIOS\n\n");
                
                // Percorre o vetor, exibe dados.
                // Não precisa percorrer o vetor inteiro. Lembre que a variável 'livre' indica
                // a próxima posição vazia. Então só temos que percorrer até a posição (livre-1).
                for(i=0; i<livre; i++)
                {
                    printf("Código: %d - %s\n", equipe[i].codigo, equipe[i].nome);
                    printf("Cargo: %s - Salario: %lf\n", equipe[i].cargo, equipe[i].salario);
                    printf("Dependentes: %d\n\n", equipe[i].dependentes);
                }
                
                printf("Tecle <enter> para continuar...");
                gets(lixo);
                break; 
                
            case 4:
                printf("\nALTERAÇÃO DE DADOS DE FUNCIONARIO\n\n");
                
                // - receber o nome;
                // - procurar;
                // - se achar, receber dados e alterar no vetor;
                // - senão, informar que não existe.
                
                // Recebendo o nome do funcionario a alterar:
                printf("Digite o nome do funcionario a alterar: ");
                gets(buscarnome);
                
                // Vamos percorrer o vetor, procurando pelo nome.
                // Vamos usar variável flag ...
                flag = 0;
                
                for(i=0; i<livre; i++)
                {
                    if( strcmp(buscarnome, equipe[i].nome) == 0 )
                    {
                        // Se achou, exibe dados:
                        printf("Código: %d - %s\n", equipe[i].codigo, equipe[i].nome);
                        printf("Cargo: %s - Salario: %lf\n", equipe[i].cargo, equipe[i].salario);
                        printf("Dependentes: %d\n\n", equipe[i].dependentes);
                        
                        // Levanta a bandeira, pra indicar que achou:
                        flag = 1;
                        
                        // Recebe novos dados:
                        printf("Digite o novo código: ");
                        scanf("%d%*c", &equipe[i].codigo);
                        printf("Digite o novo cargo: ");
                        gets(equipe[i].cargo);
                        printf("Digite o novo nome: ");
                        gets(equipe[i].nome);
                        printf("Digite a nova quantidade de dependentes: ");
                        scanf("%d%*c", &equipe[i].dependentes);
                        printf("Digite o novo valor do salário: ");
                        scanf("%lf%*c", &equipe[i].salario);
                        
                        // Já alteramos. Break para sair do laço for:
                        break;
                        
                    }
                }
                
                // Se a bandeira chegou aqui abaixada, é porque não achou nenhum funcionário:
                if( !flag )
                    printf("Registro de %s não encontrado!\n", buscarnome);
                
                printf("Tecle <enter> para continuar...");
                gets(lixo);
                break;   
                
            // Não tem 'default' porque nunca vai ser diferente de 1, 2, 3, 4 ou 5.
            // Não tem case 5, porque não há nada a fazer se a opção for 5, apenas finalizar o 'enquanto'.
        }
    }
    printf("\n\n*** PROGRAMA FINALIZADO***\n\n");
}



