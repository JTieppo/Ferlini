#include <stdio.h>
#include <stdlib.h>

// Função para realizar a fusão (merge) de duas sub-listas ordenadas e contar as inversões
long long merge(int arr[], int temp[], int left, int mid, int right) {
    int i, j, k;
    long long inversoes = 0;

    i = left; // Índice para a sub-lista da esquerda
    j = mid;  // Índice para a sub-lista da direita
    k = left; // Índice para a lista temporária

    while ((i <= mid - 1) && (j <= right)) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            // Se arr[i] é maior que arr[j], então há inversões
            temp[k++] = arr[j++];
            inversoes += (mid - i);
        }
    }

    // Copiar os elementos restantes da sub-lista da esquerda, se houver
    while (i <= mid - 1) {
        temp[k++] = arr[i++];
    }

    // Copiar os elementos restantes da sub-lista da direita, se houver
    while (j <= right) {
        temp[k++] = arr[j++];
    }

    // Copiar os elementos da lista temporária para a lista original
    for (i = left; i <= right; i++) {
        arr[i] = temp[i];
    }

    return inversoes;
}

// Função principal de ordenação por intercalação (merge sort)
long long mergeSort(int arr[], int temp[], int left, int right) {
    long long inversoes = 0;
    if (right > left) {
        int mid = (left + right) / 2;

        // Recursivamente ordenar as sub-listas e contar as inversões
        inversoes += mergeSort(arr, temp, left, mid);
        inversoes += mergeSort(arr, temp, mid + 1, right);

        // Fundir as sub-listas e contar as inversões
        inversoes += merge(arr, temp, left, mid + 1, right);
    }
    return inversoes;
}

int main() {
    int n;

    // Solicitar o tamanho do array ao usuário
    printf("Digite o tamanho do array: ");
    scanf("%d", &n);

    int arr[n];
    int temp[n];

    // Solicitar os elementos do array ao usuário
    printf("Digite os elementos do array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Chamar a função mergeSort para ordenar o array e contar as inversões
    long long inversoes = mergeSort(arr, temp, 0, n - 1);

    // Imprimir o array ordenado
    printf("\nArray ordenado:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Imprimir o número de inversões
    printf("\nNúmero de inversões: %lld\n", inversoes);

    return 0;
}
