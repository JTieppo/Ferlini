#include <stdio.h>

#define SIZE 4

int main() {
    int matriz[SIZE][SIZE];
    int maior = matriz[0][0]; // Inicializa o maior valor com o primeiro elemento da matriz
    int linha_maior = 0, coluna_maior = 0;

    // Leitura da matriz 4x4
    printf("Digite os elementos da matriz 4x4:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            // Verifica se o valor lido é maior que o maior valor atual
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linha_maior = i;
                coluna_maior = j;
            }
        }
    }

    // Impressão do maior valor e sua localização
    printf("\nO maior valor na matriz é %d, localizado na linha %d e coluna %d.\n", maior, linha_maior, coluna_maior);

    return 0;
}
