#include <stdio.h>

void bubbleSort(int matriz[4][4]) {
    int i, j, k;
    int temp;
    int trocado;

    for (i = 0; i < 4; i++) {
        trocado = 0; // Inicializa a flag de troca como 0

        for (j = 0; j < 4 - i - 1; j++) {
            if (matriz[j][0] > matriz[j + 1][0]) { // Compara o primeiro elemento de cada linha
                // Troca as linhas
                for (k = 0; k < 4; k++) {
                    temp = matriz[j][k];
                    matriz[j][k] = matriz[j + 1][k];
                    matriz[j + 1][k] = temp;
                }
                trocado = 1; // Define a flag de troca como 1
            }
        }
        
        // Se nenhuma troca ocorreu nesta passagem, a matriz já está ordenada
        if (trocado == 0) {
            break;
        }
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

    bubbleSort(matriz); // Chama a função Bubble Sort para ordenar a matriz

    printf("\nMatriz ordenada:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
