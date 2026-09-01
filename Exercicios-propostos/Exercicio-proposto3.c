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