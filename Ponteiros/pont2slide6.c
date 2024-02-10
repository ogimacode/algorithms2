#include <stdio.h>

typedef struct{
    char nome[50];
    float preco;
} Produto;

typedef struct{
    Produto produto;
    int quantidade;
} ItemPedido;

void inserir_item(ItemPedido *pedido, int *quantidade){
    ItemPedido novo_pedido;

    if(*quantidade < 10){
    printf("Digite o nome do produto: ");
    gets(novo_pedido.produto.nome);

    printf("Digite o preco do produto: ");
    scanf("%f%*c", &novo_pedido.produto.preco);

    printf("Digite a quantidade: ");
    scanf("%d%*c", &novo_pedido.quantidade);

    pedido[*quantidade] = novo_pedido;
    (*quantidade)++;

    printf("Inserido Com Sucesso.\n");
    
    } else{
        printf("Nao e possivel adicionar mais produtos.\n");
    }
}
void calcular_pedido(ItemPedido *pedido, int quantidade){
    float total = 0;

    for (int i = 0; i < quantidade; i++){
        total = total + (pedido[i].produto.preco * pedido[i].quantidade);
    }
    printf("Total a pagar: %.2f\n", total);
}

int main(){
    ItemPedido pedido[10];
    int quantidade = 0;
    int num;
    
    do{
        printf("-----Menu Principal-----\n");
        printf("1 - inserir item\n");
        printf("2 - Calcular total a pagar\n");
        printf("3 - Fim\n");
        printf("Escolha uma opcao: ");
        scanf("%d%*c", &num);

        switch (num){
        case 1:
            inserir_item(pedido, &quantidade);
            break;
        case 2:
            calcular_pedido(pedido, quantidade);
            break;
        case 3:
            printf("Fim do programa\n");
            break;
        default:
            printf("Opcao invalida\n");
        }
    } while (num != 3);
    
}