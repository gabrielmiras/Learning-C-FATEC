/*Exercício Proposto05: Média de Notas (Vetores e Funções) 
Escreva um programa em C que possua uma função para ler as notas de 5 alunos e armazená-las em um 
vetor. Crie uma segunda função que receba esse vetor como parâmetro e retorne a média das notas da 
turma. O programa principal (main) deve gerenciar as chamadas e exibir o resultado final.*/

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