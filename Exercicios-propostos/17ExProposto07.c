/*Exercício Proposto07: Inversão de Ordem (Vetores e Funções) 
Crie uma função que receba um vetor de 6 números inteiros e modifique-o diretamente, invertendo a ordem 
de todos os seus elementos (o primeiro passa a ser o último, o segundo passa a ser o penúltimo, e assim 
por diante). Exiba o vetor original e o vetor modificado na função principal.*/

#include <stdio.h>

void inverterVetor(int vetor[], int tamanho) {
    int temp;
    int i;

    for (i = 0; i < tamanho / 2; i++) {
        temp = vetor[i];
        vetor[i] = vetor[tamanho - 1 - i];
        vetor[tamanho - 1 - i] = temp;
    }
}

int main() {
    int meuVetor[6] = {10, 20, 30, 40, 50, 60};
    int tamanho = 6;
    int i; 

    printf("Vetor original: ");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", meuVetor[i]);
    }
    printf("\n");

    inverterVetor(meuVetor, tamanho);
    
    printf("Vetor modificado: ");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", meuVetor[i]);
    }
    printf("\n");

    return 0;
}