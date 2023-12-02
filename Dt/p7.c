#include <stdio.h>

// Função para ordenar uma linha da matriz usando o algoritmo Insertion Sort
void insertionSortRow(int row[], int length) {
    int i, chave, j;
    for (i = 1; i < length; i++) {
        chave = row[i];
        j = i - 1;
        while (j >= 0 && row[j] > chave) {
            row[j + 1] = row[j];
            j = j - 1;
        }
        row[j + 1] = chave;
    }
}

// Função para ordenar a matriz bidimensional usando Insertion Sort
void insertionSortMatrix(int matriz[4][4]) {
    for (int i = 0; i < 4; i++) {
        insertionSortRow(matriz[i], 4);
    }
}

int main() {
    int matriz[4][4] = {
        {45, 32, 83, 95},
        {26, 14, 37, 42},
        {40, 43, 65, 77},
        {74, 79, 48, 55}
    };

    printf("Matriz original:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

    insertionSortMatrix(matriz); // Chama a função Insertion Sort para ordenar a matriz

    printf("\nMatriz ordenada:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
