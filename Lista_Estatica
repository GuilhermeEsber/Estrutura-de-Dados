#include <stdio.h>

#define MAX 5

int dispo = 0;
int lista[MAX];

void inserir(int valor) {
    if (dispo >= MAX) {
        printf("Lista cheia\n");
        return;
    }

    int i = dispo;

    while (i > 0 && lista[i - 1] > valor) {
        lista[i] = lista[i - 1];
        i--;
    }

    lista[i] = valor;
    dispo++;
}

void remover(int valor) {
    int i = 0;
    
    while (i < dispo && lista[i] < valor) {
        i++;
    }
    
    if (i < dispo && lista[i] == valor) {
        while (i < (dispo - 1)) {
            lista[i] = lista[i + 1];
            i++;
        }
        dispo--;
    } else {
        printf("Valor nao encontrado para remocao.\n");
    }
}

void imprimir() {
    printf("--- Lista ---\n");
    for (int i = 0; i < dispo; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");
}

void tamanho(){
    printf("%d", dispo);
}

int main() {
    int valor = 0;
    int sla = 0;
    
    for (int i = 0; i < MAX; i++) {
        printf("Insira o valor: ");
        scanf("%d", &valor);
        inserir(valor);
    }
    
    imprimir();
    
    printf("Tamanho da lista:");
    tamanho();
    printf("\n");
    
    printf("Insira o valor pra remover: ");
    scanf("%d", &sla);
    remover(sla);
    
    imprimir();
    
    printf("Tamanho da lista após remoção: ");
    tamanho();

    return 0;
}
