#include <stdio.h>

#define SIZE 10

int main() {
    int matriz1[SIZE][SIZE], matriz2[SIZE][SIZE], resultado[SIZE][SIZE];

    // Leitura da primeira matriz
    printf("Digite os elementos da primeira matriz 10x10:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    // Leitura da segunda matriz
    printf("\nDigite os elementos da segunda matriz 10x10:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    // Inicializa a matriz resultado com zeros
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            resultado[i][j] = 0;
        }
    }

    // Multiplicação das matrizes
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            for (int k = 0; k < SIZE; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    // Impressão da matriz resultante
    printf("\nMatriz resultante da multiplicacao:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
