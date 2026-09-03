/*Exercício Proposto03: Sensor de Fundição de Metais (Engenharia) 
O software de uma fábrica lê a temperatura de um forno industrial em graus Celsius, mas o painel digital 
de segurança opera em Fahrenheit. Implemente uma função chamada celsiusParaFahrenheit que receba 
a temperatura em Celsius e retorne o valor convertido (F = C × 1.8 + 32). O main deve simular a leitura de 
três temperaturas diferentes do sensor e mostrar a conversão de cada uma.*/

#include <stdio.h>

float celsiusParaFahrenheit(float c) {
    return (c * 1.8) + 32.0;
}

int main() {
    float temperaturaCelsius;

    printf("Digite a temperatura em graus Celsius: ");
    
    scanf("%f", &temperaturaCelsius);

    printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit.\n", 
           temperaturaCelsius, celsiusParaFahrenheit(temperaturaCelsius));

    return 0;
}