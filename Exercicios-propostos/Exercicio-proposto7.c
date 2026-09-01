#include <stdio.h>

void inverterVetor(int vetor[], int tamanho) {
    int temp;

    for (int i = 0; i < tamanho / 2; i++) {

        temp = vetor[i];

        vetor[i] = vetor[tamanho - 1 - i];

        vetor[tamanho - 1 - i] = temp;
    }
}

int main() {

    int meuVetor[6] = {10, 20, 30, 40, 50, 60};
    int tamanho = 6;


    printf("Vetor original: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", meuVetor[i]);
    }
    printf("\n");

    inverterVetor(meuVetor, tamanho);
    
    printf("Vetor modificado: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", meuVetor[i]);
    }
    printf("\n");

    return 0;
}