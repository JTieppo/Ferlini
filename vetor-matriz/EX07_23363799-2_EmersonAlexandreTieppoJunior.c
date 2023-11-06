#include <stdio.h>

#define SIZE 3

int main() {
    int matriz[SIZE][SIZE], transposta[SIZE][SIZE];

    // Leitura da matriz 3x3
    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Cálculo da matriz transposta
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            transposta[i][j] = matriz[j][i];
        }
    }

    // Impressão da matriz transposta
    printf("\nMatriz transposta:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
