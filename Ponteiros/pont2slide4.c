#include <stdio.h>

void intercala_vetor(int *array1, int *array2, int *array3){
    for (int i = 0; i < 10; i++) {
        array3[i * 2] = array1[i];
        array3[i * 2 + 1] = array2[i];
    }
    
}


int main(){
    int vetor1[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19}, vetor2[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20}, vetor3[20];

    intercala_vetor(vetor1, vetor2, vetor3);

    printf("Vetor intercalado: ");
    for (int i = 0; i < 20; i++){
        printf("%d ", vetor3[i]);
    }
    
}