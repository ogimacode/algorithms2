
#include <stdio.h>
#include <string.h>

// Definição da struct Produto:

typedef struct {
    char nome[50];
    float preco;
} Produto;


// Definição da struct ItemPedido:

typedef struct {
    Produto produto;
    int quantidade;
} ItemPedido;


// Função para inserir um ItemPedido no vetor "pedido":

void inserirItem(ItemPedido *pedido, int *quantidade) {
    
    if (*quantidade < 10) 
    {
        ItemPedido novoItem;
        
        printf("Nome do produto: ");
        gets(novoItem.produto.nome);
        
        printf("Preço do produto: ");
        scanf("%f%*c", &novoItem.produto.preco);
        
        printf("Quantidade: ");
        scanf("%d%*c", &novoItem.quantidade);
        
        pedido[*quantidade] = novoItem;
        (*quantidade)++;
        
        printf("Item inserido com sucesso!\n");
        
    } 
    else 
    {
        printf("O pedido está cheio. Não é possível adicionar mais itens.\n");
    }
    
}

// Função para calcular e exibir o preço total do pedido
void calcularTotal(ItemPedido *pedido, int quantidade) {
    
    float total = 0.0;
    
    for (int i = 0; i < quantidade; i++) 
    {
        total = total + ( pedido[i].produto.preco * pedido[i].quantidade );
    }
    
    printf("Total a pagar: R$%.2f\n", total);
}

int main() {
    
    ItemPedido pedido[10];
    
    int quantidade = 0;
    int opcao;
    
    do {
        printf("\nMenu Principal:\n");
        printf("1 - Inserir Item\n");
        printf("2 - Calcular Total a Pagar\n");
        printf("3 - Fim\n");
        printf("Escolha uma opção: ");
        scanf("%d%*c", &opcao);
        
        switch (opcao) {
            case 1:
                inserirItem(pedido, &quantidade);
                break;
            case 2:
                calcularTotal(pedido, quantidade);
                break;
            case 3:
                printf("Encerrando o programa. Obrigado!\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
        
    } while (opcao != 3);
    
}



