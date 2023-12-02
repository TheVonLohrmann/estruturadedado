#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

typedef struct {
    int Items[MAX_SIZE];
    int inicio, fim;
} Fila;

// Inicializando a fila
void inicializar(Fila *Fila) {
    Fila->inicio = -1;
    Fila->fim = -1;
}

// Verifica se a fila está vazia
int estaVazia(Fila *Fila) {
    return (Fila->inicio == -1 && Fila->fim == -1) || (Fila->inicio > Fila->fim);
}

void inserir(Fila *Fila, int data) {
    if (Fila->fim >= MAX_SIZE - 1) {
        printf("Esta cheia");
    } else {
        if (Fila->inicio == -1) {
            Fila->inicio = 0;
        }
        Fila->Items[++Fila->fim] = data;
    }
}

int apagar(Fila *Fila) {
    if (estaVazia(Fila)) {
        printf("A Fila esta vazia.\n");
        return -1;
    } else {
        return Fila->Items[Fila->inicio++]; // Retorna e incrementa o início
    }
}

int main() {
    Fila Fila;
    inicializar(&Fila);

    inserir(&Fila, 1);
    inserir(&Fila, 2);
    inserir(&Fila, 3);

    printf("Elemento removido: %d\n", apagar(&Fila));
    printf("Elemento removido: %d\n", apagar(&Fila));

    return 0;
}
