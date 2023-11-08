#include <stdio.h>

int encontrarMaiorElemento(int arr[], int tamanho) {
    if (tamanho == 1) {
        return arr[0];
    } else {
        int maiorRestante = encontrarMaiorElemento(arr, tamanho - 1);
        return (maiorRestante > arr[tamanho - 1]) ? maiorRestante : arr[tamanho - 1];
    }
}

int main() {
    int numeros[] = {12, 45, 8, 27, 63, 14};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    int maior = encontrarMaiorElemento(numeros, tamanho);
    printf("O maior elemento do array é: %d\n", maior);

    return 0;
}
