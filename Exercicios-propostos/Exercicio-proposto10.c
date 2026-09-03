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