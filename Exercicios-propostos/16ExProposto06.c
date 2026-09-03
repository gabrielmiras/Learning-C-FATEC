/*Exercício Proposto06: Procura por Elemento (Vetores e Funções) 
Implemente uma função que receba um vetor de 10 inteiros e um número inteiro X. A função deve procurar 
o valor X no vetor. Se encontrar, retorna a posição (índice) da primeira ocorrência. Se não encontrar, retorna -1. No main, teste a função com dados fornecidos pelo usuário. */

#include <stdio.h>
#include <stdlib.h>

int procurarElemento(int vetor[], int x) {
    for (int i = 0; i < 10; i++) {
        if (vetor[i] == x) {
            return i; 
        }
    }
    return -1; 
}

int main(){
    int numeros[10];
    int valorx;
    int entrada;

    printf("Preencha o vetor com 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Posicao %d: ", i);
        scanf("%d", &numeros[i]);
}

printf("\nDigite o valor (X) que deseja procurar: ");
    scanf("%d", &valorx);

    entrada = procurarElemento(numeros, valorx );

    if (entrada != -1) {
        printf("\nO valor %d foi encontrado na posicao : %d\n", valorx, entrada);
    } else {
        printf("\nO valor %d nao existe no vetor. Retorno: %d\n", valorx, entrada);
    }

    return 0;
}