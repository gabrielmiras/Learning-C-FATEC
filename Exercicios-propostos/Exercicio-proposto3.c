#include <stdio.h>

float celsiusParaFahrenheit(float c) {
    return (c * 1.8) + 32.0;
}

int main() {
    float temperatura1 = 150.0;
    float temperatura2 = 850.5;
    float temperatura3 = 1200.0;

    printf("--- Painel Digital de Seguranca ---\n");
    
    printf("Leitura 1: %.2f graus Celsius = %.2f graus Fahrenheit\n", 
           temperatura1, celsiusParaFahrenheit(temperatura1));
           
    printf("Leitura 2: %.2f graus Celsius = %.2f graus Fahrenheit\n", 
           temperatura2, celsiusParaFahrenheit(temperatura2));
           
    printf("Leitura 3: %.2f graus Celsius = %.2f graus Fahrenheit\n", 
           temperatura3, celsiusParaFahrenheit(temperatura3));

    return 0;
}