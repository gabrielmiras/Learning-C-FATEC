#include <stdio.h>

void encontrarMaiorElemento(int matriz[3][3], int *maior, int *linha, int *coluna) {
    *maior = matriz[0][0];
    *linha = 0;
    *coluna = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] > *maior) {
                *maior = matriz[i][j];
                *linha = i;
                *coluna = j;
            }
        }
    }
}

int main() {
    int matriz[3][3];
    int maiorValor, posLinha, posColuna;

    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    encontrarMaiorElemento(matriz, &maiorValor, &posLinha, &posColuna);

    printf("\nO maior valor encontrado foi: %d\n", maiorValor);
    printf("Ele esta localizado na Linha: %d, Coluna: %d\n", posLinha, posColuna);

    return 0;
}