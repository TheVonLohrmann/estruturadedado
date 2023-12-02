#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

typedef struct {
    int items[MAX_SIZE];
    int top;
} Pilha;

// Inicializa a pilha
void inicializa(Pilha *Pilha) {
    Pilha->top = -1;
}

// Verifica se a pilha está vazia
int estaVazia(Pilha *Pilha) {
    return Pilha->top == -1;
}

// Verifica se a pilha está cheia
int estaCheia(Pilha *Pilha) {
    return Pilha->top == MAX_SIZE - 1;
}

// Insere um elemento no topo da pilha
void inseri(Pilha *Pilha, int data) {
    if (estaCheia(Pilha)) {
        printf("Esta cheia");
    } else {
        Pilha->items[++Pilha->top] = data; // Incrementa o topo e insere o elemento
    }
}

// Remove e retorna o elemento do topo da pilha
int apagar(Pilha *Pilha) {
    if (estaVazia(Pilha)) {
        printf("A pilha esta vazia.\n");
        return -1;
    } else {
        return Pilha->items[Pilha->top--]; // Retorna e decrementa o topo
    }
}

int main() {
    Pilha Pilha;
    inicializa(&Pilha);

    inseri(&Pilha, 1);
    inseri(&Pilha, 2);
    inseri(&Pilha, 3);

    printf("Elemento removido: %d\n", apagar(&Pilha));
    printf("Elemento removido: %d\n", apagar(&Pilha));

    return 0;
}
