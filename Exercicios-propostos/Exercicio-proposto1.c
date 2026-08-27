#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

float funDolarpraReal (float dolar, float cotacao){
    float real = dolar * cotacao;
    return real;

}
    
int main ()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    float dolares; 
    float cotacao;

    printf("Digite o valor em dólares (USD) :");
    scanf(" %f", &dolares);

    printf("Digite a cotação do dia : ");
    scanf(" %f", &cotacao);
    
    float resultado = funDolarpraReal(dolares,cotacao);
    printf("%2.f", resultado);

    return 0;
    system("pause");
}