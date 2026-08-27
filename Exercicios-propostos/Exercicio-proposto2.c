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