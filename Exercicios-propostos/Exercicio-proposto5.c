#include <stdio.h>
#include <stdlib.h>

void lerNotas(float notas[]) {
    for (int i = 0; i < 5; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }
}

float calcularMedia(float notas[]) {
    float soma = 0.0;
    for (int i = 0; i < 5; i++) {
        soma += notas[i];
    }
    return soma / 5.0;
}

int main (){
    float notas [5];
    lerNotas(notas);
    float mediaTurma = calcularMedia(notas);
    printf("Média das notas: %.2f\n", mediaTurma);
    return 0;
}