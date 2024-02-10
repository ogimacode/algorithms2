
#include <stdio.h>

void exibe(int v[])
{
    // cuidado aqui, 'hardcoded' para 10 elementos...
    for(int a=0; a<10; a++)
        printf("%d ", v[a]);
    printf("\n");
}

void QuickSort(int v[], int inicio, int fim)
{
    // Se inicio for igual a fim, só tem um elemento,
    // não há o que ordenar:
    if (inicio==fim)
        return;
        
    // Define o pivot e i.
    // j vai ser definido no laço, iniciando como i+1.
    int pivot = inicio;
    int i = inicio;
    int j;
    int aux;
    
    // Laço que faz j percorrer a lista pra direita.
    for(j=i+1; j<=fim; j++)
    {
        // Se o número em j for menor que o pivot,
        // anda i, e troca com ele:
        if( v[j] < v[pivot] )
        {
            i++;
            aux = v[i];
            v[i] = v[j];
            v[j] = aux;
        }
    }
    
    // Ao final da caminhada de j, troca i com o pivot:
    aux = v[i];   v[i] = v[pivot];   v[pivot] = aux;
    exibe(v);
    
    // Neste momento, i aponta para o pivot, em seu lugar correto.
    // A princípio temos duas sublistas que precisam ser ordenadas:
    // Elementos antes de i, e elementos após i.
    // Precisamos filtrar e ver se realmente existem duas listas,
    // pois as vezes o pivot já começa em seu lugar correto,
    // então só temos uma sublista, a direita ou esquerda dele.
    
    if (i-1 >= inicio)
        QuickSort(v, inicio, i-1);
    if (i+1 <= fim)
        QuickSort(v, i+1, fim);
}

int main()
{
    int V[] = { 44,88,77,22,66,11,99,55,00,33 };
    
    exibe(V);
    
    QuickSort(V, 0, 9);
    
}

