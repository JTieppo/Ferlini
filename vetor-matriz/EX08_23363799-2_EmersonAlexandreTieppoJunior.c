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

    // Verificação da simetria da matriz
    int simetrica = 1; // Variável para indicar se a matriz é simétrica (inicialmente consideramos que é)

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (matriz[i][j] != transposta[i][j]) {
                simetrica = 0; // Se algum elemento não for igual, a matriz não é simétrica
                break;
            }
        }
    }

    if (simetrica) {
        printf("\nA matriz é simétrica.\n");
    } else {
        printf("\nA matriz não é simétrica.\n");
    }

    return 0;
}
