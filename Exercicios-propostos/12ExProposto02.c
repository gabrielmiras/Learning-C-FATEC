/*Exercício Proposto02: Sistema de Triagem Hospitalar (Saúde) 
Um hospital precisa automatizar o cálculo do IMC no sistema de triagem. Crie uma função chamada 
calcularIMC que receba o peso (em kg) e a altura (em metros) de um paciente e retorne o IMC obtido 
(\(\text{IMC} = \frac{\text{peso}}{\text{altura}^2}\)). No programa principal, utilize o retorno dessa função 
para exibir se o paciente está "Abaixo do peso" (IMC < 18.5), "Peso normal" (18.5 a 24.9) ou "Acima do 
peso" (IMC ≥ 25).*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

float calcularIMC (float peso , float altura){
    float IMC = peso / (altura*altura);
    return IMC;
}

int main (){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    float peso;
    float altura;

    printf("Qual seu peso :");
    scanf("%f", &peso);

    printf("Qual sua altura :");
    scanf("%f", &altura);

    float IMC = calcularIMC (peso,altura);
    printf("%2.f",IMC);

    if (IMC < 18.5){
        printf("Abaixo do peso");
    }
    else if (IMC >= 18.5 && IMC <= 24.9) {
        printf(" Peso normal\n");
    } 
    else {
        printf(" Acima do peso\n");
    }
    
    return 0;
   
}