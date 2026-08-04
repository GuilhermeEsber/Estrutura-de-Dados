#include <stdio.h>

int main()
{
    int quantidadeNumeros = 0;
    int numero;
    int total = 0;
    int maior = 0;
    int menor = 0;
    int numerosPares = 0;
    int numerosImpares = 0;
    int somaPares = 0;
    int somaImpares = 0;
    float mediaPares = 0;
    float mediaImpares = 0;
    
    while (1){
        
        printf("digite os numeros que quiser (0 termina o precesso)\n");
        scanf("%d", &numero);
        
        if (numero <= 0)
        {
            break;
        }
        
        if (quantidadeNumeros == 0){
        maior = numero;
        menor = numero;
        }
            
        total += numero;
        quantidadeNumeros += 1;
            
        if(numero > maior){
            maior = numero;
        }
        else if(numero < menor){
            menor = numero;
        }
        
        if((numero % 2)==0){
            numerosPares += 1;
            somaPares += numero;
            mediaPares = (float)somaPares / numerosPares;
        }
        else if((numero % 2)==1){
            numerosImpares += 1;
            somaImpares += numero;
            mediaImpares = (float)somaImpares / numerosImpares;
        }
    }
    
    printf("a quantidade de numeros inseridos é: %d\n", quantidadeNumeros);
    printf("a quantidade de numeros pares inseridos  é: %d\n", numerosPares);
    printf("a quantidade de numeros impares inseridos é: %d\n", numerosImpares);
    printf("o valor da soma dos pares é: %d\n", somaPares);
    printf("o valor da soma dos impares é: %d\n", somaImpares);
    printf("a media da soma dos pares é: %.2f\n", mediaPares);
    printf("a media da soma dos impares é: %.2f\n", mediaImpares);
    printf("o maior valor é: %d\n", maior);
    printf("o menor valor é: %d\n", menor);

    return 0;
}
