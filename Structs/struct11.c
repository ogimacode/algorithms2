#include <stdio.h>
#include <string.h>

/*O código apresenta um problema na comparação de strings dentro do loop for nas opções 2 e 4 do switch. 
A função strcmp retorna 0 se as strings forem iguais, então a condição if (strcmp(buscarnome, funcionarios[i].nome)) 
está avaliando como verdadeira quando as strings são diferentes, o que não é o comportamento desejado.*/
// Portanto lembre-se disso quando for utilizar a função strcmp
typedef struct{
    int codigo;
    char cargo[50];
    char nome[50];
    int dependentes;
    float salario;
} Funcionario;

int main(){
    Funcionario funcionarios[100];

    int opcao;
    char lixo[2];
    int livre = 0;
    char buscarnome[50];
    int i = 0;

    while (opcao != 5){
        printf("1 - Cadastrar funcionario\n");
        printf("2 - Consultar dados de um funcionario\n");
        printf("3 - Imprimir todos os funcionarios\n");
        printf("4 - Alterar dados de funcionario\n");
        printf("5 - Fim do programa\n");
        printf("Digite: ");

        scanf("%d%*c", &opcao);
        while (opcao < 1 || opcao > 5){
            printf("Opcao invalida\n");
            printf("Digite uma opcao valida: ");
            printf("%d%*c", &opcao);
        }

        switch (opcao){
        case 1:
            printf("\n Cadastrar Funcionario\n");
            printf("Digite o codigo do funcionario: ");
            scanf("%d%*c", &funcionarios[livre].codigo);

            printf("Digite o cargo do funcionario: ");
            gets(funcionarios[livre].cargo);

            printf("Digite o nome do funcionario: ");
            gets(funcionarios[livre].nome);

            printf("Digite a quantidade  de dependentes: ");
            scanf("%d%*c", &funcionarios[livre].dependentes);

            printf("Digite o salario do funcionario: ");
            scanf("%f%*c", &funcionarios[livre].salario);

            printf("\n Dados inseridos\n");
            printf("Codigo: %d\n", funcionarios[livre].codigo);
            printf("Cargo: %s\n", funcionarios[livre].cargo);
            printf("Nome: %s\n", funcionarios[livre].nome);
            printf("Dependentes: %d\n", funcionarios[livre].dependentes);
            printf("Salario: %.2f\n", funcionarios[livre].salario);

            livre++;


            printf("Tecle <enter> para continuar: ");
            gets(lixo);
            break;
        
        case 2:
            printf("\n Consultar Funcionario\n");

            printf("Digite o nome do funcionario que deseja consultar: ");
            gets(buscarnome);

            int flag = 0;

            for (i = 0; i < livre; i++){
                if (strcmp(buscarnome, funcionarios[i].nome)== 0){
                    printf("Codigo: %d\n", funcionarios[i].codigo);
                    printf("Cargo: %s\n", funcionarios[i].cargo);
                    printf("Nome: %s\n", funcionarios[i].nome);
                    printf("Dependentes: %d\n", funcionarios[i].dependentes);
                    printf("Salario: %.2f\n", funcionarios[i].salario);

                    flag = 1;
                }            
            }
            
            if (!flag){
                printf("Funcionario nao resgistrado\n");
            }
            

            printf("Tecle <enter> para continuar: ");
            gets(lixo);
            break;
        case 3:
            printf("\n Imprimir todos os funcionarios\n");

            for (i = 0; i < livre; i++){
                printf("-------------\n");
                printf("Funcionario %d: \n", i + 1);
                printf("Codigo: %d\n", funcionarios[i].codigo);
                printf("Cargo: %s\n", funcionarios[i].cargo);
                printf("Nome: %s\n", funcionarios[i].nome);
                printf("Dependentes: %d\n", funcionarios[i].dependentes);
                printf("Salario: %.2f\n", funcionarios[i].salario);
                printf("-------------\n");
            }
            
            printf("Tecle <enter> para continuar: ");
            gets(lixo);
            break;
        case 4:
            printf("\n Alterar dados\n");

            printf("Digite o nome do funcinario a ser alterado: ");
            gets(buscarnome);

            int flag2 = 0;
            for (i = 0; i < livre; i++){
                if (strcmp(buscarnome, funcionarios[i].nome) == 0){
                    printf("Digite o novo codigo do funcionario: ");
                    scanf("%d%*c", &funcionarios[i].codigo);

                    printf("Digite o novo cargo do funcionario: ");
                    gets(funcionarios[i].cargo);

                    printf("Digite o novo nome do funcionario: ");
                    gets(funcionarios[i].nome);

                    printf("Digite a nova quantidade  de dependentes: ");
                    scanf("%d%*c", &funcionarios[i].dependentes);

                    printf("Digite o novo salario do funcionario: ");
                    scanf("%f%*c", &funcionarios[i].salario);

                    flag2 = 1;
                    break;
                }
            }
            if (!flag2){
                printf("Funcionario nao encontrado\n");
            }
            
            
            printf("Tecle <enter> para continuar: ");
            gets(lixo);
            break;
        }
    }
    printf("***Programa finalizado***");
}
