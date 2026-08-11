#include <stdio.h>

void converterMoeda(float reais, int moeda) {
    if (moeda == 1) {
        reais = reais * 5;
        printf("A conversao para dolares da: %.2f\n", reais);
    }
    else if (moeda == 2) {
        reais = reais * 5.5;
        printf("A conversao para euros da: %.2f\n", reais);
    }
}

void calcularTaxa(float reais, int cliente){
    float taxa = 0;
    if (cliente == 1){
        taxa = reais * 0.02;
        printf("A taxa é de %2.f reais", taxa);
    }
    else if (cliente == 2){
        taxa = reais * 0.005;
        printf("A taxa é de %2.f reais", taxa);
    }
}

int main()
{
    float valorReias = 0;
    int tipoMoeda = 0;
    int tipoCliente = 0;
    
    printf("Qual o valor em reais?");
    scanf("%f", &valorReias);
    
    printf("Qual o tipo da moeda?\n");
    printf("1 - Dólar\n");
    printf("2 - Euro\n");
    
    scanf("%d", &tipoMoeda);
    
    printf("Escolha o tipo de cliente:\n");
    printf("1 - Comum\n");
    printf("2 - Vip\n");
    
    scanf("%d", &tipoCliente);
    
    converterMoeda(valorReias, tipoMoeda);
    calcularTaxa(valorReias, tipoCliente);
    
    return 0;
}
