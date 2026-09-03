#include <stdio.h>

float somaDiagonalPrincipal(float matriz[4][4]) {
    float soma = 0.0;
    for (int i = 0; i < 4; i++) {
        soma += matriz[i][i];
    }
    return soma;
}

int main() {
    float matriz[4][4];
    float resultado;

    printf("Digite os elementos da matriz 4x4 (numeros reais):\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    resultado = somaDiagonalPrincipal(matriz);

    printf("\nA soma dos elementos da diagonal principal e: %.2f\n", resultado);

    return 0;
}