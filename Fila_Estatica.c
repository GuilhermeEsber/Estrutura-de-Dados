#include <stdio.h>

#define MAX 5

int inicio = -1;
int fim = -1;
int fila[MAX];

void inserir(int valor) {
    if ((fim + 1) % MAX == inicio) {
        printf("Erro: Fila cheia!\n");
        return;
    }
    
    if (inicio == -1) {
        inicio = 0;
        fim = 0;
    } else {
        fim = (fim + 1) % MAX;
    }
    
    fila[fim] = valor;
}

void remover() {
    if (inicio == -1) {
        printf("Erro: Fila vazia!\n");
        return;
    }
    
    if (inicio == fim) {
        inicio = -1;
        fim = -1;
    } else {
        inicio = (inicio + 1) % MAX;
    }
}

void imprimir() {
    if (inicio == -1) {
        printf("Fila vazia!\n");
        return;
    }
    
    printf("Fila: ");
    int i = inicio;
    while (1) {
        printf("[%d] ", fila[i]);
        if (i == fim) {
            break; // Parou quando chegou no fim
        }
        i = (i + 1) % MAX; // Avança de forma circular
    }
    printf("\n");
}

int tamanho() {
    if (inicio == -1) return 0;
    if (fim >= inicio) return (fim - inicio + 1);
    return (MAX - inicio + fim + 1);
}

int main() {
    int valor = 0;
    
    for (int i = 0; i < MAX; i++) {
        printf("Insira o valor: ");
        scanf("%d", &valor);
        inserir(valor);
    }
    
    imprimir();
    
    printf("Tamanho da fila: %d\n", tamanho());
    
    printf("\nRemovendo primeiro elemento:\n");
    remover();
    
    imprimir();
    
    printf("Tamanho da fila após remoção: %d\n", tamanho());

    return 0;
}
