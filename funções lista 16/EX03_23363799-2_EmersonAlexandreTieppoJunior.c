#include <stdio.h>

void rotacionarDireita(int arr[], int tamanho, int n) {
    int temp[n];
    
    // Armazenar os últimos n elementos em um array temporário
    for (int i = 0; i < n; i++) {
        temp[i] = arr[tamanho - n + i];
    }
    
    // Deslocar os elementos originais para a direita
    for (int i = tamanho - 1; i >= n; i--) {
        arr[i] = arr[i - n];
    }
    
    // Copiar os elementos temporários de volta para o array original
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

void imprimirArray(int arr[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int n = 2; // Número de posições a serem rotacionadas
    int tamanho = sizeof(array) / sizeof(array[0]);

    printf("Array original: ");
    imprimirArray(array, tamanho);

    rotacionarDireita(array, tamanho, n);

    printf("Array após a rotação de %d posições para a direita: ", n);
    imprimirArray(array, tamanho);

    return 0;
}
