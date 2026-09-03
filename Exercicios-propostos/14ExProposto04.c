/*Exercício Proposto04: Checkout de E-commerce (Logística e Vendas) 
Uma loja online aplica 10% de desconto se o valor da compra for maior que R$ 200,00. Além disso, o frete 
é fixo em R$ 15,00, mas torna-se grátis se o valor final da compra (já com o desconto aplicado) for superior 
a R$ 250,00. Escreva uma função chamada calcularTotalPedido que receba o valor bruto das mercadorias 
e preencha, usando ponteiros (passagem por referência), o valor final a ser pago e o custo final do frete. */

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