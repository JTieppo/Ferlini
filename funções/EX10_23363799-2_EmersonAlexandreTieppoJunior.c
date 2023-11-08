#include <stdio.h>

#define MAX 100
long long int memoria[MAX];

void inicializarMemoria() {
    for (int i = 0; i < MAX; i++) {
        memoria[i] = -1;
    }
}

long long int fibonacci(int n) {
    if (memoria[n] == -1) {
        if (n <= 1) {
            memoria[n] = n;
        } else {
            memoria[n] = fibonacci(n - 1) + fibonacci(n - 2);
        }
    }
    return memoria[n];
}

int main() {
    int n = 50; // Enésimo número de Fibonacci a ser calculado
    inicializarMemoria(); // Inicializa a memória

    printf("O %d-ésimo número de Fibonacci é: %lld\n", n, fibonacci(n));

    return 0;
}
