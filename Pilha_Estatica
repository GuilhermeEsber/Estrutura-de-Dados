#include <stdio.h>

#define MAX 5

int dispo = 0;
int pilha[MAX];

void inserir(int valor) {
    if (dispo < MAX){
        pilha[dispo] = valor;
        dispo ++;
    }
    else{
        printf("Pilha cheia");
    }
}

void remover() {
    if(dispo > 0){
        dispo--;
    }
    else{
        printf("Pilha vazia");
    }
}

void imprimir() {
    printf("--- Pilha ---\n");
    for(int i = 0; i < dispo; i++){
        printf("%d", pilha[i]);
    }
    printf("\n");
}

void tamanho(){
    printf("%d", dispo);
}

int main() {
    int valor = 0;
    
    for (int i = 0; i < MAX; i++) {
        printf("Insira o valor: ");
        scanf("%d", &valor);
        inserir(valor);
    }
    
    imprimir();
    
    printf("Tamanho da pilha:");
    tamanho();
    printf("\n");
    
    printf("Removendo ultimo elemento:\n");
    remover();
    
    imprimir();
    
    printf("Tamanho da pilha após remoção: ");
    tamanho();

    return 0;
}
