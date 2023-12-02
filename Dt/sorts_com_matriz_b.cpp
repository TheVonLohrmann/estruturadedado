#include <stdio.h>
#define ROWS 3
#define COLS 5

//bubble sort 
void bubbleSort(int matrix[][COLS], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLS - 1; j++) {
            for (int k = 0; k < COLS - j - 1; k++) {
                if (matrix[i][k] > matrix[i][k + 1]) {
                    int temp = matrix[i][k];
                    matrix[i][k] = matrix[i][k + 1];
                    matrix[i][k + 1] = temp;
                }
            }
        }
    }
}

void printMatrix(int matrix[][COLS], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[ROWS][COLS] = {
        {9, 3, 5, 2, 1},
        {7, 6, 4, 8, 10},
        {15, 12, 11, 13, 14}
    };

    printf("Matriz original:\n");
    printMatrix(matrix, ROWS);
    
    bubbleSort(matrix, ROWS);

    printf("\nMatriz ordenada:\n");
    printMatrix(matrix, ROWS);

    return 0;
}


//busca sequencial abaixo 
#include <stdio.h>
#define ROWS 3
#define COLS 3

void searchMatrix(int matrix[][COLS], int target) {
    int found = 0;

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (matrix[i][j] == target) {
                printf("O elemento %d foi encontrado na posição [%d][%d]\n", target, i, j);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("O elemento %d não foi encontrado na matriz.\n", target);
    }
}

int main() {
    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int target = 5;
    
    searchMatrix(matrix, target);

    return 0;
}
//insertion sort abaixo 

#include <stdio.h>
#define ROWS 3
#define COLS 4

void insertionSort(int matrix[][COLS], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 1; j < COLS; j++) {
            int key = matrix[i][j];
            int k = j - 1;

            while (k >= 0 && matrix[i][k] > key) {
                matrix[i][k + 1] = matrix[i][k];
                k--;
            }

            matrix[i][k + 1] = key;
        }
    }
}

void printMatrix(int matrix[][COLS], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[ROWS][COLS] = {
        {9, 3, 5, 1},
        {7, 6, 4, 2},
        {15, 12, 11, 13}
    };

    printf("Matriz original:\n");
    printMatrix(matrix, ROWS);

    insertionSort(matrix, ROWS);

    printf("\nMatriz ordenada:\n");
    printMatrix(matrix, ROWS);

    return 0;
}


