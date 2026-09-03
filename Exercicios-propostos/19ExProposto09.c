/*Exercício Proposto09: Diagonal Principal (Matrizes e Funções) 
Crie uma função que receba como parâmetro uma matriz quadrada de ordem 4 x 4 de números reais. A 
função deve calcular e retornar a soma de todos os elementos que pertencem à diagonal principal da 
matriz. */

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