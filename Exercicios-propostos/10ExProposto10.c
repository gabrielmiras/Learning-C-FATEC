/*Exercício Proposto10: Matriz Transposta (Matrizes e Funções) 
Desenvolva um programa que leia uma matriz A de tamanho 3 x 2. Implemente uma função que receba a 
matriz A e gere uma segunda matriz B, que representará a matriz transposta de A (tamanho 2 x 3). Imprima 
as duas matrizes de forma organizada na função main.*/

#include <stdio.h>

void gerarTransposta(int matrizA[3][2], int matrizB[2][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            matrizB[j][i] = matrizA[i][j];
        }
    }
}

int main() {
    int matrizA[3][2];
    int matrizB[2][3];

    printf("Digite os elementos da matriz A (3x2):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Elemento A[%d][%d]: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }

    gerarTransposta(matrizA, matrizB);

    printf("\nMatriz A (3x2):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", matrizA[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz Transposta B (2x3):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matrizB[i][j]);
        }
        printf("\n");
    }

    return 0;
}