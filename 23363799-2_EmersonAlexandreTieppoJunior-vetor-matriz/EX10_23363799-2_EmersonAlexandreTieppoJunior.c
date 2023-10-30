#include <stdio.h>

#define ROWS 4
#define COLS 3

int main() {
    int matriz[ROWS][COLS];

    // Leitura da matriz 4x3
    printf("Digite os elementos da matriz 4x3:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Cálculo e impressão da soma dos elementos de cada linha
    for (int i = 0; i < ROWS; i++) {
        int soma = 0;
        for (int j = 0; j < COLS; j++) {
            soma += matriz[i][j];
        }
        printf("A soma dos elementos da linha %d é: %d\n", i, soma);
    }

    return 0;
}
