#include <stdio.h>
#include <stdlib.h>


void calcularpedido(float *valorFinal, float *custoFrete, float valorBruto) {
    if (valorBruto > 200.0) {
        *valorFinal = valorBruto - (valorBruto * 0.10);
    } else {
        *valorFinal = valorBruto; 
    }
    
    if (*valorFinal > 250.0) {
        *custoFrete = 0.0; 
    } else {
        *custoFrete = 15.0; 
    }

    *valorFinal = *valorFinal + *custoFrete;
}

int main() {
    float valorCompra, totalPagar, frete;

    printf("Digite o valor bruto das mercadorias: R$ ");
    scanf("%f", &valorCompra);
    
    calcularpedido(&totalPagar, &frete, valorCompra);
    
    printf("Custo do frete: R$ %.2f\n", frete);
    printf("Valor final a pagar: R$ %.2f\n", totalPagar);

    return 0;
}