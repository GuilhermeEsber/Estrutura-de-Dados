#include <stdio.h>

int main()
{
    int tipoCliente, tipoFrete;
    float valorCompra;
    float descontoAplicado = 0;
    float valorAposDesconto = 0;
    float valorFrete = 0;
    float totalPagar = 0;
    
    printf("Qual o valor da compra?\n");
    
    scanf("%f", &valorCompra);
    
    printf("Escolha o tipo de clente:\n");
    printf("1 - Comum\n");
    printf("2 - VIP\n");
    printf("3 - Funcionário\n");
    
    scanf("%d", &tipoCliente);
    
    printf("Escolha o tipo de frete:\n");
    printf("1 - Padrão\n");
    printf("2 - Expresso\n");
    
    scanf("%d", &tipoFrete);
    
    if(tipoCliente == 1 && valorCompra >= 200){
        descontoAplicado = valorCompra * 0.05;
    }
    else if(tipoCliente == 1 && valorCompra < 200){
        descontoAplicado = 0;
    }
    else if(tipoCliente == 2){
        descontoAplicado = valorCompra * 0.1;
    }
    else if(tipoCliente == 3){
        descontoAplicado = valorCompra * 0.2;
    }
    
    
    
    if(tipoFrete == 1 && descontoAplicado >= 150){
        valorFrete = 0;
    }
    else if(tipoFrete == 1 && descontoAplicado < 150){
        valorFrete = 15;
    }
    if(tipoFrete == 2 && descontoAplicado >= 150){
        valorFrete = 15;
    }
    else if(tipoFrete == 2 && descontoAplicado < 150){
        valorFrete = 30;
    }
    

    valorAposDesconto = valorCompra - descontoAplicado;
    totalPagar = valorAposDesconto + valorFrete;
    
    printf("O valor da compra é %.2f\n", valorCompra);
    printf("O desconto é %.2f\n", descontoAplicado);
    printf("O valor após desconto é %.2f\n", valorAposDesconto);
    printf("O valor do frete é %.2f\n", valorFrete);
    printf("O total a pagar é %.2f\n", totalPagar);
    
    return 0;
}
